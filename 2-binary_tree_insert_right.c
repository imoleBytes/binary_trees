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
	node->parent = parent;
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

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
// int main(void)
// {
//     binary_tree_t *root;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_print(root);
//     printf("\n");
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);
//     return (0);
// }
