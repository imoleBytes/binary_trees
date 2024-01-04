#include "binary_trees.h"

/**
* bst_insert - Inserts a value in a BST.
* @tree: A double pointer to the root node
* @value: The value to store in the node to be inserted.
* Return: A pointer to the created node, or NULL on failure.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current, *new;

	if (tree != NULL)
	{
		current = *tree;

		if (current == NULL)
		{
			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < current->n) /* insert in left subtree */
		{
			if (current->left != NULL)
				return (bst_insert(&current->left, value));

			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			return (current->left = new);
		}
		if (value > current->n) /* insert in right subtree */
		{
			if (current->right != NULL)
				return (bst_insert(&current->right, value));

			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			return (current->right = new);
		}
	}
	return (NULL);
}


// int main(void)
// {
//     bst_t *root;
//     bst_t *node;

//     root = NULL;
//     node = bst_insert(&root, 98);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 402);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 12);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 46);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 128);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 256);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 512);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 1);
//     printf("Inserted: %d\n", node->n);
//     node = bst_insert(&root, 128);
//     printf("Node should be nil -> %p\n", (void *)node);
//     binary_tree_print(root);
//     return (0);
// }
