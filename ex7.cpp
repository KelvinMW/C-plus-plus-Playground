#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("ImissHome");
    string s2;
    string s3;
    s2.assign(s1);
    for(int x = 6 ; x<s2.length(); x--){
        cout<<s2.at(x)<<endl;
    }
    s3.assign(s1.substr(2, 6));
    cout<<s3;
    }

    /*
    for(int x=0; x<10; x++){
    
    cout<<"";
    for(int i=10; i>0; i--){
        cout<<"*"<<endl;
    }
}
**/