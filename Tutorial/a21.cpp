#include<iostream>
using namespace std;
class arvind
{
    int n;
    friend void evenodd();
    public:
    void getData(int x)
    {
        n=x;
    }
    void isPrime()
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"Not prime "<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<"prime number"<<endl;
        }
    }
};
void evenodd()
{
    arvind ob;
    if(ob.n%2==0)
    {
        cout<<"Even "<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}

int main()
{  int a;
    cout<<"enter any number= ";
    cin>>a;
arvind op;
op.getData(a);
op.isPrime();
evenodd();


return 0;
}