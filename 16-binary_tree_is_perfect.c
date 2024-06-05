#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree to check
 * Return: 1 if it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	return (binary_tree_is_full(tree));
}
