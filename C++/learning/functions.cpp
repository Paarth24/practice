#include <iostream>
using namespace std;
#include "test_functions.h"

int main(){
    int a,b;
    cout << "Enter Divedend" << endl;
    cin >> a;
    cout << "Enter Divisor" << endl;
    cin >> b;
    try{
        cout << divide(a,b);
    }catch(int x){
        cerr << "Error" << endl;
    }

    cout << "Continue test" << endl;
}
