#include <bits/stdc++.h>
using namespace std;



int findElement(int arr[], int n, int key)     // Function to implement search operation , n = size, key = data to be searched
{
    // search in unsorted array
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;
	return -1;		// If the key is not found
}
// /-------------------------------------------------------------


int binarySearch(int arr[], int low, int high, int key)
{
    // search in sorted array
	if (high < low)
		return -1;
	int mid = (low + high) / 2; /*low + (high - low)/2;*/
	if (key == arr[mid])
		return mid;
	if (key > arr[mid])
		return binarySearch(arr, (mid + 1), high, key);
	return binarySearch(arr, low, (mid - 1), key);
}

//-------------------------------------------------------------------

int main()
{

//---------------linear search-------------
	int arr[] = { 12, 34, 10, 6, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 40;  // Using a last element as search element
	int position = findElement(arr, n, key);	// Function call

	if (position == -1)
		cout << "Element not found"<<endl;
	else
		cout << "Element Found at Position: "
			<< position + 1<<endl;;

//-----------------------binary search--------

int arr1[] = { 5, 6, 7, 8, 9, 10 };
	int n1, key1;

	n1 = sizeof(arr) / sizeof(arr[0]);
	key1 = 10;

	// Function call
	cout << "Index: " << binarySearch(arr, 0, n - 1, key)
		<< endl;
	return 0;
}

// Time complexity = O(n) , linear search
//Time Complexity = o(lg(n)), binary search


//-------------------------------------------------------------------





