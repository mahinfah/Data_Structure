#include<iostream>
using namespace std;

struct student {
int id;
int totalsub;
int mark[10];
int n;
string name ;
};

void showtime(student &s,int p)
{
  cout<<"Student name: "<<s.name<<endl;
  for(int i = 0 ;i<p;i++)
  {
    cout<<"your " <<i+1 <<"no subject: "<<s.mark[i]<<endl;

  }
}
void infotake(student &s , int p)
    {
        cout<<"student name    :";
        cin>>s.name;
      //  cout<<"ds  :"<<n;
      //  int p;

        for(int i = 0 ; i<p ;i++)
        {
            cout<<"enter your " <<i+1 <<"no subject: "<<endl;
            cin>>s.mark[i];
        }
     }


int main()
{
int n ;
cout<<"how many students :";
cin>>n;
   student s[n] ;
cout<<"how many : ";
int p;
cin>>p;
   for(int i= 0 ; i<n;i++)
{
  infotake(s[i],p);
}

  for(int i= 0 ; i<n;i++)
{ cout<<"cjjcj";
  showtime(s[i],p);
}

}
