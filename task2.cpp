#include<iostream>
using namespace std;
int main(){
    int A[10] = {2,6,8,7,1}; 
    int size = 5;
    int pos = 2; // delete element at index 2
    // shift elements to the left from the position
    for (int i = pos; i< size; ++i){
        A[i] = A[i+1];
    }
  size--; // decrease the size of array
  cout<<"After deletion:";
  for(int i=0; i<size; ++i)
    cout<<A[i]<< ""; // print the array
    cout<< endl;
    return 0;
}