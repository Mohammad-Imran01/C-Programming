#include<iostream>
using namespace std;

struct rectangle
{
    int length ;
    int breadth;
    char a;
};
int main()
{
    struct rectangle r1={1,2};
    cout<<sizeof(r1)<<endl;
    return 0;
}