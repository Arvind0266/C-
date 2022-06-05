// // #include<bits/stdc++.h>
// // using namespace std;
// // class node
// // {
// //     public:
// //     int data;
// //     node* next;
// //     node(int val)
// //     {
// //         data=(val);
// //         next=NULL;
// //     }

// // void tail(node* &head,int val)
// // {
// //     node* n=new node(val);
// //     if(head==NULL)
// //     {
// //         head=n;
// //         return;
// //     }
// //     node* temp=head;
// //     while(temp->next !=NULL)
// //     {
// //         temp=temp->next;
// //     }
// //     temp->next=n;
// // }
// // void display(node* head)
// // {
// //     node* temp=head;
// //     while(temp!=NULL)
// //     {
// //         cout<<temp->data<<"->";
// //         temp=temp->next;
// //     }
// //     cout<<"NULL"<<endl;
// // }

// // };

// #include <map>
// #include <set>
// #include <list>
// #include <cmath>
// #include <ctime>
// #include <deque>
// #include <queue>
// #include <stack>
// #include <string>
// #include <bitset>
// #include <cstdio>
// #include <limits>
// #include <vector>
// #include <climits>
// #include <cstring>
// #include <cstdlib>
// #include <fstream>
// #include <numeric>
// #include <sstream>
// #include <iostream>
// #include <algorithm>
// #include <unordered_map>

// using namespace std;
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int a=1,b=9;

//     int n;

//     if(n>=a && n<=b)
//     {
//     if(n==1)
//     {
//         cout<<"one"<<endl;
//         n++;
//     }
//     if(n==2)
//     {
//         cout<<"two"<<endl;
//         n++;
//     }

//     if(n==3)
//     {
//         cout<<"three"<<endl; n++;
//     }
//     if(n==4)
//     {
//         cout<<"four"<<endl; n++;
//     }

//     if(n==5)
//     {
//         cout<<"five"<<endl; n++;
//     }

//     if(n==6)
//     {
//         cout<<"six"<<endl; n++;
//     }

//     if(n==7)
//     {
//         cout<<"seven"<<endl; n++;
//     }

//     if(n==8)
//     {
//         cout<<"eight"<<endl; n++;
//     }

//     if(n==9)
//     {
//         cout<<"nine"<<endl; n++;
//     }
//      if(n>9)
//     {
//         if(n%2==0){
//         cout<<"even"<<endl;
//         n++;
//         }
//         if(n%2!=0)
//        {
//            cout<<"odd"<<endl;
//            n++;
//        }
//     }
//     }
//     return 0;
// }
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin >> a >> b;
    int n = a;

    for (int n = a; n <= b; n++)
    {

        if (n == 1)
        {
            cout << "one" << endl;
        }
        if (n == 2)
        {
            cout << "two" << endl;
        }

        if (n == 3)
        {
            cout << "three" << endl;
        }
        if (n == 4)
        {
            cout << "four" << endl;
        }

        if (n == 5)
        {
            cout << "five" << endl;
        }

        if (n == 6)
        {
            cout << "six" << endl;
        }

        if (n == 7)
        {
            cout << "seven" << endl;
        }

        if (n == 8)
        {
            cout << "eight" << endl;
        }

        if (n == 9)
        {
            cout << "nine" << endl;
        }
        if (n > 9)
        {
            if (n % 2 == 0)
            {
                cout << "even" << endl;
            }
            if (n % 2 != 0)
            {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
