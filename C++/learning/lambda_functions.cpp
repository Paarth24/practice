#include <iostream>
using namespace std;

int main(){
    auto add = [](int a, int b){
        cout << a + b << endl;
    };

    int a = 100;
    int b = 10;

    auto sub = [&a,&b](){
        cout << a - b << endl;
    };

    // sub();

    int age = 16;

    auto incr = [&age](){
        cout << age << endl;
    };

    for(size_t i = 0; i < 4; ++i){
        ++age;
        incr();
    }

    cout << age;
}
