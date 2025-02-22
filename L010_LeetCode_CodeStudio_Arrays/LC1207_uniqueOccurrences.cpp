#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> occ;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        bool con = true;
        for (int m = 0; m < i; m++)
        {
            if (arr[m] == arr[i])
            {
                con = false;
                break;
            }
        }
        if (con == false)
        {
            continue;
        }

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        occ.push_back(count);
    }

    int size2 = occ.size();

    for (int k = 0; k < size2; k++)
    {
        int flag = 1;
        for (int l = 0; l < size2; l++)
        {
            if (occ[l] == occ[k])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3};

    if (uniqueOccurrences(arr))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}