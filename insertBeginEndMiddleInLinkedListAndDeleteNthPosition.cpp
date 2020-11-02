#include<bits/stdc++.h>    ///insert begin,end,middle
#include<stdlib.h>              /// and delete from nth  position
using namespace std;
void insertBegining(struct Node *head,int value);
void insertEnd(struct Node *head,int data);
void insertMid(struct Node *head,int position, int value);
void printList(struct Node *head);
struct Node *ndelete(struct Node *head, int data);

struct Node{
    int data;
    struct Node *next;
};

struct Node *createLinkedList(int arr[],int size){
    struct Node *head=NULL, *temp=NULL ,*current=NULL;
    int i;
    for(i=0;i<size;i++){
        temp =(struct Node *) malloc(sizeof(struct Node) );
        temp->data = arr[i];
        temp->next=NULL;
        if(head==NULL){
            head = temp;
            current = temp;
        }
        else{
            current->next= temp;
            current = current->next;
        }
    }
    return head;
}

int main(){
    int a[]  = {36,25,38,66,69,99};
    struct Node *head= NULL;
    head = createLinkedList(a, 6);
     struct Node *current = head;
     printList(head);

    printf("after insert begining..........\n");
    insertBegining(head,200);
    printf("\n");

    printf("after insert end.........\n");
    insertEnd(head,6969);
    printf("\n");

    printf("after insert mid.........\n");
    insertMid(head,3,609);
    printf("\n");

    printf("after  delete........\n");
    struct Node *newHead = ndelete(head, 69);
    printList(newHead);
}

void insertBegining(struct Node *head,int data){
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node) );
    temp-> data = data;
    temp->next = head;

    struct Node  *newHead = temp;
    struct Node  *current = newHead;
    newHead = temp;
    printList(newHead);
}

void insertEnd(struct Node *head,int data){
    struct Node  *current = head;
    while(current-> next != NULL){
        current = current-> next;
    }
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node) );
     temp-> data = data;
    temp->next = NULL;
    current-> next = temp;
    printList(head);
}

void insertMid(struct Node *head,int position, int value){
    struct Node *temp = head;
    int counter = 0;

    while(temp!=NULL){
        counter++;
        if(counter ==position){
            struct Node *newNode = (struct Node *) malloc(sizeof(struct Node) );
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp=  temp->next;
    }
    printList(head);
}

struct Node *ndelete(struct Node *head, int data){

    struct Node  *dummyHead = (struct Node *) malloc(sizeof(struct Node) );
    dummyHead -> next =head;
    struct Node *temp  =dummyHead;

    while(temp -> next != NULL){
        if(temp -> next -> data == data ){
            temp -> next = temp -> next -> next ;
            break;
        } else{
            temp = temp -> next;
        }
    }
    return dummyHead -> next;
};

void printList(struct Node *head){
    struct Node  *current = head;
    while(current!=NULL){
        printf("%d -> ",current->data);
        current=current->next;
    }
    printf("NULL \n");
}
