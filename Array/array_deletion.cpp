#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << " Enter the size of the array: ";
    cin >> n;

    int arr[n], i, pos;

    cout << " Enter elements of the array: ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }


    cout << "Before deletion are : \n\n";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << "  "<<endl;      //Printing the original array before deletion
    }

    cout << " Enter the position of the element to be deleted : ";
    cin >> pos;

    //Performing the deletion logic
    
         --pos;//as index of the element to be deleted is 1 less than it's position
         
         for (i = pos; i <= 9; i++)//pos is not equat to index of elemnt in array
         {
        arr[i] = arr[i + 1];
         }

         cout << " After deletion array is : ";
         for(i=0; i<n-1; i++)
         {
        cout << arr[i] << "  "; 
          }
            
    return 0;
}


//Time complexity = O(n) (at specific position)
//Time Complexity = O(1) (at the beginning of array)