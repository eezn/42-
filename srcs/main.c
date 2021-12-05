#include "skeleton.h"

int main(void)
{
	int row = 5;
	int col = 10;
	int	**arr;

	/* Allocate memory of 2d array */
	arr = (int **)malloc(sizeof(int *) * row);
	for (int i = 0; i < row; i++)
		arr[i] = (int *)malloc(sizeof(int) * col);

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = i + j;

	/* print array */
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("%02d ", arr[i][j]);
		printf("\n");
	}

	/* free */
	for (int i = 0; i < row; i++)
		free(arr[i]);
	free(arr);

	return (0);
}
