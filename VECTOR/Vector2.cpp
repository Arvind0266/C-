#include <iostream>
using namespace std;
#include <vector>
template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    //Ways Of Declaring Vectors.
//     vector<int> vec1; //Zero Length Vector.

//     vector<char> vec2(4); //4 element character vector.
//     vector<char> vec3(vec2); //4 element character vector from vec 2.
//     vector<int> vec4(6,3); // 6 element vector with 3's
// display(vec1);
// vec2.push_back('A');
// display(vec2);
// display(vec3);
// display(vec4);
// cout<<vec4.size();



    // int element,size=5;
    // // for (int i = 0; i < 4; i++)
    // // {
    // //     // cout<<"Enter The Elements To This Vector: ";
    // //     cin >> element;
    // //     vec1.push_back(element);
    // // }
    // // vec1.pop_back();
    // vector<int>::iterator iter = vec1.begin();
    // display(vec1);
    // vec1.insert(iter+2,5, 123);
    // display(vec1);

    //Swap
vector<int> vec1(6,2);
vector<int> vec2(16,20);
display(vec1);
display(vec2);
vec1.swap(vec2);
display(vec1);
display(vec2);

// Displaying this vector 
// 2 2 2 2 2 2 
// Displaying this vector 
// 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 
// Displaying this vector 
// 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 
// Displaying this vector 
// 2 2 2 2 2 2
}
