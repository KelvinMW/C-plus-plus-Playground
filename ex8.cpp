#include <iostream>
using namespace std;

void Text();

int main(int argc, char const *argv[])
{
    /* code */
    Text();
    return 0;
}
void Text(){
    string write;
    while(write!= "goodbye"){
        cout<<"Write :" <<endl;
        getline(cin, write);
    }
}