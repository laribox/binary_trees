#include "binary_trees.h"
/**
  * binary_tree_node - Creates a node in the tree.
  * @parent: the parent node
  * @value: Value of the node
  * Return: pointer to the node
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	return (node);
}
