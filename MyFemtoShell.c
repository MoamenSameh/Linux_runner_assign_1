#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
char  command [1000] ;
char exit_now [1000] = "exit";

int compare_rslt;
//int exit = strcmp(command , "exit");
// Taking the Command from the user

do {
	printf ("\nAna Gahez Ya Basha > ");
	fgets ( command, sizeof(command), stdin);
	command [strlen(command) -1] = 0;
	compare_rslt = strcmp (command, "exit");
	
	if ( (compare_rslt == 0) ) {
		printf ("Good Bye :)\n");
	} else {
		printf("you said: %s",command);
	}

}

while (compare_rslt);


exit(0);
return 0;
}       


