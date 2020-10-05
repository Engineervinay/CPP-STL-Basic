#include<bits/stdc++.h>

using namespace std;
int main()
{
    //map stores the element as well as frequency of that element
    //the element is taken as key and the frequency as a value
    int a[]={1,2,3,54,23,11,2,54,1,2};
    map<int,int> m;
    for(int i=0;i<10;i++)
    {
        m[a[i]]++;

    }
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first << " : "<<it->second<<endl;
    }
    m.erase(1);
    cout<<endl<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first << " : "<<it->second<<endl;
    }
    
    
    return 0;
}