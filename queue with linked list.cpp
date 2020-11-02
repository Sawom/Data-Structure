#include<bits/stdc++.h>
using namespace std;
struct node {
  int value;
  struct node *next;
  node(int x){
      next = NULL;
      value = x;
  }
} *front=NULL,*rear=NULL;

void enqueue(int n){
  if(front == NULL){
    /*
    for the first element ,there is only one node.
    so, first and rear pointers both point to same node;
    */
    struct node *newNode = new node(n);
    front = newNode;//setting value = n
    rear = front;//rear and front should be same since there is only one element.
  }else{
    /*
    if there is already one or more node present,then front would not be NULL,rather
    it will point to some node.rear is the latest pushed data node.
    */
    struct node *newNode = new node(n);//creating a node for new node
    rear->next = newNode;//rear is pointing to the latest pushed node.since you are pushing another
    //one it should not remain as the last one.
    rear = newNode;//setting newly pushed node as rear
  }
}

int dequeue(){
  /*
  for dequeueing we need to find out the previous node of  last node .but we only know
  the front and rear nodes.so we need a loop to find out the desired node.
  */
  if(front->next == NULL){
    /*
    if there is only one node then front's next pointer should be NULL
    */
    int x = front->value;
    free(front);
    front = NULL;
    rear = NULL;
    return x;
  }
  struct node *curr,*prev;
  curr=front->next;//current node
  prev=front;//previous node of current node
  while(curr->next != NULL){
    //rear's next is NULL
    prev = curr;
    curr = curr->next;
  }
  free(curr);
  prev->next=NULL;
  rear = prev;
  return rear->value;
}
void printQueue(){
  if(front == NULL){
    cout<<"queue is empty"<<endl;
    return;
  }
  struct node *temp = front;
  while(temp != NULL) {
    cout<<temp->value<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int main(){
  enqueue(1);
  cout<<dequeue()<<endl;
  enqueue(1);
  printQueue();
  enqueue(2);
  printQueue();
  enqueue(3);
  printQueue();
  dequeue();
  printQueue();
  dequeue();
  printQueue();
  dequeue();
  printQueue();
}
