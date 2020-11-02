#include<bits/stdc++.h>   ///circuler queue
#include<stdbool.h>
using namespace std;
#define capacity 5
int Queue [capacity];
int  front=0,rear= -1, totalitem=0;
bool isfull(){
    if(totalitem==capacity){
        return true;
    }
    return false;
}
bool isempty(){
    if(totalitem==0){
        return true;
    }
    return false;
}
void enqueue(int item){
    if(isfull()){
        printf("sorry.....queue is full....\n");
        return;
    }
       rear = (rear + 1) % capacity;
    Queue[rear]=item;
     totalitem++;
}
int dequeue(){
    if(isempty()){
        printf("Sorry....queue is already empty \n");
        return -1;
    }
    int frontitem=Queue[front];
    Queue[front]=NULL;
    front=(front+1)%capacity;
     totalitem--;
     return frontitem;
}
void print(){
    int i;
    printf("Queue: \n");
    for(i=0;i<capacity;i++){
        printf("%d  \n", Queue[i]);
    }
}
int main(){
    enqueue(9);
    enqueue(99);
     enqueue(29);
    enqueue(19);
    print();
    enqueue(89);
    print();
    dequeue();
    print();
    dequeue();
    print();
}
