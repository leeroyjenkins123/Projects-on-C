#include <myPrintCalculator.h>
#include <myCalculator.h>
#include <myScansCalculator.h>

int main()
{
    pc_printWelcomeText();

    int choice;
    double a, b, result;
    while (1)
    {
        sc_scanChoice(&choice);
        switch (choice)
        {
        case 1:
            sc_scanTwoNumbers(&a, &b);
            result = cal_addition(a, b);
            pc_printResult(result, "addition");
            break;
        case 2:
            sc_scanTwoNumbers(&a, &b);
            result = cal_subtraction(a, b);
            pc_printResult(result, "subtraction");
            break;
        case 3:
            sc_scanTwoNumbers(&a, &b);
            result = cal_division(a, b);
            pc_printResult(result, "division");
            break;
        case 4:
            sc_scanTwoNumbers(&a, &b);
            result = cal_multiplication(a, b);
            pc_printResult(result, "multiplication");
            break;
        case 5:
            sc_scanNumber(&a);
            result = cal_sin(a);
            pc_printResult(result, "sin");
            break;
        case 6:
            sc_scanNumber(&a);
            result = cal_cos(a);
            pc_printResult(result, "cos");
            break;
        case 7:
            sc_scanNumber(&a);
            result = cal_tg(a);
            pc_printResult(result, "tan");
            break;
        case 8:
            sc_scanNumber(&a);
            result = cal_ctg(a);
            pc_printResult(result, "cotan");
            break;
        case 9:
            sc_scanTwoNumbers(&a, &b);
            result = cal_remainder(a, b);
            pc_printResult(result, "remainder");
            break;
        case 10:
            printf("Bye bye\n");
            return 0;
        default:
            break;
        }
        pc_printMenu();
    }

    return 0;
}