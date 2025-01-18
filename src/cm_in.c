#include <stdio.h>

int main(void) {
  char selectedUnit;
  double unitValue;
  printf("Please enter the length Unit (C (Centimeter)/i (Inch)): ");
  scanf("%c", &selectedUnit);

  if(selectedUnit == 'C' || selectedUnit == 'c') {
    printf("\nConvert Cm to In\n");
    printf("\nPlease enter the Value of Cm: ");
    scanf("%lf", &unitValue);

    double result = unitValue * 0.393701;

    printf("The Result is: %lf\n", result);
  }
  else if(selectedUnit == 'I' || selectedUnit == 'i') {
    printf("\nConvert In to Cm\n");
    printf("\nPlease enter the Value of In: ");
    scanf("%lf", &unitValue);

    double result = unitValue * 2.54;

    printf("The Result is: %lf\n", result);
  }
  else {
    printf("%c Is not a Valid Option!\n", selectedUnit);
    return 1;
  }

  return 0;
}
