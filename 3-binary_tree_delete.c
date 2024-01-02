#include "binary_trees.h"


/**
if tree == null
	return;
if lleft and right == null
	delete node
else
	tree_delete(tree.left)
	tree_dete(tree.right)
	delete node
*/

/**OR 
if tree == null
	return;
else
	tree_delete(tree.left)
	tree_dete(tree.right)
	delete node
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
