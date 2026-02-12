// Bookstore Management

#include <stdio.h>

int main()
{

	int inventory = 100; // the starting inventory
	int change;

	while(1)
	{
		printf("Current inventory: %d\n", inventory);
		printf("Enter the number of books added or removed (0 to quit): ");
		scanf("%d", &change);

		if (change == 0)
		{
			printf("Program ended.\n");
			break;
		}
		inventory = inventory + change;
		printf("Updated inventory: %d\n\n",inventory);
	}
	return 0;
}
