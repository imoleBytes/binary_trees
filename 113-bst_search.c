#include "binary_trees.h"

/**
* bst_search - Searches for a value in a binary search tree.
* @tree: A pointer to the root node
* @value: The value to search for
* Return: NULL if the tree is NULL or the value is not found
*         Otherwise, a pointer to the node containing the value.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
