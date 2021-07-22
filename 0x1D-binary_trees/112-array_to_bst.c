#include "binary_trees.h"
/**
 * array_to_bst - uses bst_insert to build bst from array
 * @array: ptr to array of ints to be inserted as nodes
 * @size: size of array
 * Return: pointer to code node of tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *code;
	size_t i;

	code = NULL;
	for (i = 0; i < size; i++)
		bst_insert(&code, array[i]);
	return (code);
}