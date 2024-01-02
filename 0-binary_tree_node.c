#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_tree_node - creates a node
* @parent: parent node
* @value: data of node
*
* Return: pointer to the node created otherwise
*           -NULL if not successful.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	(*node).parent = parent;
	(*node).left = NULL;
	(*node).right = NULL;

	return (node);
}

/**
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}
*/
