#include<stdio.h>
#include<stdlib.h>

struct Node {
	int yas;
	Node* next;
};

     typedef struct Node Node;

    Node* deleteSecondRepeatedAge(Node* head, int yas) {

	Node* tempHead = head;
	Node* oneNodeBefore = NULL;



	if (head == NULL || head->next == NULL)
		return head;

	int isSecond = 0;
	
	while (tempHead != NULL) {

		if (tempHead->yas ==yas) {
			if (isSecond) {
				oneNodeBefore->next = tempHead->next;
				free(tempHead);
				break;
			}
			isSecond = 1;
		}
		oneNodeBefore = tempHead;
		tempHead = tempHead->next;
		
	}
	return head;
}

    int main() {

	Node* head = NULL;
	for (int i = 1; i <= 5; i++) {
		Node* node = (Node*)malloc(sizeof(Node));
		node->yas = 1;
		node->next = head;
		head = node;
	}
	head = deleteSecondRepeatedAge(head,1);
	while (head != NULL)
	{
		printf("%d\n", head->yas);
		head = head->next;
	}
}
