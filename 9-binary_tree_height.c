#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of tree else 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (tree == NULL)
		return  (0);

	if (tree->left)
	{
		lh += binary_tree_height(tree->left);
		lh += 1;
	}
	if (tree->right)
	{
		rh += binary_tree_height(tree->right);
		rh += 1;
	}
	return (lh > rh ? lh : rh);
}
