#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0;i<n;i++){
        for (char ch ='A';ch<n-i+'A'+1;ch++){
            cout << ch << " ";
        }

        cout <<endl;
    }




    return 0;
}