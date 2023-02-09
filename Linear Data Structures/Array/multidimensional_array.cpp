#include <iostream>
#include <string>
using namespace std;

int main()
{
 //Initialising Multidimensional Array
 
// int a1[10][2]={1,2,3,4,5,5,4,3,2,1,2,3,5,4,3,2,7,8,9,7}; //cannot be initialised

int a2[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
int a3[4][5];                 // array is always written as array[row][column]
for(int i = 0; i < 4; i++){   // i represents rows and j represents columns
    for(int j = 0; j < 5; j++){
        cin >> a3[i][j];
    }
}

//Dynamic Allocation

int** x = new int*[3];                   // "new" allocate memory in heap + initialise the array 
                                        //here, int*[3] indicates the memory address of all the three elements 
                                       // int** x indicates memory address that stores memory address of the elemnts
for(int i = 0; i < 3; i++){
    x[i] = new int[4];                 //x stores the values of elemnts in heap
    for(int j = 0; j < 4; j++){
        cin >> x[i][j];
    }
}
  
 return 0;
}

//----------------------------------------------