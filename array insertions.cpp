#include <iostream>
using namespace std;
 
//to insert data in the array at specific position and shifting rest accordingly

//insert after
int* insertX(int n, int arr[], int x, int pos)  //n is size of arr, x is the new value , pos is the position where
{
    int i;  
    n++;   // increase the size by 1
    for (i = n; i >= pos; i--)
    arr[i] = arr[i - 1];      // shift elements forward
    arr[pos - 1] = x;            // insert x at pos
    return arr;
}
int main()
{
    int arr[100];
    int i, x, pos, n = 10;     // initial array of size 10
    
    for (i = 0; i < n; i++)
        arr[i] = i + 1;     //index is increased by +1, hence creating space for new element
 
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";    // print the original array
    cout << endl;
 
    x = 50;    // element to be inserted
    pos = 5;    // position at which element is to be inserted
 
    insertX(n, arr, x, pos);     // Insert x at pos
 
     for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";    // print the updated array
    cout << endl;
 
    return 0;
}

//Time Complexity : O(n)