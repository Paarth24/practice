#include <iostream>
#include <concepts>
using namespace std;

template <typename T>
T add(T a,T b){
    return(a + b);
}

int main(){
    int p = 10;
    int q = 10;
    cout << add(p,q) << endl;
}

//Need to work on 
//Didn't finished concepts in c++