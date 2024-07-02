 //loading
#include<iostream>
using namespace std;
struct student
{
      int id,credit;
     double cgpa;
};

void show()



void input(student s[] , int count)
{
    int n = 1;
  while(n!=0)
  {
      int a;
  cout<<"ADD Info :  1 \n";
  cout<<"Show :  2 \n";

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
      {
          show(student s[], int count);
          
      }

  }

}

int main()
{
    student s[1000];
    int count = 0;
    double a= 3.003400;
    cout<<a;
}
