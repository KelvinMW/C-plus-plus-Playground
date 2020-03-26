#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numer_of_words=0;
    char current=' ';
    string previous;
    cout<<"WRITE WORDS AND PRESS ENTER : \n";
    cin>>current;
        switch(current){
            case 's':
            cin>>previous;
            numer_of_words++;
            break;
            case ' ':
            cout<<"No Word :"<<endl;
            break;
            
            default:
            break;
        }
}