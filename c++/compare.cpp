#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 10)
    {
        cout << "xは10よりも小さい" << endl;
    }
    else if (x == 10)
    {
        cout << "xは10" << endl;
    }
    else
        cout << "xは10よりも大きい" << endl;

    cout << "終了" << endl;
}