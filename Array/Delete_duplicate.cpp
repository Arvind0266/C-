#include <iostream>
using namespace std;
int *deletion(int arr[], int n, int pos)
{
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return arr;
}

int main()
{
    int n = 10;
    int arr[n];int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
    {
        if(arr[i]==arr[j])
        {
            deletion(arr, n, j);
            count++;
        }
    }

}
 for (int i = 0; i <n-count ; i++)
 {
     cout<<arr[i]<<" ";
 }
    
}
// #include<iostream>
// using namespace std;
// int main(){

   
//    int num;
//    int arr[num];

//    cout<<"enter the size of array: ";
//    cin>>num;
//    cout<<" your array is: ";
//    for(int i=0; i<num; i++){
//        cin>>arr[i];

//    }
//     for(int i=0; i<num; i++){
//            if(arr[i]<=65 && arr[i]>=35){
//                cout<<" normal\n";

//            }
//            else if (arr[i]>65){
//                cout<<" overload\n";

//            }
//             else if(arr[i]<35){
//                 cout<<" underload\n";
//                 break;
              

//             }
            
//     }

//    return 0;
// }