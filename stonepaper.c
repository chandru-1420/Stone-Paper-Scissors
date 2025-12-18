#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;

    printf("Stone Paper Scissors Game\n");
    printf("1. Stone\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    srand(time(0));
    computer = rand() % 3 + 1;

    if (user == 1)
        printf("You chose: Stone\n");
    else if (user == 2)
        printf("You chose: Paper\n");
    else if (user == 3)
        printf("You chose: Scissors\n");
    else {
        printf("Invalid choice\n");
        return 0;
    }

    if (computer == 1)
        printf("Computer chose: Stone\n");
    else if (computer == 2)
        printf("Computer chose: Paper\n");
    else
        printf("Computer chose: Scissors\n");

    if (user == computer)
        printf("It's a Draw!\n");
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
        printf("You Win!\n");
    else
        printf("Computer Wins!\n");

    return 0;
}

