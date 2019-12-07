#include "binary_trees.h"

/**
 * bst_search - searches for a value in BST
 * @tree: root node pointer
 * @value: value to be searched
 * Return: pointer to node containing value == to wanted value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	while (tree && tree->n != value)
		if (value > tree->n)
			tree = tree->right;
		else
			tree = tree->left;
	return ((bst_t *)tree);
}
