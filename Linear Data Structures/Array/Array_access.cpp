#include <iostream>
#include <string>
using namespace std;

int main()
{
 //Accessing elements of array
 int a2[]={1,3,5,7,9,2,4,6,8};
 int a3[15]={2,4,6,8};
 
 //array starts at index [0]
 cout<<a2[2]<<" "<<a2[0]<<endl;
 //gives error
 cout<<a3[-3]<<" "<<a3[-10]<<endl;  
 return 0;
}

//runtime is O(1)