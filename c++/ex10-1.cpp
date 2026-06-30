#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "A:" << string(a, ']') << endl;
    cout << "B:" << string(b, ']') << endl;
}