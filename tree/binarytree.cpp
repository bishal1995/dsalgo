#include<iostream>
using namespace std;

// Binary Tree defination
struct node{
  int data;
  struct node * right;
  struct node * left;

};
// Function for creating a new node with a intezer
struct node * newnode(int element){
  struct node * new_node;
  new_node = (* node)malloc(sizeof(node));
  new_node->data = element;
  new_node->right = NULL;
  new_node->left = NULL;
  return new_node;  
}
// Function for calculating maximun height/depth of tree
int maxDepth( struct node * NODE ){
  if ( NODE == NULL )
    return 0;
  else{
    int ldepth = maxDepth( NODE->left );
    int rdepth = maxDepth( NODE->eight );
    if( ldepth > rdepth )
      return (ldepth + 1);
    else
      return (rdepth + 1);
  }
}

// Main function
int main(){

  // Creating a node
  struct node root;
  //Pointing to a node
  struct  node * root;
  root = (node *)malloc(sizeof(node));



  
  return 0;
}
