#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl;    using std::string;

int main(){
    cout<<endl;
    cout<<"ENTER YOUR MESSAGE: ";
    cout<<endl;
    string message;
    cin>>message;
    cout<<endl;
    //Arranging the output
    int pad=1;
    string::size_type col=message.size()+pad*2+2;
    int row=pad+3;

    for(int r=0; r!=row; r++){
        string::size_type c=0;
        while(c!=col){
            if(c==pad+1 && r==pad+1){
                cout<<message;
                c+=message.size();
            }else{
                if(r==0 || r==row-1 || c==0 || c==col-1)
                cout<<"*";
                else
                cout<<"";
                ++c;                
            }            
        }
        cout<<endl;

    }

}