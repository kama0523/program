#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        sum += A.at(i);
    }

    int average = sum / N;

    for (int i = 0; i < N; i++)
    {
        // 負の数を出力しない
        if (A.at(i) > average)
        {
            cout << A.at(i) - average << endl;
        }
        else
        {
            cout << average - A.at(i) << endl;
        }
    }
}
