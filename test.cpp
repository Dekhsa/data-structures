#include <iostream>
#include <vector>

using namespace std;

int main(){
   vector<int> v ;
   int choice;
   int menuChoice = 1;

   menu:
   cout << "========== VECTOR ==========" << endl;
   cout << "1. isEmpty" << endl;
   cout << "2. pushBack" << endl;
   cout << "3. popBack" << endl;
   cout << "4. back" << endl;
   cout << "5. front" << endl;
   cout << "6. getAt(i)" << endl;
   cout << "7. setAt(i, value)" << endl;
   cout << "8. passing vector" << endl;
   cout << "9. exit" << endl;
   
   cin >> choice;
   switch(choice){
      case 1:
         cout << "isEmpty: " << v.empty() << endl;
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 2:
         int  x;
         cout << "pushBack: "; cin>>x;
         v.push_back(x);
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 3:
         cout << "popBack: "; v.pop_back();
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 4:
         cout << "back: " << v.back() << endl;
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 5:
         cout << "front: " << v.front() << endl;
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 6:
         int i;
         cout << "getAt(i): "; cin>>i;
         cout << "v[" << i << "]: " << v[i] << endl;
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 7:
         int j, value;
         cout << "setAt(i, value): "; cin>>j>>value;
         v[j] = value;
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 8:
         for ( int i = 0; i < v.size(); i++ ) {
            cout << "v[" << i << "]: " << v[i] << endl;
         }
         cout << "\n1. back to menu" << endl;
         cout << "2. exit" << endl;
         cin >> menuChoice;
         if(menuChoice == 1){
            system("clear");
            goto menu;
         }else{
            cout << "Goodbye!" << endl;
            return 0;
         }
         break;
      case 9:
         system("clear");
         cout << "Goodbye!" << endl;
         return 0;
         break;
   }
   return 0;
}