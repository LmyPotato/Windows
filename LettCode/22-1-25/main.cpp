//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include "myfunction.h"
//
////typedef struct TreeNode {
////	int height;
////	int val;
////	struct TreeNode *left;
////	struct TreeNode *right;
////}TreeNode;
//
//int height(TreeNode *root) {
//	if (root == NULL) {
//		return 0;
//	}
//	else {
//		return root->height;
//	}
//}
//
//TreeNode* newNode(int key) {
//	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//	node->val = key;
//	node->left = NULL;
//	node->right = NULL;
//	node->height = 1;
//	return(node);
//}
//
//int getBalance(TreeNode* N) {
//	if (N == NULL)
//		return 0;
//	return height(N->left) - height(N->right);
//}
//
//TreeNode * ll_rotate(TreeNode *y) {
//	TreeNode *x = y->left;
//	y->left = x->right;
//	x->right = y;
//
//	x->height = max(height(x->left), height(x->right)) + 1;
//	y->height = max(height(y->left), height(y->right)) + 1;
//
//	return x;
//}
//
//TreeNode* rr_rotate(TreeNode *y) {
//	TreeNode *x = y->right;
//	y->right = x->left;
//	x->left = y;
//
//	x->height = max(height(x->left), height(x->right)) + 1;
//	y->height = max(height(y->left), height(y->right)) + 1;
//
//	return x;
//}
//
//TreeNode* lr_rotate(TreeNode *y) {
//	TreeNode *x = y->left;
//	y->left = rr_rotate(x);
//
//	return ll_rotate(y);
//}
//
//TreeNode* rl_rotate(TreeNode *y) {
//	TreeNode *x = y->right;
//	y->right = ll_rotate(x);
//	return rr_rotate(y);
//}
//
//
//TreeNode* insert(TreeNode* node, int key)
//{
//	if (node == NULL) {
//		return newNode(key);
//	}
//
//	if (key < node->val) {
//		node->left = insert(node->left, key);
//	}
//	else if (key > node->val) {
//		node->right = insert(node->right, key);
//	}
//	else {
//		return node;
//	}
//
//	node->height =max(height(node->left), height(node->right)) + 1;
//
//	int balance = getBalance(node);
//
//	if (balance > 1 && key < node->left->val) {		//LL型
//		return ll_rotate(node);
//	}
//
//	if (balance < -1 && key > node->right->val) {     //RR型
//		return rr_rotate(node);
//	}
//
//	if (balance > 1 && key > node->left->val) {		//LR型
//		node->left = rr_rotate(node->left);
//		return ll_rotate(node);
//	}
//
//	if (balance < -1 && key < node->right->val) {    //RL型
//		node->right = ll_rotate(node->right);
//		return rr_rotate(node);
//	}
//
//	return node;
//}
//
//int main() {
//
//	TreeNode *root = NULL;
//
//	root = insert(root, 1);
//	root = insert(root, 2);
//	root = insert(root, 3);
//	root = insert(root, 4);
//	root = insert(root, 5);
//	root = insert(root, 6);
//	root = insert(root, 7);
//	root = insert(root, 8);
//	root = insert(root, 9);
//	root = insert(root, 10);
//	root = insert(root, 11);
//
//	levelOrderTraverse(root);
//
////	system("pause");
//	return 0;
//}
