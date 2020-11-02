#include<bits/stdc++.h>                           
using namespace std;			///inorder,preorder,post order
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

void Preorder(struct Node *root) {
	if(root == NULL) return;
	printf("%d ",root->data);
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);
	printf("%d ",root->data);
	Inorder(root->right);
}

void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->left);
	Postorder(root->right);
	printf("%d ",root->data);
}

Node* Insert(Node *root,int data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	Node* root = NULL;
	root = Insert(root,15);
	root = Insert(root,10);
	root = Insert(root,8);
	 root = Insert(root,9);
	root = Insert(root,1);
	root = Insert(root,12);

	cout<<"Preorder: "<<endl;
	Preorder(root);
    cout<<endl;
	cout<<"Inorder: "<<endl;
	Inorder(root);
    cout<<endl;
	cout<<"Postorder: "<<endl;
	Postorder(root);
}
