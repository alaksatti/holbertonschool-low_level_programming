#include "binary_trees.h"


/**
 *  binary_tree_delete - deletes a full binary tree.
 * @tree: root of binary tree.
 * Return: Nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp = tree;


	if (!tree)
		return;

	binary_tree_delete(tmp->left);
	binary_tree_delete(tmp->right);
	free(tmp);

}
