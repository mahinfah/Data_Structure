#include<bits/stdc++.h>
using namespace std;
int main()
{


cout<<"MAPPPING"<<endl;

map<int ,int> mp;

mp[1]=10;
mp[2]=22;
mp[3]=33;
mp[5]=33;
mp[6]=33;

mp.insert({4,44});



for(auto it: mp)
{
    cout<<it.first<<"   "<<it.second<<endl;
}


}

