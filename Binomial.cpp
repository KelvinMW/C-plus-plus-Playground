//FACTORIAL SECTION
#include <iostream>
void Factorial()
{
    long double numerator=1;
    long double denominator=1;
    int power;
    long double fact=1;
    std::string variable1;
    std::string variable2;
    std::cout<<"Enter the first variable of your binomial : ";
    std::cin>>variable1;
    std::cout<<"Enter the second variable of your binomial : ";
    std::cin>>variable2;
    std::cout<<"The power of your binomial :";
    std::cin>>power;

    //int i=power;
    //logic
    //power combined with denominator        
    //Power combined with denominator
    int i=power;
    int px=power;
    int py=0;

    std::cout<<std::endl;
    std::cout<<1<<"("<<variable1<<")^"<<px<<"("<<variable2<<")^"<<py;
    for(int count=1; count<=power; count++){
        px--;
        py++;
        numerator=numerator*i;
        denominator=denominator*count;
        std::cout<<" + "<<numerator/denominator<<"("<<variable1<<")^"<<px<<"("<<variable2<<")^"<<py;
        i--;
        }
        std::string saredo;
/*
    for(int i=power; i>0; i--){
    //loop
        int j=1;
    while(i!=power-3 && j++ && j<=i){
        denominator=denominator*j;
        numerator=numerator*i;
        std::cout<<std::endl
        <<std::endl<<"COEFFICIENT :"<<numerator/denominator;
        }
    while (i==power-3)
    {
        for()
        j--;
        i--;
        numerator=numerator*i;
        denominator=denominator*i;
        std::cout<<std::endl
        <<std::endl<<"COEFFICIENT :"<<numerator/denominator;
    }
    
   // if(j!=power-3){
    //    denominator=denominator*j;
      //  }else{
        //denominator=denominator*j;
        //j--;
        //}
    }
    */
}
int main()
{
    Factorial();
}
//an increasing number monitored by a power 
//numerator=power!
//denominator++ || denominator<=power
//output of (numerator!/denomminator!)