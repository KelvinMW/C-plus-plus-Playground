#include <iostream>
using namespace std;

const char endOfCharaArray = '\0';
//./variable_pointers 123 456 798
int main(int argc, char const *argv[])
{
    /* logic */
    if(argc<2){
        cerr<<"Error: No arguments on the comand line"<<endl;
        return 1;
    } else {
        for(int i = 0; i < argc; i++){
            while(*argv[i]!=endOfCharaArray){
                argv[i]++;
            }
            cout<<endl;
        }
    }
    return 0;
}
