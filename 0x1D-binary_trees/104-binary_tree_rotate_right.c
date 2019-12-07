#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate binary tree to right
 * @tree: root node pointer
 * Return: pointer to new root node
 *
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *holder, *new_parent;

	if (!tree || !tree->left)
		return (NULL);

	holder = tree->left;
	new_parent = tree->parent;
	tree->left = holder->right;

	if (holder->right)
		holder->right->parent = tree;

	holder->parent = new_parent;
	tree->parent = holder;
	holder->right = tree;

	return (holder);












}
