#include <stdio.h>

int main() {
    int no, last_dig,seclast_dig,modified_no;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &no);

    // Extract the last two digits
    last_dig = no % 10;
   seclast_dig = (no / 10) % 10;

    // Remove the last two digits from the original number
  modified_no= no / 100;

    // Append the swapped last two digits
   modified_no = modified_no * 100 + last_dig* 10 + seclast_dig;

    // Output the modified number
    printf("Modified number: %d\n",modified_no);

    return 0;
}
