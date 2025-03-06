#include<iostrem>
#include<bits/stdc++.h>
using namespace std;
int main()
{


vector<int>v={2,3,1,4,22,1,22,2,4,5,6};
  
sort( v.begin(),v.end());

int sz= unique( v.begin(),v.end())-v.begin();

    for(int i=0;i<sz;i++)
    {
        cout<<v[i]<<"   ";
    }

  




}
