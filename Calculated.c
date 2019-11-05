
 yogeshkumar03 / PPS-program
Sign up
Code  Issues 0  Pull requests 0  Projects 0  Security  Pulse
Join GitHub today
GitHub is home to over 40 million developers working together to host and review code, manage projects, and build software together.

PPS-program/Calculated.c
@yogeshkumar03 yogeshkumar03 Create Calculated.c
09ba67b 20 hours ago
30 lines (28 sloc)  983 Bytes
  
# include <stdio.h>
int main() {
    char operator;
    double firstNumber,secondNumber;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}
