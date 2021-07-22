#include "binary_trees.h"
/**
  * binary_tree_node - creates a binary tree node
  * @parent: pointer to the parent node of the node to create
  * @value: the value to put in the new node
  * Return: returns the pointer to the new node of NULL if failure
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *code;

	code = malloc(sizeof(binary_tree_t));
	if (code == NULL)
		return (NULL);
	code->n = value;
	code->left = NULL;
	code->right = NULL;
	code->parent = parent;
	return (code);
}