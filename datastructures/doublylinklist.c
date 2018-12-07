#include<stdio.h>
#include<stdlib.h>
typedef struct list* listptr;
typedef struct list {
	int data;
	listptr llink;
	listptr rlink;
}list;
void addnode(listptr head, int data) {
	listptr temp;
	temp=(listptr)malloc(sizeof(listptr));
	temp->data=data;
	temp->llink=head;
	temp->rlink=head->rlink;
	(head->rlink)->llink=temp;
	head->rlink=temp;
}
int delete(listptr head) {
	if(!(head->rlink==head)) {
		int c;
		listptr temp=head->rlink;
		head->rlink=temp->rlink;
		(head->rlink)->llink=head;
		c=temp->data;
		free(temp);
		return c;
	}
	int c=-1;
	return c;
}
void display(listptr head) {
	listptr temp=head;
	temp=temp->rlink;
	while(temp!=head) {	
		printf("\n %d",temp->data);
		temp=temp->rlink;
	}
	printf("\n");
}
int main() {
	listptr head;
	head=(listptr)malloc(sizeof(listptr));
	head->rlink=head;
	head->llink=head;
	head->data=0;
        int m, n;
        while(1) {
        printf("\nEnter\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&m);
        switch(m) {
                        case 1: {
                                printf("\nEnter the data ");
                                scanf("%d",&n);
                                addnode(head,n);
                                }
                                break;
                        case 2: {
                                n=delete(head);
                                printf("\nData popped is : %d",n);
                                }
                                break;
                        case 3: {
                                printf("\nCurrent list is :");
                                display(head);
                                printf("\n");
                                }
                                break;
                        case 4: exit(0);
                }
        }
        return 0;
}
