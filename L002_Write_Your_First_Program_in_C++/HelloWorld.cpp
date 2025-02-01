#include <iostream> // This is a preprocessor directive that includes the standard input-output stream library in the program. It allows us to use functions like 'cout' for output and 'cin' for input.

using namespace std; // This line tells the compiler to use the standard namespace, so we don’t have to write 'std::' before standard library functions like 'cout' and 'endl'.

int main()
{ // This is the main function where the execution of the program begins.

    cout << "Hello World" << endl;
    // 'cout' is used to print output to the console.
    // '<<' is the insertion operator, which sends the string "Hello World" to the standard output.
    // 'endl' is used to insert a newline character, ensuring that the cursor moves to the next line after printing.

    return 0;
    // 'return 0;' indicates that the program has executed successfully.
    // It is the exit status of the main function. Returning 0 means the program ran without any errors.
}
