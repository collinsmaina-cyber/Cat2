# include <stdio.h>

int main() {
    float hoursWorked, hourlyWage;
    float grossPay, taxes, netPay;

    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hoursWorked > 40) {
        float regularPay = hourlyWage * 40;
        float overtimePay = (hoursWorked - 40) * (hourlyWage * 1.5);
        grossPay = regularPay + overtimePay;
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15; // 15% tax for the first $600
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20); // 20% tax for amount over $600
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Print the results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
