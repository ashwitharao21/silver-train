#include<iostream.h>
#include<conio.h>
//using namespace std;
struct bstnode{
 int data;
 struct bstnode* left;
 struct bstnode* right;
};

bstnode* getnewnode(int data){
 bstnode* newnode= new bstnode();
 newnode->data=data;
 newnode->left=newnode->right=NULL;
 return newnode;
}

bstnode* Insert(bstnode* root, int data){
 if(root==NULL){
  root=getnewnode(data);
 }
 else if(data<=root->data){
  root->left=Insert(root->left,data);
 }
 else{
  root->right=Insert(root->right,data);
 }
return root;
}

int search(bstnode* root,int data){
 if(root==NULL) return 0;
 else if(root->data==data) return 1;
 else if(data<=root->data) return search(root->left, data);
 else return search(root->right, data);
}

void main(){
 bstnode* root=NULL;
 clrscr();
 root=Insert(root,15);root=Insert(root,10);root=Insert(root,20);
 root=Insert(root,8);root=Insert(root,12);root=Insert(root,25);
 int number;
 cout<<"Enter number to be search\n";
 cin>>number;
 if(search(root,number)==1)
  cout<<"Found\n";
 else
  cout<<"Not Found\n";
  getch();
 }

