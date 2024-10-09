#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int val)
{
    data = val;
    next = nullptr;
}

};
int main()
{

  Node *head;
  head =nullptr;
  //creating tail to insert in the end
  Node *tail = nullptr;

  int a[4]={1,2,3,4};
int i ;
  while(i<4)
 {
  if(head==nullptr)
 {
    head = new Node(a[i]);
    tail = head;
 }
 else
  {
      Node *temp;
    temp = new Node(a[i]);
    temp=temp->next;
   // tail=tail->next;

  }
   i++;
 }

 Node *print = head;
 while(print!=nullptr)
 {
     cout<<print->data<<"  ";
     print=print->next;
 }


}
