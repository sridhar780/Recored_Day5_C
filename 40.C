#include <stdio.h>
#include <ctype.h>

#define MAX 100

int main() {
    char line[MAX],i;
    int total_lines =0,blank_lines=0,single_line_comments = 0;
    int in_single_line_comment=0;
    int is_blank = 1;


    printf("Enter lines of code (press Enter on an empty line to finish):\n");

    while (fgets(line,sizeof(line),stdin)) {
	// Check for the end of input
	if (line[0] == '\n') {
	    break;
	}

	total_lines++;



	for (i= 0;line[i]!='\0';i++) {
	    if (!isspace(line[i])) {
		is_blank = 0;
		break;
	    }
	}
	if (is_blank) {
	    blank_lines++;
	    continue;
	}

	// Check for single-line comments
	if (line[0] == '/' && line[1] == '/') {
	    single_line_comments++;
	}
    }

    // Output the results
    printf("Total lines: %d\n", total_lines);
    printf("Blank lines: %d\n", blank_lines);
    printf("Single-line comments: %d\n", single_line_comments);

    return 0;
}
