// #include<iostream>
// #include<string>
// #include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string str="Arvind Kumar";
    // cout<<str<<endl;  // It will Print The Whole string..
    // string str;
    // getline(cin,str);
    // cout<<str<<endl;
    // // string str(10);
    // // string str(5,'N');
    // // string str;
    // // cin>>str;
    // string abc=str;
    // cout<<abc;

    // string s1="Arvind",s2=" Kumar";
    // cout<<s1<<endl;
    // // s1=s1.append(s2);
    // // cout<<s1<<endl;

    // s1=s1+s2;
    // cout<<s1<<endl;

    // string s1="Arvind Kumar";
    // cout<<s1<<endl;
    // s1.assign("Akdsfdsfdsf dgffdsgdsg gdfgdsg");
    // cout<<s1<<endl;
    // string s2="sadsfdsfsdff getgeres";
    // string s3=s1+s2;
    // cout<<s3<<endl;

    // for(int i=0;i<10;i++)
    // {
    //     cout<<s1[i]<<endl;
    // }

    // string s1="ad";
    // string s2="ca";
    // cout<<s1.compare(s2);
    // coutstr<<s1.c_();
    // s1.clear();
    // s1.erase(0,1);
    // cout<<s1;

    // cout<<s1.find("A");
    // cout<<s1.insert(6,"lol");
    // cout<<s2.length();    // cout<<s2.size();
    // s1.resize(8);

    // string s1="12";
    // int x=stol(s1);
    // cout<<x+2;
    // double a=100;
    // string s1=to_string(a);
    // cout<<s1;

    // string s1=ind Kumar";
    // sort(s1.begin(),s1.end());"Arv
    // cout<<"sorted string is :  "<<s1<<endl;
    // string str="Arv ind ";
    // cout<<str;
    // string s1="arvind";
    // string s2="Arvind Kumar";
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     s1[i]-=32;
    // }
    // cout<<s1<<endl;
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     s1[i]+=32;
    // }
    // cout<<s1<<endl;
    // for (int i = 0; i < s2.length(); i++)
    // {
    //     if (s2[i]>=97 &&s2[i]<=122)
    //     {
    //         s2[i]-=32;
    //     }
    // }
    // cout<<s2<<endl;

    // string s;
    // cout<<"Enter An Integer String ";
    // getline(cin,s);
    // // for(int i=0;i<s.size();i++)
    // // {
    // //     if(s[i]>=65 && s[i]<=90)
    // //     s[i]+=32;
    // // }
    // // transform(s.begin(),s.end(),s.begin(),::tolower);
    // // cout<<s<<endl;
    // sort(s.begin(),s.end(),greater<int>());
    // cout<<s<<endl;

    // string s1="adssds";
    // string s2=s1;
    // string s3(s1);
    // cout<<s2<<endl;
    // cout<<s3<<endl;

    // string s1="jhghhjghgjhgjjg";
    // cout<<s1.length()<<endl;
    // cout<<s1.empty()<<endl;
    // s1.clear();
    // cout<<s1.size()<<endl;
    // cout<<s1.empty()<<endl;

    // string s1="bdgdgerkgsfw";
    // cout<<s1<<endl;
    // s1.erase(2,17);
    // cout<<s1;

    // string s1="Hjjddjj dcdjddd";
    // cout<<s1.find("jk")<<endl;

    string s1 = "ssss";
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    int freq[26] = {};
    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i] - 'a']+=1;
    }
// for(int i=0;i<26;i++)
// {
//     cout<<freq[i]<<" ";
// }
    char ans;
    int maxF = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (maxF < freq[i])
        {
            maxF = freq[i];
            ans = 'a' + i;
        }
    }
    cout << ans << " Occurs ";
    cout << maxF << " times." << endl;
    return 0;
}