#include <stdio.h>
#include <stdlib.h>
//defining a structure node
struct node {
   int data;
   struct node *left;
   struct node *right;
   struct node *inOrderSuccessor;
};
//function for creating a node
struct node *createNode(int n)
{  
  struct node *p;
  
  //alloting space using malloc
  
  p=(struct node*)malloc(sizeof(struct node));
  p->data=n;
  p->left=NULL;
  p->right=NULL;
  p->inOrderSuccessor=NULL;
  return p;
}
//finding the left most node of a tree
struct node *leftmost(struct node *root)
{
  while(root->left!=NULL)
    root=root->left;
    return root;
}
//finding the right most node of a tree
struct node *rightmost(struct node *root)
{
  while(root->right!=NULL)
    root=root->right;
    return root;
}

//functipon or finding successors
void findsuccessors(struct node *root)
{  struct node *p;

   //returning i the root is empty

    if(root==NULL)
    return;
    
    
    //checking the branches of root 
    //if right is'nt null then it's let most node is gonna be the successor
    
    
 if(root->right!=NULL)
 
 {
  root->inOrderSuccessor=leftmost(root->right);
    }
    if(root->left!=NULL){
    rightmost(root->left)->inOrderSuccessor=root;
   }
   //applying recursion
   findsuccessors(root->right);
   findsuccessors(root->left);
}
//function for printing inorder successors
void printsuccessor(struct node *root)
{  
   //returning if node is null
   if(root==NULL)
    return;
    
   //coming from  the left most points
   printsuccessor(root->left);
   
   if(root->inOrderSuccessor!=NULL) 
    printf("inorder successor of %d is %d \n",root->data,root->inOrderSuccessor->data);
    printsuccessor(root->right);
} 
int main()
{  //defining the whole binary tree
  struct node* root = createNode(5);
  root->left = createNode(9);
  root->right = createNode(7);
  root->left->left = createNode(3);
  root->right->left = createNode(4);
  root->right->right = createNode(1);
  root->right->right->left = createNode(6);
  root->right->right->right = createNode(2);
  //finding and [printing successors
  findsuccessors(root);
  printsuccessor(root);
  
  
}
