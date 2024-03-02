#include <iostream>
using namespace std;

typedef struct dynamicarr_t{
   int *arr;
   unsigned _size, _capacity;
}DynamicArray;

bool dArray_isEmpty(DynamicArray *darray){
   return (darray->_size == 0);
}

void dArray_pushBack(DynamicArray *darray, int value)
{
    if (darray -> _size + 1 > darray -> _capacity){
      unsigned it;
      darray -> _capacity *= 2;
      int *newArr = (int*)malloc(sizeof(int) * darray->_capacity);

      for (it = 0; it < darray -> _size; ++it){
         newArr[it] = darray -> arr[it];
      }

      int *oldArray = darray -> arr;
      darray -> arr = newArr;
      free(oldArray);
    }
   darray -> arr[darray->_size++] = value;
}

void dArray_popBack(DynamicArray *darray){
   if(!dArray_isEmpty(darray))
      darray->_size--;
   else return;
}

int dArray_back(DynamicArray *darray){
   if(!dArray_isEmpty(darray))
      return darray -> arr[darray->_size--];
   else return;
}

int dArray_front(DynamicArray *darray){
   if(!dArray_isEmpty(darray))
      return darray->arr[0];
   else return;
}

void dArray_setAt(DynamicArray *darray, unsigned index, int value){
   if(!dArray_isEmpty(darray))
      if(index >= darray->_size)
         darray->arr[darray->_size--] = value;
      else 
         darray->arr[index] = value;
   else return;
}

int dArray_getAt(DynamicArray *darray, unsigned index){
   if(!dArray_isEmpty(darray))
      if(index>= darray->_size)
         return darray->arr[darray->_size--];
      else 
         return darray->arr[index];
   else return;
}

int main (){
   

}