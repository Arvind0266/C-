#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int itemNo;

public:
    void Item(void);
    void setPrice(void);
    void getPrice(void);
    shop();
};
shop::shop()
{
    itemNo=0;
}
void shop::Item(void)
 {

    cout << "Enter No of items ";

    cin >> itemNo;

}
void shop::setPrice(void)
{
    for (int i = 0; i < itemNo; i++)
    {
        cout << "Enter Id of your item no " << i + 1 << endl;
        cin >> itemId[itemNo];
        cout << "Enter Price of your item" << endl;
        cin >> itemPrice[itemNo];
    }
}
void shop::getPrice(void)
{
    for (int i = 0; i < itemNo; i++)
    {
        cout << "The Price of item with Id " <<itemId[i]<< " is " <<itemPrice[i]<< endl;
    }
}
int main()
{
    shop arvind;
    arvind.Item();
    arvind.setPrice();
    arvind.getPrice();
    return 0;
}