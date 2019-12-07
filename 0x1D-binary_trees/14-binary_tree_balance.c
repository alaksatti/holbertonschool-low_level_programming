#include "binary_trees.h"



/**
 * binary_tree_balance - measures balance factors
 * @tree: pointer to node
 * Return: balance factor
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (left - right);


}
/**
 * binary_tree_height - measures the height of a biary tree.
 * @tree: root pointer.
 * Return: height;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;


	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	i = binary_tree_height(tree->left);

	j = binary_tree_height(tree->right);

	if (i > j)
		return (1 + i);

	else
		return (1 + j);

}
