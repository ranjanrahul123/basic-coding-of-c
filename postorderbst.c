#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int key;
	struct Node *left, *right;
};
struct Node* newNode(int key)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->key = key;
	node->left = node->right = NULL;

	return node;
}
void inorder(struct Node* root)
{
	if (root == NULL)
		return;

	inorder(root->left);
	printf("%d ", root->key);
	inorder(root->right);
}

// Recursive function to build a binary search tree 
struct Node* constructBST(int postorder[], int start, int end)
{
	if (start > end)
		return NULL;
	struct Node *node = newNode(postorder[end]);

	
	int i;
	for (i = end; i >=start; i--) {
		if (postorder[i] < node->key)
			break;
	}

	// recursively construct the right subtree
	node->right = constructBST(postorder, i + 1, end - 1);

	// recursively construct the left subtree
	node->left = constructBST(postorder, start, i);

	
	return node;
}
int main(void)
{

	int postorder[] = { 7, 12, 10, 18, 25, 20, 15 };
	int n = sizeof(postorder)/sizeof(postorder[0]);
	struct Node* root = constructBST(postorder, 0, n - 1);

	
	printf("Inorder Traversal of BST is : ");
	inorder(root);

	return 0;
}
