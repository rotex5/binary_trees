#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of node, else 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *tmp = tree;

	if (tree == NULL)
		return (0);

	if (tmp->parent)
	{
		while (tmp->parent)
		{
			tmp = tmp->parent;
			depth += 1;
		}
	}
	return (depth);
}
