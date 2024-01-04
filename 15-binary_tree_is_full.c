#include "binary_trees.h"

int is_full_recursive(const binary_tree_t *tree);

/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: A pointer to the root node of the tree to check.
*
* Return: 1 if full, otherwie 0.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
* is_full_recursive - utils func to Check if binary tree is full.
* @tree: pointer to the root node
* Return: 1 if full, otherwie 0.
*/
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}