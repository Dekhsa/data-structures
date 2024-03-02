#include<iostream>

struct List {
	int data = 0;
	List* link = NULL;
};

bool List_empty(List* head) {
	if (head == NULL)
		return false;
	return true;
}

void List_pushBack(List* head, int val) {
	List* ptr, * temp;

	ptr = head;
	temp = (List*)malloc(sizeof(List));
	temp->data = val;
	temp->link = NULL;
	while (ptr->link != NULL)
		ptr = ptr->link;
	ptr->link = temp;
}

void List_pushFront(List* head, int val) {

}

int main() {
	List* head = (List*)malloc(sizeof(List));
	head->data = 10;
	
	std::cout << List_empty(head) << std::endl;;

	return 0;
}