#include "binary_trees.h"

/**
* binary_tree_is_leaf - that checks if a node is a leaf
* @node: node
* Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent && !(node->left) && !(node->right))
		return (1);
	else
		return (0);
}




/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
// int main(void)
// {
//     binary_tree_t *root;
//     int ret;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);

//     ret = binary_tree_is_leaf(root);
//     printf("Is %d a leaf: %d\n", root->n, ret);
//     ret = binary_tree_is_leaf(root->right);
//     printf("Is %d a leaf: %d\n", root->right->n, ret);
//     ret = binary_tree_is_leaf(root->right->right);
//     printf("Is %d a leaf: %d\n", root->right->right->n, ret);
//     return (0);
// }
