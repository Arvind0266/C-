#include<iostream>
#include<vector>
#include<algorithm>
// #define<numeric>
#include<numeric>
using namespace std;
int main()
{
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(9);
    vec1.push_back(0);
    sort(vec1.begin(),vec1.end());
   for (int i = 0; i < vec1.size(); i++)
   {
       cout<<vec1[i]<<" ";
   }
   int sum=accumulate(vec1.begin(),vec1.end(),10);
   cout<<sum;
   
   int mx=*max_element(vec1.begin(),vec1.end());
   int mn=*min_element(vec1.begin(),vec1.end());
   cout<<" Max= "<<mx<<" Min= "<<mn;
}