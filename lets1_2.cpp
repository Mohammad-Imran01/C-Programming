#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter distance in kilometers:"<<endl;
    int km;
    cin>>km;

      double foot = 3280*km;
    float meters = 1000*km;
    double c_meters = 1000*100*km;
    double inches = 0.0254*meters*1000;

    cout<<endl<<km<<" km"<<" = " <<meters<<" meters"<<endl;
    cout<<endl<<km<<" km"<<" = " <<inches<<" inches"<<endl;
    cout<<endl<<km<<" km"<<" = " <<foot<<" foots"<<endl;
    cout<<endl<<km<<" km"<<" = " <<c_meters<<" centimeters"<<endl;

    return 0;

    

  
}