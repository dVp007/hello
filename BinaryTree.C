#include <stdio.h>
#include <stdlib.h>
typedef struct BST{
	int data;
	struct BST *left,*right;
} node;
node* createNode();
void addNode(node tree,int val);
void insert(node *root, node *new_node)
void inorder(node root);
node* createNode(){
	node temp;
	temp = (node *)malloc(sizeof(node));
	temp->left = NULL;
	temp->right = NULL;
	temp->data = NULL;
	return temp; 
}

void insert(node *root, node *new_node) {
   if (new_node->data < root->data) {
      if (root->lchild == NULL)
         root->lchild = new_node;
      else
         insert(root->lchild, new_node);
   }
 
   if (new_node->data > root->data) {
      if (root->rchild == NULL)
         root->rchild = new_node;
      else
         insert(root->rchild, new_node);
   }
}
int main(){
	node root,right,left;

	return 0;
}