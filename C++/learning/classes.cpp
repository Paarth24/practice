#include <iostream> 
using namespace std; 
#include "cubiod.h"

int main(){
    cuboid brick1(2,2,10);
    cout << brick1.volume() << endl;
    cuboid brick2(1,2,3);
    cout << brick2.volume() << endl;
    cuboid brick3;
    cout << brick3.volume() << endl;

}