size_t i = 1, j = 1;

if (!tree)
	return (0);


if (!tree->left && !tree->right)
	return (0);


i = binary_tree_height(tree->left);
j = binary_tree_height(tree->right);

if (i  > j)
	return (i);
else
	return (j);
