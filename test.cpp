#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    try
    {
        /* code */
        
    vector<string> Name;
    string name="";
     while(name!="exit")
     {
        cout<<"Type some names ";
        cin>>name;
        Name.push_back(name);
    }
    name=Name[Name.size()];

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}