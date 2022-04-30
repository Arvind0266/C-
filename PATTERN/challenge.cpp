#include <bits/stdc++.h>
// #include<iostream>
// #include<climits>
// #include<algorithm>
using namespace std;

int main()
{
    string s="hhfdgf";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int freq[26]={};
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']+=1;
    }
    char ans;
    int maxf=INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (maxf<freq[i])
        {
            maxf=freq[i];
            ans='a' + i;
        }

    }
    cout<<ans<<" occurs "<<maxf<<" times.";



    // string s1 = "aaarvvvvviiinnddd";
    // // char ans[100];
    // char ans[100];
    // ans[0] = s1[0];
    // int j = 1;
    // for (int i = 1; i < s1.size(); i++)
    // {
    //     if (s1[i] != s1[i - 1])
    //     {
    //         ans[j] = s1[i];
    //         j++;
    //     }
    // }
    // cout << ans << endl;

    return 0;
}