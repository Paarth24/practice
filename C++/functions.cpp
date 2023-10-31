#include <iostream>
using namespace std;
#include "test_functions.h"

int main(){
    int a{10};
    a = max(&a);
    cout << a << endl;
}