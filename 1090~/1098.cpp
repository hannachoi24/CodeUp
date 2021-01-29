#include <iostream>
using namespace std;
int main()
{
    int h, w, n, l, d, x, y;
    cin >> h >> w;
    cin >> n;
    int array[100][100] = {
        0,
    };

    for (int i = 0; i < n; i++)
    {
        cin >> l >> d >> x >> y;
        for (int k = 0; k < l; k++)
        {
            if (d == 0)
            {
                array[x - 1][y - 1 + k] = 1;
            }
            else
            {
                array[x - 1 + k][y - 1] = 1;
            }
        }
    }
    for (int q = 0; q < h; q++)
    {
        for (int z = 0; z < w; z++)
        {
            cout << array[q][z] << " ";
        }
        cout << endl;
    }
}