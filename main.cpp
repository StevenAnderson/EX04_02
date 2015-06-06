#include <iostream>
using namespace std;
//list functions
int* doubleCapacity(const int* list, int size);

int main(){
    //example array
    const int size=4;
    int list[size]={1 ,2 ,3 ,4 };
    //function doubling the capacity of array
    int *doublearray=doubleCapacity(list, size);
    
    //loop displaying the values of the new larger array
    for (int i=0; i<(size*2);i++){
        cout << doublearray[i] << " ";
    }
    
    
    return 0;
}
//doubling array function
int* doubleCapacity(const int* list, int size){
    //double the size of the original array
   int newsize=size*2;
    //creates a new array
    int *newarray= new int[newsize];
    //copies existing numbers in array
    for (int i=0; i<size;i++)
        newarray[i]=list[i];
    //fills remaining cells with "1"
    for (int i=size;i<newsize;i++)
        newarray[i]=1;
    
    
    //returns array
    return newarray;
}