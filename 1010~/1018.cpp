#include <iostream>
using namespace std;

int main()
{
    int s;
    int t;

    cin >> s;
    cin.ignore(256, ':');
    cin >> t;

    cout << s << ":" << t << endl;
}