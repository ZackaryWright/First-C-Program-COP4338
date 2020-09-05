#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char *argv[]) {
	char name1[60];
	char name2[60];
	char name3[60];

	if (argc == 2) {
	strcpy(name1,argv[1]);
	printf("Hello, my name is %s\n",name1);
	}
	else if(argc == 3) {
	strcpy(name1,argv[1]);
	strcpy(name2,argv[2]);
	printf("Hello, my name is %s %s\n",name1, name2);
	}
	else if(argc == 4) {
	strcpy(name1,argv[1]);
	strcpy(name2,argv[2]);
	strcpy(name3,argv[3]);
	printf("Hello, my name is %s %s %s\n", name1,name2,name3);
	}
	else if(argc > 4) {
		printf("Usage error: too many arguments\n");
		return 1;
	}
	else printf("ERROR, please enter name arguments and run program again.\n"); 

return (0);
}
