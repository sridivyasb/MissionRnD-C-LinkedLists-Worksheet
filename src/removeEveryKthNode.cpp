/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node* temp, *prev;
	temp = head;
	int count = K;

	if (K < 1 || K == 1)
		return NULL;

	while (temp != NULL){
		count--;
		if (count == 0){
			prev->next = temp->next;
			count = K;
		}
		prev = temp;
		temp = temp->next;

	}

	return head;
}
