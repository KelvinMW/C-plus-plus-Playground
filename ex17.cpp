#include <iostream>
#include <vector>

using namespace std;
class Checker
{
    vector<string>WordIn;
    vector<string>DislikeBank;
    string dislike;
private:
public:

    string GetDislikeWord(){
        cout<<"Enter TWO Words you Dislike :\n When Done! type 'end' \n";
        string dislike;
        while(dislike!="end"){
            cin>>dislike;
            DislikeBank.push_back(dislike);
        }
        cout<<"Enter words : \n";
        string word;
        string Check;            
        while(Check!=DislikeBank[0] && Check!=DislikeBank[1])
        {
        cin>>word;
        WordIn.push_back(word);
        Check=word;
        }
        cout<<"BLEEP \n";
    }   
};

int main(){
    Checker checkWords;
    checkWords.GetDislikeWord();

}