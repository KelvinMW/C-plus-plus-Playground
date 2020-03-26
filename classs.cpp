#include <iostream>
#include <string>

using namespace std;

class Registration
{
private:
    /* data */
    string name;
public:
    void setName(string newNAME){
        name=newNAME;
    }
    string getName(){
        return name;
    }
    Registration(/* args */);
    ~Registration();
};

Registration::Registration(/* args */)
{
}

Registration::~Registration()
{
}
int main(){
    Registration newNAMES;
    newNAMES.setName("KELVIN TESLA");
    std::cout<<newNAMES.getName();
}