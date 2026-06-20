#include <stdio.h>

int main()
{
    int main_choice, sub_choice;

    printf("1. Numbers\n");
    printf("2. Characters\n");
    scanf("%d", &main_choice);

    switch(main_choice)
    {
        case 1:
            printf("1. Prime\n");
            printf("2. Palindrome\n");
            scanf("%d", &sub_choice);

            switch(sub_choice)
            {
                case 1:
                    printf("Prime Logic");
                    break;

                case 2:
                    printf("Palindrome Logic");
                    break;

                default:
                    printf("Invalid Choice");
            }
            break;

        case 2:
            printf("Character Operations");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}