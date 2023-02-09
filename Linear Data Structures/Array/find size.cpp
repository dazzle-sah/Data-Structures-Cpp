#include <iostream>
using namespace std;
 
void findSize(int (&arr)[10]) //& is used as an alias for arr of size 10
{
    cout << sizeof(arr) << endl;
}
 //To get the size of an array, you can use the sizeof() operator
 //size = no of elements * size of int
 //size = 10 elements * 4 (size of int) = 40
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,1};
    cout << sizeof(a) << endl;
    findSize(a);
    
    // print size of dynamically allocated array
     int *arr = (int*)malloc(sizeof(int) * 20);
     cout<<arr<<endl; //prints address of location storing value 
    return 0;
}