#include <iostream> 
using namespace std; 

class cuboid{
    public :
        double length{10};
        double breadth{20};
        double height{5};
    public :
        double volume(double& a){
            a = length*breadth*height;
            return(a);
        }
};

int main(){
    cuboid brick;
    double vol = 0;
    brick.volume(vol);
    cout << vol << endl;
}