#include <iostream>
using namespace std;
class shop
{
private:
    /* data */
    int itemId[100];
    int n;
    int price[100];

public:
    void initCounter() { n = 0; }
    void getprice();
    void setprice();
} dukan;
void shop::setprice()
{

    cout << "Enter the no of items = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the id of item your number " << i + 1 << "= " ;
        cin>> itemId[i] ;
        cout << "Enter the price of your item = " ;
        cin>> price[i];
    }
}
void shop::getprice()
{
    for (int i = 0; i < n; i++)
    {
        cout << "The item with id = " << itemId[i] << "  has price = " << price[i] << endl;
    }
}
int main()
{
    dukan.initCounter();
    dukan.setprice();
    dukan.getprice();
    return 0;
}