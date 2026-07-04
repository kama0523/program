#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int max, min;
    if (A >= B)
    {
        if (A >= C)
        {
            max = A;
            if (B >= C)
            {
                min = C;
            }
            else if (C > B)
            {
                min = B;
            }
        }
        else if (C > A)
        {
            max = C;
            min = B;
        }
    }
    else if (A < B)
    {
        if (B >= C)
        {
            max = B;
            if (A >= C)
            {
                min = C;
            }
            else if (C > A)
            {
                min = A;
            }
        }
        else if (C > B)
        {
            max = C;
            min = A;
        }
    }
    int ans;
    ans = max - min;
    cout << ans << endl;
}
