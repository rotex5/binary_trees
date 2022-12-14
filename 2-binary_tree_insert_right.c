#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of parent node
 * @parent: pointer to parent node
 * @value: value to store in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return  (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
	}
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right->parent = new_node;
	}

	return (new_node);
}
