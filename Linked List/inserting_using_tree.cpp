    #include<iostream>
    using namespace std;
    struct Node{

     int data;
     Node* next;


     Node(int data)
     {
         this->data=data;
         this->next=nullptr;

     }

    };

        Node* head=  nullptr;
        Node* tail=  nullptr;


    Node* insert_end( int data)
    {


        if(head==nullptr)
        {
            cout<<"Entering Head"<<endl;
            head= new Node(data);
            tail=head;
        }

        else{



            Node* temp= new Node(data);
            tail->next=temp;
            tail = temp;
            //cout<<"called";

        }

    }

    void show()
    {
       Node* temp1 = head;
         while(temp1!=nullptr)
         {
             cout<<temp1->data<<endl;
             temp1=temp1->next;
         }
    }


    int main()
    {

//   we will print this array using  linkedlist int  a[4]={1,2,3};

    insert_end(1);
    insert_end(2);
    insert_end(3);

    show();


    }
