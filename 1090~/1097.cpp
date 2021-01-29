#include <iostream>
using namespace std;
int main()
{
    int array[19][19], n, x, y;
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cin >> array[i][j];
        }
    }
    cin >> n;
    for (int m = 0; m < n; m++)
    {
        cin >> x >> y;
        for (int k = 0; k < 19; k++)
        {
            array[x - 1][k] = not array[x - 1][k];
            array[k][y - 1] = not array[k][y - 1];
        }
    }

    for (int q = 0; q < 19; q++)
    {
        for (int v = 0; v < 19; v++)
        {
            cout << array[q][v] << " ";
        }
        cout << endl;
    }
}