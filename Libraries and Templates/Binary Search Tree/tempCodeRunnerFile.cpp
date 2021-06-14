#include <bits/stdc++.h>
 
using namespace std;

//structure representing each node of a binary search tree
struct node
{
	int data;
	node *left,*right;
	//here left points to the left subtree of a particular node and right points to 
	//the right subtree.
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};

//After insertion we will return a pointer pointing to the node
node* insert(node *root,int val)
{
	if(root==NULL)
	return new node(val);
	
    if(val<root->data)
	root->left=insert(root->left,val);
	if(val>root->data)
	root->right=insert(root->right,val);
	
    return root;
}

//Function to print the nodes in order
void print(node *root)
{
	if(root==NULL)
	return;
	
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);

}

#define start(x) int x;cin>>x;while(x--)

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

node* root=NULL;
root=insert(root,5);
insert(root,10);
insert(root,-1);

print(root);


 
return 0;
}