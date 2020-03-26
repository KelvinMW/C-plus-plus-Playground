#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout<<"Enter Your Name :";
    std::cin>>name;

    const std::string greetings= "Hello, "+name+"!";
    const std::string spaces(greetings.size(),' ');
    const std::string second="*"+spaces+"*";
    const std::string first(greetings.size(), '*');


    //output
    std::cout<<std::endl;
    std::cout<<first<<std::endl;
    std::cout<<second<<std::endl;
    std::cout<<greetings<<std::endl;
    std::cout<<second<<std::endl;
    std::cout<<first<<std::endl;

}
