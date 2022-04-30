#include<iostream>
using namespace std;
int main(){

   
   int num;
   int arr[num];

   cout<<"enter the size of array: ";
   cin>>num;
   cout<<" your array is: ";
   for(int i=0; i<num; i++){
       cin>>arr[i];

   }
    for(int i=0; i<num; i++){
           if(arr[i]<=65 && arr[i]>=35){
               cout<<" normal\n";

           }
           else if (arr[i]>65){
               cout<<" overload\n";

           }
            else if(arr[i]<35){
                cout<<" underload\n";
                break;
              

            }
            
    }

   return 0;
}