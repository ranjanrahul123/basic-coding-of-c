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
void inorderTraversal(struct Node* root)
{
	if (root == NULL)
		return;

	inorderTraversal(root->left);
	printf("%d ", root->key);
	inorderTraversal(root->right);
}
void postorderTraversal(struct Node* root)
{
	if (root == NULL)
		return;

	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d ", root->key);
}
struct Node* construct(int inorder[], int start, int end,
						int postorder[], int *pIndex)
{
	
	if (start > end)
		return NULL;

	// forming the left and right sub tree
	struct Node *node = newNode(postorder[(*pIndex)--]);
	int i;
	for (i = start; i <= end; i++) {
		if (inorder[i] == node->key)
			break;
	}

	// recursively construct the right subtree
	node->right= construct(inorder, i + 1, end, postorder, pIndex);

	// recursively construct the left subtree
	node->left = construct(inorder, start, i - 1, postorder, pIndex);
	return node;
}
struct Node* constructTree(int inorder[], int postorder[], int n)
{

	int *pIndex = &n;
	return construct(inorder, 0, n, postorder, pIndex);
}
int main(void)
{
	int inorder[]	= { 9, 5, 3, 6, 2, 7, 4, 8 };
	int postorder[] = { 9, 5, 6, 3, 7, 8, 4, 2 };
	int n = sizeof(inorder)/sizeof(inorder[0]);

	struct Node* root = constructTree(inorder, postorder, n - 1);

// for verify result print again inorder and postorder
	printf("Inorder	: "); inorderTraversal(root);
	printf("\nPostorder : "); postorderTraversal(root);

	return 0;
}
