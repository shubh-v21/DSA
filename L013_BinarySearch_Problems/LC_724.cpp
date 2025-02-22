#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int leftSum = 0;
        int rightSum = 0;
        for (int l = 0; l < i; l++)
        {
            leftSum = leftSum + nums[l];
        }
        for (int r = i + 1; r < nums.size(); r++)
        {
            rightSum = rightSum + nums[r];
        }

        if (leftSum == rightSum)
        {
            return i;
        }
    }
}

int main()
{
    vector<int> arr = {2,1,-1};

    cout << pivotIndex(arr) << endl;

    return 0;
}