 //loading
#include<iostream>
using namespace std;
struct student
{
      int id,credit;
     double cgpa;
};

void show(student s[],int count)
{
    cout<<" ID : " <<s[count-1].id<<endl;
  cout<<" ID : " <<s[count-1].credit<<endl;
    cout<<" ID : " <<s[count-1].cgpa<<endl;
}



void input(student s[] , int count)
{//int a;
int n = 1;
  while(n!=0)
  {
     int a;
      ;
  cout<<"ADD Info :  1 \n";
  cout<<"Show :  2 \n";
cin>>a;
      if(a==1)
      {
            cout<<"student id               : "<<endl;
            cin>>s[count].id;
             cout<<"student credit complete : "<<endl;
            cin>>s[count].credit;
             cout<<"student cgpa            : "<<endl;
            cin>>s[count].cgpa;
             count++;
      }

      else if(a==2)
      { cout<<"which student infoshow          : "<<endl;
      int p;
      cin>>p;
          show( s,  p);
      }

  }

}

int main()
{
    student s[1000];
    int count = 0;
    input(s,count);
 //   double a= 3.003400;
   // cout<<a;
}
