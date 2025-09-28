#include<iostream>
using namespace std;
int main(){
    int A[10] = {2,6,8,7,1}; // array of size 10 only 5 elements used
    int size = 5; // current number of elements in the array
    int pos = 3; // position to insert the new elements (0-based index )
    int val = 9; // value to be inserted
  // shift elements to the right form the end position
    for (int i = size; i>pos; --i){
        A[i] = A[i-1];
    }
    A[pos] = val; // insert the new element
    size++; // increase the size of the array

    cout<<"After insertion:";
    for(int i=0; i<size; ++i)
    cout<<A[i]<<""; // print the array
    cout<< endl;
    return 0;
}