#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create node
 * @parent: pointer to parent of the node to create
 * @value: the value to store into the node
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return  (NULL);

	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;

	new_node->n = value;
	new_node->left = new_node->right = NULL;

	return (new_node);
}
