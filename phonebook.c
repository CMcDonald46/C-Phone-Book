// Carson McDonald
// 8-29-24
// Phone Book in C
// This follows a Youtube video code along by The Tech Machine.
// Following along you start to realize you get do this a lot easier with proper use of 2D Arrays and a switch statement.
// Could have been a lot more efficent.
// Also could add more menu options to have a struct or class array that could change throughout the program and reset to the menu.

#include <stdio.h>

int main()
{
    char n[50];
    int a, p, d;
    char add[50];

    char na[50];
    int ag, pg, dg;
    char addr[50];
    
    printf("Welcome to Phone Book!");
    printf("Menu\n");
    printf("Press 1 to add the contact.\n\n");
    
    // I guess this is just a prompt for user to intiate the program.
    int x;
    printf("Enter:\n");
    scanf("%d",&x);

    if(x==1)    {
        int y;

        // Why are the only contact options 1 & 2?
        // Anything else ends the program.
        // Small Change.
        // Test.
        // Test again.
        printf("Enter the number of the contact to be added:\n");
        scanf("%d",&y);

        if(y==1)
        {
            printf("--------------------\n");
            printf("Name: ");
            scanf("%s", &n);
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%d", &p);
            printf("Date of Birth: ");
            scanf("%d", &p);
            printf("Address: ");
            scanf("%s", &add);
            printf("--------------------\n");

        }
        else if(y==2)
        {
            printf("--------------------\n");
            printf("Name: ");
            scanf("%s", &na);
            printf("Age: ");
            scanf("%d", &ag);
            printf("Phone Number: ");
            scanf("%d", &pg);
            printf("Date of Birth: ");
            scanf("%d", &dg);
            printf("Address: ");
            scanf("%s", &addr);
            printf("--------------------\n");

        }
        printf("Press 2 to see the contact you entered.\n");
        printf("Press 3 to exit to the phone book.\n");

        //Prompt for input to see the contact or exit the phone book.
        // Once again with a loop it could have been easier or a switch statement.
        int z;
        printf("Enter:\n");
        scanf("%d",&z);

        if(z==2)
        {
            int num;
            printf("Enter the contact to be viewed: ");
            scanf("%d",&num);

            // To preview contact 1.
            if(num==1)
            {
                printf("--------------------\n");
                printf("Name: ");
                printf("%s", n);
                printf("\nAge: ");
                printf("%d", a);
                printf("\nPhone Number: ");
                printf("%d", p);
                printf("\nDate of Birth: ");
                printf("%d", d);
                printf("\nAddress: ");
                printf("%s", add);
                printf("--------------------\n"); 
            }

            // To preview contact 2.
            else if(num==2)
            {
                printf("--------------------\n");
                printf("Name: ");
                printf("%s", na);
                printf("\nAge: ");
                printf("%d", ag);
                printf("\nPhone Number: ");
                printf("%d", pg);
                printf("\nDate of Birth: ");
                printf("%d", dg);
                printf("\nAddress: ");
                printf("%s", addr);
                printf("--------------------\n"); 
            }
        }
        // For closing the Phone Book.
        else if(z==3)
        {
            printf("Are you sure you want to close the phone book?\n");
            printf("1 for yes.\n");
            printf("2 for no.\n");

            int ans;
            printf("Enter:\n");
            scanf("%d", &ans);
            if (ans=1)
            {
                printf("The phone book has been closed.\n");
                printf("Have a good day!\n");
            }
            else if (ans==2)
            {
                printf("The phone book has not been closed.\n");
                printf("You can continue.\n");
            }
        }
    }
    // Could Loop for invalid results instead of just ending.
    // This is why a switch statement could work better.
    else
    {
        printf("Invalid!\n");
    }
    return 0;
}