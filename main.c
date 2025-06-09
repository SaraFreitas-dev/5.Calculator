#include <stdio.h>
#include <stdbool.h>

int main() {
    float first_num = 0.0;
    float second_num = 0.0;
    char operator;
    float result;
    bool keep_running = true;  // renomeado

    while (keep_running) {
        printf("\n\n###############################\n");
        printf("##### CALCULATOR PROGRAM ######\n");
        printf("###############################\n\n");

        printf("Enter the first number: ");
        scanf("%f", &first_num);

        printf("Enter the operator (+ - * /): ");
        scanf(" %c", &operator);  // espaço antes de %c para limpar buffer

        printf("Enter your second number: ");
        scanf("%f", &second_num);

        switch (operator) {
            case '+':
                result = first_num + second_num;
                break;
            case '-':
                result = first_num - second_num;
                break;
            case '*':
                result = first_num * second_num;
                break;
            case '/':
                if (second_num == 0) {
                    printf("Cannot divide by zero.\n");
                    continue;
                }
                result = first_num / second_num;
                break;
            default:
                printf("Invalid operator. Please try again.\n\n");
                continue;
        }

        printf("Result: %.2f.\n", result);

        char again;
        printf("\nWould you like to calculate again? (Y/N): ");
        scanf(" %c", &again);

        if (again == 'N' || again == 'n') {
            keep_running = false;
        }
    }

    return 0;
}
