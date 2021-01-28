#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0;; i++)
    {
        sum += i;
        if (sum >= n)
        {
            break;
        }
    }
    cout << sum;
}