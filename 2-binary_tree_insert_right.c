#include "binary_trees.h"
/**
  * binary_tree_insert_right - insert a node as a right child
  * @parent: The parent node
  * @value: Value of the node
  * Return: pointer to the node
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right->parent =node;
		parent->right = node;
	}
	return (node);
}
