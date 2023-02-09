
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Create an empty vector
	vector<int> vect1; // declaration of vector

//Initializing vector

  //pushing vale one-by-one
	vect1.push_back(10);
	vect1.push_back(20);
	vect1.push_back(30);
	for (int x : vect1)
		cout << x << endl;
    cout<<endl;
    
  //Specifying size and initializing all values :
    int n = 3;
    vector<int> vect2(n, 10);                // Create a vector of size n with
    for (int x : vect2)                      // all values as 10.
        cout << x << endl; 
    cout<<endl;

  //Initializing like arrays
     vector<int> vect3{ 10, 20, 30 };
     for (int x : vect3)
        cout << x << endl;
    cout<<endl;
        
  //initialising from array
    int arr[] = { 10, 20, 30 };
    int n1 = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n1);
    for (int x : vect)
        cout << x << endl;
    cout<<endl;
        
  //Initializing from another vector   
    vector<int> vect4{ 10, 20, 30 };
    vector<int> vect5(vect4.begin(), vect4.end());
    for (int x : vect5)
        cout << x << endl;
    cout<<endl;   
        
  //Initializing all elements with a particular value
    vector<int> vect6(10);
    int value = 5;
    fill(vect6.begin(), vect6.end(), value);
    for (int x : vect6)
        cout << x << " ";
    cout<<endl;    
	return 0;
}