#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
   

public:
 int itemNo;
    void Item(int);
    void setPrice(void);
    void getPrice(void);
};
void shop::Item(int n)
 {

    cout << "Enter No of items ";
itemNo=n;
    cin >> n;

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
{int n;
    shop arvind;
    arvind.Item(n);
    arvind.setPrice();
    arvind.getPrice();
    return 0;
}