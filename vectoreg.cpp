#include<bits/stdc++.h>
using namespace std;
int main()
{
    //declaring vector
    vector<int> a;
    
    for(int i=0;i<5;i++)//inserting element in vector
    {
        a.push_back(i+1);
    }
    for(int i=0;i<a.size();i++)//modifying element in vector
    {
        a[i]=a[i]*2;
    }
    //creating iterator for vector
    vector<int>:: iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<endl;
        
    }
    return 0;
}