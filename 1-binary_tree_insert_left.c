#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of parent node
 * @parent: pointer to parent node
 * @value: value to store in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	
	new_node = binary_tree_node(parent, value);

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->parent  = parent;
		new_node->left->parent = new_node;
	}

	return (new_node);
}
