#include <iostream>
using namespace std;

template < typename T >
T& add(T& a, T& b){
    return(a = a + b);
}

int main(){

    int x = 10;
    int y = 20;
    double p = 10.5;
    double q = 11.5;

    add(&x,&y);
    add(&p,&q);

    cout << x << endl << p;
}