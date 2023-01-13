#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of a binary tree, 0 if NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter;

	if (!tree)
	{
		return (0);
	}

	counter = 0;
	binary_tree_height(tree->left);
	counter++;
	binary_tree_height(tree->right);

	return (counter);
}
