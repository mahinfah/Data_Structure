#include<iostream>
using namespace std;
struct student
{
      int id,credit;
     double cgpa;
};

void show(student s[],int count)
{ cout<<endl;
  cout<<" ID     : " <<s[count].id<<endl;
  cout<<" credit : " <<s[count].credit<<endl;
  cout<<" cgpa   : " <<s[count].cgpa<<endl;
  cout<<" ----------------------------------------------------------"<<endl;
}



void input(student s[] , int count)
{//int a;
int n = 1;
  while(n!=0)
  {
     int a;
      ;
  cout<<"ADD Info of student                                                   :   press1\n";
  cout<<"Show Info for student’s IDs whose CGPA is more than 3.60              :   press2 \n";
  cout<<"Show Info for student’s IDs who have completed more than 60 credits   :   press3 \n";

cin>>a;
      if(a==1)
      {
            cout<<"student id               : ";
            cin>>s[count].id;
             cout<<"student credit complete : ";
            cin>>s[count].credit;
             cout<<"student cgpa            : ";
            cin>>s[count].cgpa;
             count++;
      }

      else if(a==2)
         {

          for(int i = 0 ;i<5;i++)
   {

        if(s[i].cgpa>3.60)
          {
           show( s,  i);
          }
  }


          }



          else if(a==3)
      {

          for(int i = 0 ;i<5;i++){

        if(s[i].credit>=60){

            show( s,  i);
      }
        }


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
