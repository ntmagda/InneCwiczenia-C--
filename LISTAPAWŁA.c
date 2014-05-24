#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node{
	int value;
	node *next;
};

node* addSort(node*,int);
node* search(node*,int);
node* delete(node*,int);
node* turn(node*);
void checkMem(node*);


int main(void){
	return 0;
}

void checkMem(node *check){
	if(check==NULL){
		printf("Nie udało się zaalokować pamięci");
		exit(EXIT_FAILURE);
	}
}

node* addSort(node *head,int valnew){
	node *new=(node*)malloc(sizeof(node));
	checkMem(new);
	new->value=valnew;
	new->next=NULL;
	node *tmp=head;
	if(!head || head->value>=valnew){	
		head=new;
		head->next=tmp;
	}else{
		while(tmp->next != NULL || tmp->next->value<=valnew) tmp=tmp->next;
			new->next=tmp->next;
			tmp->next=new;
	}
	return head;
}

node* search(node *head, int val){
	if(!head){
		printf("Nie ma takiej wartości");
		return NULL;
	}else{
		while(head!=NULL || head->value != val) head=head->next;
		return head;
	}
}

node* delete(node *head,int val){
	node *tmp;
	if(head->value==val){
		tmp=head;
		head=head->next;
		free(tmp);
	}else{
		while(head->next->value != val || head->next != NULL) head=head->next;
		tmp=head->next;
		head->next=tmp->next;
		free(tmp);
	}
}

node *turn(node *head){
	node *a,*p,*n;
	a=head;
	p=NULL;
	p=NULL;
	while(a!=NULL){
		n=a->next;
		a->next=p;
		p=a;
		a=n;
	}
}
		
			
			
			
		
		
	
