#include "binary_trees.h"


/**
* binary_tree_sibling -  finds the sibling of a node
* @node: pointer to node to find
* Return:pointer to sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;
	binary_tree_t *parent;

	if (!node || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	sibling = parent->left == node ? parent->right : parent->left;
	return (sibling);
}
