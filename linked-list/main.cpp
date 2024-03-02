#include <iostream>
#include <list>

void print_list(std::list<int>g){
   auto pointer = g.begin();
   for(int i = 0; i< g.size(); i++){
      std::cout << *pointer << " " ;
      pointer++;
   }
   std::cout << std::endl;
}

int main(){
   std::list<int> l{1,4,7,2};
   std::cout << "Base Linked List:"; print_list(l); 
   std::cout << "Linked List push_back(10) : ";l.push_back(10); print_list(l);
   std::cout << "Linked List push_front(25) : ";l.push_front(25); print_list(l);
   std::cout << "Linked List empty() : "; if(l.empty() == 1 ){std::cout<<"true";}else{std::cout << "false";}
}