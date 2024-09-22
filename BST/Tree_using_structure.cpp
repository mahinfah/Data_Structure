#include<iostream>
using namespace std;
struct tree{

  int data;
  tree *left;
  tree *right;

  tree(int value)
  {
      data = value;
      left=nullptr;
      right=nullptr;
  }

};


tree* insert(tree *root,int val)
{
 if(root== nullptr)
 {
     cout<<"1st done"<<endl;
     return new tree(val);
 }

 if(val<root->data)
 { cout<<"left done"<<endl;
   root->left=insert(root->left,val);

 }
 else if(val>root->data)
 {cout<<"right done"<<endl;
  root->right=insert(root->right,val);

 }
 return root;
}

tree* deleting()
{

}

tree* searchpoint(tree* root , int val)
{
    if(root == nullptr|| root->data==val)
    {
        return root;
    }
 if (val < root->data) {
        return searchpoint(root->left, val);
    }
    else {
        return searchpoint(root->right, val);
    }

}


int main()
{
    tree *check= nullptr;
    check=insert(check,60);
    check=insert(check,40);

    check=insert(check,210);
     // int lmao=210;
    // tree *searching = searchpoint(check , lmao);
     int lmao =33;
    tree *searching = searchpoint(check , lmao);

      if(searching!=nullptr)
      {
          cout<<lmao<<" is found";
      }
      else{

        cout<<lmao<<"  is not found"<<endl;
      }

    int delete1 = 210;

     tree *removing = deleting(check,delete1);

}
