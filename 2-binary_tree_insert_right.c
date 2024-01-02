#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


/**
* binary_tree_insert_right - creates a node and add to the right child
*								of the parent.
* @parent: parent node
* @value: data of node to be inserted.
*
* Return: pointer to the node created otherwise NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *old;


	if (parent == NULL)
		return NULL;

	node = binary_tree_node(NULL, value);
	if (node == NULL)
		return NULL;
	
	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		old = parent->right;
		parent->right = node;
		node->right = old;
	}
	return (node);
}
