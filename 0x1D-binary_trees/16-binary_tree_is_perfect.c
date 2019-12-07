#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to node
 * Return: 1 if perfect 0 if not
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
 * binary_tree_height - checks the height of a binary tree
 * @tree: pointer to node
 * Return: height
 *
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
/**
 *binary_tree_balance - checks if tree is balanced or nott
 * @tree: pointer to node
 * Return: 1 if balanced 0 if not.
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
