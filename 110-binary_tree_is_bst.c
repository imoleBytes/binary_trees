#include "binary_trees.h"
#include "limits.h"

int is_bst_helper(const binary_tree_t *tree, int low, int high);
/**
 * binary_tree_is_bst - Checks if binary tree is a valid binary search tree.
 * @tree: A pointer to root
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}


/**
* is_bst_helper - Checks if a binary tree is a valid binary search tree.
* @tree: A pointer to the root node
* @low: The value of the smallest node visited thus far.
* @high: The value of the largest node visited this far.
*
* Return: 1 if the tree is a valid BST, otherwise 0.
*/
int is_bst_helper(const binary_tree_t *tree, int low, int high)
{
	if (tree != NULL)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (is_bst_helper(tree->left, low, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, high));
	}
	return (1);
}


// int main(void)
// {
//     binary_tree_t *root;
//     int bst;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 128);
//     root->left->right = binary_tree_node(root->left, 54);
//     root->right->right = binary_tree_node(root, 402);
//     root->left->left = binary_tree_node(root->left, 10);

//     binary_tree_print(root);
//     bst = binary_tree_is_bst(root);
//     printf("Is %d bst: %d\n", root->n, bst);
//     bst = binary_tree_is_bst(root->left);
//     printf("Is %d bst: %d\n", root->left->n, bst);

//     root->right->left = binary_tree_node(root->right, 97);
//     binary_tree_print(root);
//     bst = binary_tree_is_bst(root);
//     printf("Is %d bst: %d\n", root->n, bst);
//     return (0);
// }