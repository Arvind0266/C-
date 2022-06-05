#include <iostream>
using namespace std;

// int main(){

//     int *p = new int(40);
//     cout << "The value at address p is " << (p) << endl;

//     return 0;
// }

//NEW
/*#include <iostream>
using namespace std;

int main()
{

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    cout << "The value of arr[0] is " << &arr[0] << endl;
    cout << "The value of arr[1] is " << &arr[1] << endl;
    cout << "The value of arr[2] is " << &arr[2] << endl;

    cout << "The value of arr[0] is " << arr << endl;
    arr++;
    cout << "The value of arr[1] is " << arr << endl;
    arr++;
    cout << "The value of arr[2] is " << arr << endl;

    return 0;
}
// */
// #include <iostream>
// using namespace std;

// class Complex
// {
//     int real, imaginary;

// public:
//     void getData()
//     {
//         cout << "The real part is " << real << endl;
//         cout << "The imaginary part is " << imaginary << endl;
//     }

//     void setData(int a, int b)
//     {
//         real = a;
//         imaginary = b;
//     }
// };
// int main()
// {
//     Complex *ptr = new Complex;
//     ptr->setData(1, 54);
//     ptr->getData();

//     // Array of Objects
//     Complex *ptr1 = new Complex[4];
//     ptr1->setData(1, 4);
//     ptr1->getData();

//     Complex c1;
//     c1.setData(10, 20);
//     c1.getData();

//     // Complex c2;
//     // Complex *p1=&c2;
//     // c2.setData(12,24);
//     // c2.getData();
//     Complex *p1 = new Complex;

//     (*p1).setData(12, 24);
//     (*p1).getData();
//     p1->setData(21, 21);
//     p1->getData();
// ;
//     return 0;
// }
#include <iostream>
using namespace std;

// class ShopItem
// {
//     int id;
//     float price;

// public:
//     void setData(int a, float b)
//     {
//         id = a;
//         price = b;
//     }
//     void getData(void)
//     {
//         cout << "Code of this item is " << id << endl;
//         cout << "Price of this item is " << price << endl;
//     }
// };
// int main()
// {
//     int id;
//     float price;
//     ShopItem *ptr = new ShopItem[3];
//     ShopItem *ptr1 = ptr;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Enter The ID and PRICE of the item  ";
//         cin >> id >> price;
//         ptr->setData(id, price);
//         /* code */ ptr++;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         ptr1->getData();
//         ptr1++;
//     }
//     return 0;
// }

class A
{
    int a;

public:
    // A & setData(int a)
    // {
    //     this->a=a;
    //     return *this;
    // }
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
