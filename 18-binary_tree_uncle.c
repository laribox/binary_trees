#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
  * binary_tree_uncle - finds the parent's sibling of the current node
  * @node: node to check
  * Return: pointer to the uncle.
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
