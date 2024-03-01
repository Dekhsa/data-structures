#include <iostream>
using namespace std;

typedef struct dynamicarr_t{
   int *arr;
   unsigned _size, _capacity;
}DynamicArray;

void dArray_pushBack(DynamicArray *darray, int value)
{
    if (darray -> _size + 1 > darray -> _capacity){
      // ingredients
      unsigned it;
      darray -> _capacity *= 2;
      int *newArr = (int*)malloc(sizeof(int) * darray->_capacity);

      for (it = 0; it < darray -> _size; ++it){
         newArr[it] = darray -> arr[it];
      }

    }
}



int main (){


}