


#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    int i = 0;
    cin >> t;
    while (i <= t)
    {
        int n;
        cin >> n;
        print(n);
        i++;
    }
}