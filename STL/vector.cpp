
#include<bits/stdc++.h>
using namespace std;
int main() {

    vector<int>v1;
    v1.push_back(2);
    v1.push_back(1 );
    v1.push_back(3);


    for(int i=0;i<v1.size();i++)
    {
    cout<<v1[i]<< "      ";
    }

    cout<<endl;

    cout<<"After sorting   :" <<endl;

    sort(v1.begin(),v1.end());



    for(int i=0;i<v1.size();i++)
    {
    cout<<v1[i]<< "      ";
    }


}
