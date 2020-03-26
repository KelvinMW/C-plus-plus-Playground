#include <iostream>
#include <string>
#include <array>
//using 
using namespace std;

int main(){
    string Name="Tesla";
    array<string, 5>Arr={"kamau","fidel","kelvin","maina","waa"};

    for(string c: Arr){
        cout<<c<<",";
    }
}