#include "binary_trees.h"


/**
* binary_tree_insert_left - creates a node and add to the left child
*								of the parent.
* @parent: parent node
* @value: data of node to be inserted.
*
* Return: pointer to the node created otherwise NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *old;


	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(NULL, value);
	if (node == NULL)
		return (NULL);

	node->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		old = parent->left;
		parent->left = node;
		node->left = old;
	}
	return (node);
}
