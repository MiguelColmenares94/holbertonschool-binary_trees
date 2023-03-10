#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of a binary tree, 0 if NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft = 0, heightRight = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		heightLeft = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		heightRight = 1 + binary_tree_height(tree->right);
	}

	if (heightLeft > heightRight)
	{
		return (heightLeft);
	}

	return (heightRight);
}
