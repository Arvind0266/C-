#include<iostream>
using namespace std;
class interest
{
    float p,t,r,inte;
  float returnval;
  public:
  interest(){}
// interest(float x,float y,float z)
// {
//     p=x;
//     t=y;
//     r=z;
//     inte=p*t*r;
//    returnval=p+inte;
// }
interest(float x=100,float y=2,int z=4)
{
      p=x;
    t=y;
    r=z;
    inte=(p*t*r)/100;
   returnval=p+inte;
}
void calculate()
{
cout<<"Principal is "<<p<<endl<<"time= "<<t<<endl<<"rate= "<<r<<endl<<"interest="<<inte<<endl<<"return val= "<<returnval<<endl;

}
};
int main()
{
    float p,t,r;
    cout<<"ENtre principal ,time and rate= "<<endl;
    cin>>p>>t>>r;
interest bank(p);
bank.calculate();


return 0;
}