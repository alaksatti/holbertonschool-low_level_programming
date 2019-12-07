#include "binary_trees.h"
#include <limits.h>
/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 * @tree: pointer to root node
 * Return: 0 of not 1 is is a valid bst
 *
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int n, check = 0;

	if (!tree)
		return (0);

	n = INT_MIN;
	check = is_bst(tree, n);

	return (check);

}

int is_bst(const binary_tree_t *tree, int n)
{
	if (tree->left)
		if (!is_bst(tree->left, n))
			return (0);
	if (n < tree->n)
		n  = tree->n;
	else
		return (0);

	if (tree->right)
		if (!is_bst(tree->right, n))
			return (0);
	return (1);
}
