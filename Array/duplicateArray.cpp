//find duplicate in an array of N+1 Integers

#include<iostream>
using namespace std;

void findDuplicate(int array[], int size){
  int duplicate, count=0;
  for (int i = 0; i < size; i++)
  {
    for (int j = i+1; j < size; j++)
    {
       if(array[i]==array[j]){
        duplicate = array[i];
        count++;
       }
    }
    
  }
  
  cout<<"Duplicate number is "<<duplicate << " and it is repeated " << count << " times." <<endl;
}

int main()
{
    int array[]={1,3,4,2,2};
    int size = sizeof(array) / sizeof(array[0]) ;
    findDuplicate(array , size);
    return 0;
}