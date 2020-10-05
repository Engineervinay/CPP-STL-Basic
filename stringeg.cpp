#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1(s);//to copy string s into s1 at time of declaration 
    string s2(s,2,4);
    string s3=s.substr(0,3);
    if(s.compare(s1)==0)//returns 0 if strings are equal
        cout<<"s and s1 is same"<<endl;
    if(s1.compare(s3)==0)
        cout<<"s1 and s3 is same";
    cout<<s<<endl<<s1<<endl<<s2<<endl<<s3<<endl;
    
}