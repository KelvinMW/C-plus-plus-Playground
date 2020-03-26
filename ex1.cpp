#include <iostream>
#include <string>

//write infinitly until "goodbye"

int main(){
    using namespace std;
    string String;
    do{
        cout<<"Write! :";
        getline(cin, String);
    }while(String !="goodbye");
    }