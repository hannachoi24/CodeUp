#include <iostream>
using namespace std;

int main()
{
    int a, b, c, result1, result2;
    cin >> a >> b >> c;
    result1 = a < b ? a : b;
    result2 = result1 < c ? result1 : c;
    cout << result2;
}