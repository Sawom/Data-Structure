#include<bits/stdc++.h>   ///Queue with array
using namespace std;
/*
   Stack -> 1) Push, 2) Pop, 3) Top, 4) isEmpty, 5) isFull
   Queue -> 1) Enqueue 2) Dequeue, 3) Front, 4) isFull, 5) isEmpty
*/
int Queue[10], size_queue = 10, Front = -1, Rear = -1;

int isFull(){
    if(Rear == size_queue-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(){
    if(Front>Rear || Front == -1){
        return 1;
    }else{
        return 0;
    }
}

void Enqueue(int Value){
    if(isFull()){
        printf("Queue OverFlow !!! \n");
    }else{
        Rear++;
        Queue[Rear]=Value;
        printf("Enqueued Value is %d\n",Queue[Rear]);
        if(Front==-1){
            Front = 0;
        }
    }
}
void Dequeue(){
    if(isEmpty()){
        printf("Queue UnderFlow !! \n");
    }else{
        printf("Dequeued Value is %d\n",Queue[Front]);
        Front++;
    }
}
void FrontValue(){
    if(isEmpty()){
        printf("No Values in Queueu\n");
    }else{
        printf("Front Value is %d\n",Queue[Front]);
    }
}

int main()
{
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Dequeue();
    FrontValue();
    Dequeue();
    FrontValue();


}

