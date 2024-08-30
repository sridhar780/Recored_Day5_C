#include <stdio.h>
int main() {
    int num1, num2, num3;
    int sum,product;
    float average;

    printf("Enter three integers:\n");
    
    scanf("%d%d%d",&num1,&num2,&num3);

   
    sum= num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = sum / 3.0;  

    
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);
    printf("Average: %.2f\n",average);

    return 0;
}
