
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Hafeezah Binte Abdul Kasim
 * ID: 201914994
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 30000.0;
   float niRate = 9.0;
   float taxRate = 25.0;

   float niContribution;
   float taxContribtuion;
   float salaryAfterNi;
   float taxAmount;
   float takeHomeSalary;

    // calculate the deductions and final take-home salary
    niContribution = salary * (niRate/100);
    salaryAfterNi = salary - niContribution;
    taxAmount = salaryAfterNi - 12500;

    if (taxAmount < 0){
      taxContribtuion = 0;
    }else{
      taxContribtuion = taxAmount * (taxRate/100);
    }

    takeHomeSalary = salaryAfterNi - taxContribtuion;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n",niContribution);
    printf("Tax contribution £%.2f\n",taxContribtuion);
    printf("Take home salary £%.2f\n",takeHomeSalary);

    return 0;
 }