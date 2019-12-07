#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to root node of tree
 * Return: 1 if comlete 0 if not/
 *
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	if ((!tree->left && !tree->right) || binary_tree_is_perfect(tree) == 1)
		return (1);

	balance = binary_tree_balance(tree);


	if (balance)
	{
		if (!tree->right || binary_tree_is_perfect(tree->right) == 1)
			if (binary_tree_is_complete(tree->left) == 1)
				return (1);
		return (0);

	}


	else
	{
		if (binary_tree_is_perfect(tree->left) == 1)
			if (binary_tree_is_complete(tree->right) == 1)
				return (1);

		return (0);
	}

	return (0);

}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to node
 * Return: 1 if perfect 0 if not.
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!binary_tree_balance(tree))
	{
		if (!binary_tree_height(tree->left) &&
				!binary_tree_height(tree->right))
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);

}
/**
 * binary_tree_balance - finds the balance of a tree
 * @tree: pointer to node
 * Return: the balance.
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
 * binary_tree_height - finds the height of a tree
 * @tree: pointer to node
 * Return: height
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


