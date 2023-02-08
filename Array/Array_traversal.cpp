#include <iostream>
#include <string>
using namespace std;

int main()
{
 //Traversing an Array
 int a1[10]={1,2,3,4,5,5,4,3,2,1};

//ascending order
    for(int i=0;i<8;i++)
        cout<<a1[i]<<" ";
  cout<<endl; 
   
//--------------------------

//descending order
    for(int i=8;i>=0;i--)
        cout<<a1[i]<<" ";
  cout<<endl; 
 
  
 return 0;
}