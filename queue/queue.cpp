#include<iostream>
using namespace std;
const int maxsize=100;
class queuee{
private:
    int a[maxsize];
    int font ,rare;

public:
    queuee()
    {
        font =-1;
        rare=-1;

    }



      bool isEmpty() {
        return (font == -1 && rare == -1);
    }


    bool isFull()
    {

            return rare== maxsize-1;
    }

    void enqueue(int x)
    {
       if(isFull())
       {
           cout<<"Full"<<endl;
       }
       else if(isEmpty())
       {
          // cout<<"Empty"<<endl;
           font=rare=0;
           a[rare]=x;

       }
       else

          rare++;
        a[rare]=x;

    }


    void dequeue() {
        if (isEmpty()) {
            cout << "Empty" << endl;
        } else if (font == rare) {
            font = rare = -1; // Reset the queue when it becomes empty
        } else {
            font++;
        }
    }


    void display()
    {

        for(int i =font;i<=rare;i++)
        {
            cout<<a[i]<<"  ";
        }


  cout<<endl;
    }

};

int main()
{

queuee lol;
lol.enqueue(1);
lol.enqueue(2);
lol.enqueue(3);
lol.enqueue(4);
lol.display();

lol.dequeue();
lol.enqueue(5);
lol.enqueue(7);
//lol.dequeue();

lol.display();






}
