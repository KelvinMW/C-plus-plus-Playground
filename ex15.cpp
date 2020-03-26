#include <iostream>
#include <vector>

using namespace std;
double square(int i){
    return i*i;
}
int printS(){
        int i=1;
    while (i<100)
    {
        cout<<i<<"\t"<<square(i)<<endl;
        i++;
    }
}
int main(){
    vector<int> score;
    score.push_back(5);
    score.push_back(8);
    score.push_back(4);
    for(int i=0; i<score.size(); i++){
        cout<<"score ["<<i<<"]"<<" == "<<score[i]<<endl;
    }
    vector<string>teams;
    teams.push_back("Arsenal");
    teams.push_back("Barcelona");
    teams.push_back("Chelsea");
    cout<<teams[0];
}
