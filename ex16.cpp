//THIS PROGRAM USES VECTORS TO STORE STRING AND NUMBER
//ALLOWS USER INPUT
//CALCULATES THE TOTAL AVERAGE
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Statistics{
    vector <string>Days;
    vector<double>Temps;
    public:

    string RecordDays(){
    string Day;
    cout<<"Enter the Day: ";
    cin>>Day;
    Days.push_back(Day);
    cout<<"\t";
}

double RecordTemp(){
    double Temp;
    cout<<"Enter the recorded Temperature: ";
    cin>>Temp;
    Temps.push_back(Temp);
}
int calculate(){
    int days=0;
    while(days<3){
    RecordDays();
    RecordTemp();
    days++;
    }
    double TotalTemp=0;
    for (size_t i = 0; i <Temps.size(); i++)
    {
        TotalTemp+=Temps[i];
    }
    cout<<"THE TOTATL TEMPERATURE RECORDED :"<<TotalTemp<<endl;
    double AverageTemperature=TotalTemp/(Temps.size());
    cout<<"\nThe Average Recorded Temperature :"<<AverageTemperature<<" °C";
}
void Display(){
    cout<<"\nDay \t"<<"Temperature"<<endl;
    for(int j=0; j<Temps.size(); j++){
    cout<<Days[j]<<" \t"<<Temps[j]<<endl;
    }
}


};
int main(){
    Statistics Temperature;
    Temperature.calculate();
    Temperature.Display();
}