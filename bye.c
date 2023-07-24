#include <stdio.h>
#include <stdlib.h>s

// declare class of nodes, also pointer for the left+rigth node
typedef struct node 
{   // i need node*parent 
    int data;
    struct node*left;
    struct node*right;   


} node; 
//this function does count for the leaf nodes    need header 

int getcount(node* node) // data type name 
{
    if (node == NULL)
    return 0;   // boolean true 
    if (node ->left==NULL&& node->right==NULL)
    return 1;   // boolean false 
    else 
    return getcount(node->left)+
           getcount(node->right);
}

struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc (sizeof(struct node));
    node->data=data;
    node->left==NULL;
    node->right= NULL;
return(node);

}



