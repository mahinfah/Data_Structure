//

#include<iostream>
using namespace std;
class Node{
 public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next=nullptr;
    }

};
int main()
{
    Node *Head;
    Head= nullptr;
    //cout<<Head->data;

int a[5]={1,2,3,4,5};
for(int i =0 ;i<5;i++)
{


  if(Head==nullptr)
  {
    Head = new Node(a[i]);
  }
  else
  {
    Node *temp;
    temp = new Node(a[i]);
    temp->next = Head;
    Head = temp;

  }

}

Node *print = Head;
while(print!= nullptr)
{
    cout<<print->data<<"   ";
    print=print->next;
}

}
