#include <stdio.h>

// declare class of nodes, also pointer for the left+rigth node
struct node 
{   // i need node*parent 
    int data;
    struct node*left;
    struct node*right;   


};
//this function does count for the leaf nodes    need header 
struct getcount 
int getcount(node )
{
    if (node == NULL)
    return 0;
    if (node->left==NULL&& node->right==NULL)
    return 1;
    else 
    return getLeafCount(node->left)+
           getLEAFCount(node->right);
}

struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc (sizeof(struct node))
    node->data=data;
    node->left==NULL;
    node->right= NULL;
return(node);

}



