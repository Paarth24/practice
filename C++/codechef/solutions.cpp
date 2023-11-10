#include <iostream>
#include<bits/stdc++.h> 
using namespace std; 
 
string sortString(string &str) 
{ 
   sort(str.begin(), str.end());
   return(str); 
} 

int main(){
    int c;
    cin >> c;
    while(c != 0){ 
        string s;
        int n;
        cin >> n >> s;  
        cout << sortString(s); 

    }

    return 0; 
} 