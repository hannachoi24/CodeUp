#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    int sum = 0;
    while (true)
    {
        sum += i;
        if (sum >= n)
        {
            cout << i;
            break;
        }

        else
        {
            i += 1;
        }
    }
}
