#include <iostream>

using namespace std; // so that we dont have to type "" each time to use library funs. We use them directly.

int main()
{
    int x = 10;
    int y = 20;

    // 1- Link multiple outputs into single line

    // 2- NOT RECOMENDED - End of line with "\n"
    // 2a) End of line with "\n"
    cout << "x = " << x << "\n"; // output: x = 10\n
    cout << "y = " << y << "\n"; // output: y = 20\n

    // 2b) RECOMMENDED - End of line with `endl`
    cout << "x = " << x << endl 
         << "y = " << y << endl;
}