#include<bits/stdc++.h>   ///create linked list
using namespace std;   ///  traversal and search
#include<stdlib.h>
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

int searchList(struct Node *head,int value){
    int index =1;
    while(head != NULL){
        if(head->data==value){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

int main(){
    int a[]  = {36,25,38,66,69,99};
    struct Node *head= NULL;
    head = createLinkedList(a, 6);
     struct Node *current = head;

    printf("index: %d \n",searchList(head,66));
    printf("index: %d \n\n",searchList(head,60));

    printf("List is........\n");
     while(head != NULL){    ///print linked list
            printf("%d ->", head->data);
            head = head->next;
    }
     printf("NULL \n"); /// print end
}
