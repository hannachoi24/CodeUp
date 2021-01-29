#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    int arr[19][19] = {
        0,
    };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[x - 1][y - 1] = 1;
    }
    for (int j = 0; j < 19; j++)
    {
        for (int k = 0; k < 19; k++)
        {
            cout << arr[j][k] << ' ';
        }
        cout << endl;
    }
}