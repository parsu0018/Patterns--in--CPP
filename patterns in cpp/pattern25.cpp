#include<iostream>
using namespace std;
void Print1(int n){
    for (int i = 0;i<=n;i++){
        for (int j = 0;j<i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=0;i<=n;i++){
        for (int k = 1;k<n-i;k++){
            cout << "* ";
        }
        cout << endl;
    }

}
 int start = 1;
void Print2(int n){
    
    for (int i =0;i<n;i++){
        
        for (int j=1;j<=i;j++){
            cout << start << " ";
        }   start = 1+start;
        cout << endl;
    }
}
int main(){
    int t;
    cin >>t;
    for (int i = 0;i<=t;i++){
        int n;
        cin >> n;
        Print2(n);
    }






    return 0;
}