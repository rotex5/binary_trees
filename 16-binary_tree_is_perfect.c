#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - checks if a tree is a perfect tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t height = 0;
	size_t perfect = 0;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect = (size == 1 ? 1 : (1 << (height + 1)) - 1);

	return (size == perfect ? 1 : 0);
}
