#include<iostream>
using namespace std;
class arvind
{
    int number;
    public:
    void prime(int no);
};
void arvind :: prime(int no)
{
    int i;
    number=no;
    for( i=2;i<no;i++)
    {
        if(no%i==0)
        {
            cout<<"Not prime Number";
            break;
        }
    }
        if(i==no)
        {
            cout<<"Prime Number";
        }
    
}
int main()

{
    arvind a;
    int n;
    cout<<"Enter Any Number= ";
    cin>>n;
    a.prime(n);
    return 0;

}