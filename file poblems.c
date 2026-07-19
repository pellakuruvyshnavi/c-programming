#include <stdio.h>

int main()
{
    FILE *fp;
    int number, quantity, i;
    float price, value;
    char item[10], filename[20];

    printf("Input file name:\n");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Input inventory data\n\n");
    printf("Item_name Number Price Quantity\n");

    for (i = 1; i <= 3; i++)
    {
        scanf("%s %d %f %d",
              item, &number, &price, &quantity);

        fprintf(fp, "%s %d %.2f %d\n",
                item, number, price, quantity);
    }

    fclose(fp);

    printf("\n\n");

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Item_name Number Price Quantity Value\n");

    for (i = 1; i <= 3; i++)
    {
        fscanf(fp, "%s %d %f %d",
               item, &number, &price, &quantity);

        value = price * quantity;

        fprintf(stdout, "%-10s %7d %8.2f %8d %11.2f\n",
                item, number, price, quantity, value);
    }

    fclose(fp);

    return 0;
}