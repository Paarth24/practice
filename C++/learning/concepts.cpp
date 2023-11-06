#include <iostream>
using namespace std;

template <typename T>
T add(T a,T b){
    return(a + b);
}

int main(){
    int p = 10;
    int q = 20;
    cout << add(p,q) << endl;
}