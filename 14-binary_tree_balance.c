#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: +tive or -tive result
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hr = 0;
	int hl = 0;
	int balance = 0;

	if (!tree)
		return (0);

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	balance = hl - hr;
	balance -= tree->right ? 0 : -1;
	balance += tree->left ? 0 : -1;

	return (balance);
}
