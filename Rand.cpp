#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    for(int r=0; r<7; r++)
    {
        cout<<rand()%100<<" ";
        while(r<4){
            cout<<"\n"<<rand()%100<<"\n";
        r+=1;    
        }
    }
        
}
