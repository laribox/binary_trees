#include "binary_trees.h"
/**
  * binary_tree_insert_left - insert a node as a left child
  * @parent: The parent node
  * @value: Value of the node
  * Return: pointer to the node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  left_node = malloc(sizeof(binary_tree_t));

  if(parent == NULL || left_node == NULL)
    return NULL;

  left_node->n = value;
  left_node->parent = parent;
  left_node->left = NULL;
  left_node->right = NULL;

  if(parent->left != NULL)
  {
    left_node->left = parent->left;
    parent->left->parent = left_child;
    parent->left = left_node;
  }
  else
  {
    parent->left = left_node;
  }

  return (left_node);
}
