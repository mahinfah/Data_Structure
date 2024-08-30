#include<iostream>
using namespace std;
class check{

int* arr;
int top;
int n=5;
 public:
     check()
     {
         arr=new int[n];
         top=-1;
     }

     void push(int a)
     {
         if(top==n-1)
         {
             cout<<"stack overflow"<<endl;
         }
         else
         {
             top++;
             arr[top]=a;
         }

     }
     void pop()
     {
         if(top==-1)
         {
               cout<<"Nothing to loose"<<endl;
         }
         else
         {

          top--;

         }

     }

     void empty()
     {
         if(top==-1)
         {
             cout<<"empty"<<endl;
         }
         cout<<"Not empty:"<<endl;

     }

     int Top()
     {
        if(top==-1)
        {
            cout<<"empty"<<endl;
        }
        return arr[top];
     }

     //displaying
     void display()
     {
         if(top!=-1)
         {

           while(top!=-1)
          {

          cout<<arr[top]<<endl;;
          top--;

          }


         }
         else {
            cout<<"empty"<<endl;
         }


    }

};


int main()
{check c;
    c.display();
//n=18;


c.push(1);
c.push(2);
c.push(3);
c.push(4);
c.push(5);
c.pop();
c.display();
}
