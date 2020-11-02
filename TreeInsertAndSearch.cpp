#include<bits/stdc++.h>       /// insert,search
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node *currentNode, int value){
    if(currentNode==NULL){
        currentNode = createNode(value);
    }else if(value <= currentNode->data){
        currentNode->left = insert(currentNode->left,value);
    }else{
        currentNode->right = insert(currentNode->right,value);
    }
    return currentNode;
}
int Search(Node* currentNode, int value){
    if(currentNode==NULL){
        return 0;
    }else if(currentNode->data==value){
        return 1;
    }else if(value <= currentNode->data){
        return Search(currentNode->left,value);
    }else{
        return Search(currentNode->right,value);
    }
}
int main(){
    Node* root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,8);
    root = insert(root,35);
    root = insert(root,60);
    root = insert(root,23);

    int find = Search(root,45);
    find = Search(root,35);
    if(find == 1){
        cout<<"Value Found"<<endl;
    }else{
        cout<<"Value not Found"<<endl;
    }
return 0;
}
