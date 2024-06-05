#include<iostream>
using namespace std;
int main()
{
    char CH = 'a';
 //   cout<<ch;      // null pointer is useful because if we don't use null and don't pointout address it will give garvage value
char* c  ;
//c= &CH;
  //cout<<c;
int n = 10;
int*px1 = &n;
int *px2;
px2 = px1;
cout<<px2<<endl;
cout<<px1<<endl;
*px2 = 20;
cout<<n<<endl;
}
