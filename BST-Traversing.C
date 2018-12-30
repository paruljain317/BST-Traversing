#include<stdio.h>
#include<conio.h>
struct node
{
struct node *left;
int data;
struct node *right;
};
typedef struct node node;
node *root=NULL,*start=NULL;
void create()
{
node *t,*p;
t=(node *)malloc(sizeof(node)) ;
printf("enter the data of the node ");
scanf("%d",&t->data);
t->left=NULL;
t->right=NULL;
p=root;
if(root==NULL)
{
root=t;
start=t;
}
else
{
node *current;
current =root;
while(current)
{
p=current;
if(t->data>current->data)
current =current->right;
else
current=current->left;
}
if(t->data>p->data)
p->right=t;
else
p->left=t;
}
}
void display(node *l)
{
if(l->left)
display(l->left);
printf("%d  ",l->data);
if(l->right)
display(l->right);
}
void insert()
{
node *t,*p;
t=(node *)malloc(sizeof(node));
printf("enter the data u want to insert in the tree");
scanf("%d",&t->data);
t->left=NULL;
t->right=NULL;
p=root;
if(root==NULL)
{
root=t;
}
else
{
node *current;
current =root;
while(current)
{
p=current;
if(t->data>current->data)
current =current->right;
else
current=current->left;
}
if(t->data>p->data)
p->right=t;
else
p->left=t;
}
}
void delet()
{
}
void inorder(node *l)
{
if(l->left)
display(l->left);
printf("%d  ",l->data);
if(l->right)
display(l->right);
}

void preorder(node *l)
{
if(l!=NULL)
{
printf("%d  ",l->data);
preorder(l->left);
preorder(l->right);
}
}
void postorder(node *l)
{
if(l!=NULL)
{
postorder(l->left);
postorder(l->right);
printf("%d  ",l->data);
}
}
void main()
{
int n,x;
clrscr();
do
{
create();
printf("do you want to create another node??\nIf yes press 1 otherwise 0");
scanf("%d",&n);
}while(n==1);
clrscr();
printf("\ntraversal techniques of binary search tree are:-- \n");
printf("\n1. inorder traversal\n");
printf("2. preorder traversal\n");
printf("3. postorder traversal\n");
printf("\nelements of binary search tree are :\n");
printf("\n1. acc. to inorder traversal --> ");
inorder(root);
printf("\n");
printf("2. acc. to postorder traversal --> ");
preorder(root);
printf("\n");
printf("3. acc. to preorder traversal --> ");
postorder(root);
do
{
printf("\n\nDo you want to insert another node in tree ??\n");
printf("press 1 if yes or 0 if no  ");
scanf("%d",&x);
if(x==1)
{
insert();
clrscr();
printf("after inserting the node tree will be --\n");
printf("\n1. acc. to inorder traversal --> ");
inorder(root);
printf("\n");
printf("2. acc. to postorder traversal --> ");
preorder(root);
printf("\n");
printf("3. acc. to preorder traversal --> ");
postorder(root);
else
printf("\n\nthankuu!!!!");
}while(x==1);
/*printf("\n\nDo you want to delete any node in tree ??\n");
printf("press 1 if yes or 0 if no  ");
scanf("%d",&x);
if(x==1)
{
delet();
printf("after deleting the node tree will be --\n");
display(root);
}
printf("thankuu!!!!");*/
getch();
}