#include "binary_trees.h"
/**
  * binary_tree_depth - returns the depth of a binary tree
  * @tree: Tree to measure the depth from
  * Return: depth of the binary tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	i = binary_tree_depth(tree->parent) + 1;
	return (i);
}
