#include <stdio.h>
int main()
{

    int a,b;
    int choice;
    float result;
    printf("Choose an option:\n");
    printf("1.Division between a and b.\n");
    printf("2.Multiplication between a and b.\n");
    printf("3.sum of a and b.\n");
    printf("4.Difference between a and b.\n");
    printf("Enter your Choice(1 or 2 or 3 or 4):");
    scanf("%d",&choice);
    system("cls");


if (choice == 1)
    {
    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");

    if (choice == 11)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = a/b;
        printf("Without typecasting:%.2f\n",result);
    }

    else if (choice == 22)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a/b;
        printf("With typecasting:%.2f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}



else if (choice == 2)

{



    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");


    if (choice == 11)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = a * b;
        printf("Without typecasting:%.2f\n",result);
    }

    else if (choice == 22)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a*b;
        printf("With typecasting:%.2f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}


else if(choice == 3)
{


    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");

    if (choice == 11)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = a+b;
        printf("Without typecasting:%.2f\n",result);
    }

    else if (choice == 22)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a+b;
        printf("With typecasting:%.2f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}


else if (choice == 4)
{

    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");

    if (choice == 11)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = a-b;
        printf("Without typecasting:%.2f\n",result);
    }

    else if (choice == 22)
    {
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a-b;
        printf("With typecasting:%.2f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}

else
{
    printf("Invalid choice");
}


return 0;
}
