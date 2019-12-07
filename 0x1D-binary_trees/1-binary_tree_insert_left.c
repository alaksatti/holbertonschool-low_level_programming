#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts node to the left of a parent.
 * @parent: parent node.
 * @value: value of new_node.
 * Return: pointer to new left node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (!parent)
		return (NULL);


	new_left_node = binary_tree_node(parent, value);

	if (!new_left_node)
		return (NULL);


	if (parent->left)
	{
		new_left_node->left = parent->left;
		new_left_node->left->parent = new_left_node;
	}

	parent->left = new_left_node;

	return (new_left_node);
}
