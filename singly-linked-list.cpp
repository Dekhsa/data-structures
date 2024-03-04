#include<iostream>

struct List{
   int data = 0;
   List*link = NULL;
};

bool isEmpty(List*head){
   if(head == NULL)
      return false;
   return true;
}

int main(){

}