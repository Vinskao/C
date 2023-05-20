#include <iostream>
using namespace std;
int a;
int main()
{
    a = 2 + 3;
    int b = a + 2;
    a = 10;
    int c = a + b;
    cout << c << endl;
    return 0;
}