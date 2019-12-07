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
	int check = 0;

	if (!tree)
		return (0);

	check = bst_checker(tree, INT_MIN, INT_MAX);

	return (check);

}
/**
 * is_bst - helper function to check if tree is bst
 * @tree: pointer to node
 * @min: min value
 * @max: max value
 * Return: 1 if is 0 if not bst
 */
int bst_checker(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n > max || tree->n < min)
		return (0);

	return (bst_checker(tree->left, min, tree->n - 1) &&
			bst_checker(tree->right, tree->n + 1, max));
}
