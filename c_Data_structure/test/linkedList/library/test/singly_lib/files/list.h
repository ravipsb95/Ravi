#ifndef LIST_H
#define LIST_H

typedef struct node
{
	int data;
	struct node *next;
}Node;

extern Node *head;
extern Node *newnode;
extern Node *temp;
extern Node *nextNode;
extern Node *currentNode;
extern Node *preNode;

extern int count;

void creat_list(int *count);
void display(Node *head,int *count);

#endif
