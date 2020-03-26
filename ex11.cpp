#include <iostream>
#include <string>
int main(){
    {
        std::string s = "a string";
        {
            std::string x = s + ", really";
std::cout << s << std::endl;

std::string::size_type cols=x.size();
std::cout << x << std::endl;

}
return 0;
}
}