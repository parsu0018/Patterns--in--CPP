#include <iostream>
using namespace std;
void Print(int n)

{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void Print1(int n){
    for (int i = 0 ;i<=n;i++){
        for (int j = 0;j<i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void Print2(int n){
    for (int i = 0;i<=n;i++){
        for (int j = 1;j<n-i;j++){
            cout << j << " ";

        }

        cout << endl;
    }
}
void Print3(int n){
    for (int i = 0;i<=n;i++){
        for (int j = 0;j<n-i;j++){
            cout << i << " ";
    }
        cout << endl;
    }
}


int main()
{
    int t;
    cin >> t;
    for (int i = 0; i <= t; i++)
    {
        int n;
        cin >> n;
        Print3(n);
    }

    return 0;
}