#include <iostream>
using namespace std;

int main (){

    int n ;
    cout << "Enter n = ";
    cin >> n;

    int i = 0;

    while ( i < n){

        int j = 1;
        while ( j <= n){

            cout << j;
            j += 1;

        }
        cout << "\n";
        i += 1;


    }

}