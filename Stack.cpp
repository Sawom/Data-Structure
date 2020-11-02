#include<bits/stdc++.h>   ///stack sample code
using namespace std;
int MAX_SIZE = 5;
int stack_array[5];
int top = -1;
int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}
int isFull(){
    if(top == MAX_SIZE) return 1;
    else return 0;
}

void Top(){
    if(isEmpty()==1){
        printf("Nothing to Show !! Stack is Empty\n");
    }
    else{
        printf("Top Element of Stack is %d\n",stack_array[top]);
    }
}
void pop(){
    if(isEmpty()==1){
        printf("Stack Underflow !!!\n");
    }else{
        int data = stack_array[top];
        top = top - 1;
        printf("Popped Element is %d\n",data);
    }
}

void push(int data){
    if(isFull()==1){
        printf("Stack Overflow ! \n");
    }else{
        top = top + 1;
        stack_array[top] = data;
        printf("%d is Pushed in Stack\n", data);
    }
}
int main(){
    while(1){
        printf("Enter Your Choice. 1.Push, 2.Pop, 3.Top 4.Exit\n");
        int choice;
        scanf("%d",&choice);
        if(choice == 1){
            int data;
            scanf("%d",&data);
            push(data);
        }else if(choice==2){
            pop();
        }else if(choice==3){
            Top();
        }else if(choice==4){
            for(int i=0;i<5;i++){
                printf("%d  ",stack_array[i]);
            }
            break;
        }
    }
}


