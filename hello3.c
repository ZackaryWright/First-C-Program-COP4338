#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(int argc, char *argv[]) {
    char name1[60];
    char name2[60];
    char name3[60];
    char color[60];
    char red[] = "RED";
    char blue[] = "BLUE";
    char green[] = "GREEN";
    char yellow[] = "YELLOW";
    int wrong = 0;

        if (argc == 2) {
            strcpy(name1,argv[1]);

            printf("Please enter your favorite color(Red,Green,Yellow,Blue) : ");
            scanf("%s", color);
            
            int i;
            for(i = 0; i <= strlen(color) - 1; i++) {
                if(toupper(color[i]) == red[i] || toupper(color[i]) == blue[i] || toupper(color[i]) == green[i] || toupper(color[i]) == yellow[i]) {
                    printf("");
                }
                else {
                wrong = 1;
            }
            }
            
            if(wrong != 1) {
                printf("Hello, my name is %s and my favorite color is %s\n",name1, color);
            }
            else {
                printf("You entered a color other than Red,Green,Yellow, or Blue(Or you mispelled one of the colors).\nPlease run program again.\n");
            }
        }
        else if(argc == 3) {
            
            strcpy(name1,argv[1]);
            strcpy(name2,argv[2]);

            printf("Please enter your favorite color(Red,Green,Yellow,Blue) : ");
            scanf("%s", color);
             
	int i;
             for(i = 0; i <= strlen(color) - 1; i++) {
                if(toupper(color[i]) == red[i] || toupper(color[i]) == blue[i] || toupper(color[i]) == green[i] || toupper(color[i]) == yellow[i]) {
                    printf("");
                }
                else {
                wrong = 1;
            }
            }
            
            if(wrong != 1) {
                printf("Hello, my name is %s %s and my favorite color is %s\n",name1, name2,color);
            }
            else {
                printf("You entered a color other than Red,Green,Yellow, or Blue(Or you mispelled one of the colors).\nPlease run program again.\n");
            }
            
        }
        else if(argc == 4) {
            
            strcpy(name1,argv[1]);
            strcpy(name2,argv[2]);
            strcpy(name3,argv[3]);

            printf("Please enter your favorite color(Red,Green,Yellow,Blue) : ");
            scanf("%s", color);
            
	int i;
            for(i = 0; i <= strlen(color) - 1; i++) {
                if(toupper(color[i]) == red[i] || toupper(color[i]) == blue[i] || toupper(color[i]) == green[i] || toupper(color[i]) == yellow[i]) {
                    printf("");
                }
                else {
                wrong = 1;
            }
            }
            
            if(wrong != 1) {
                printf("Hello, my name is %s %s %s and my favorite color is %s\n",name1, name2, name3, color);
            }
            else {
                printf("You entered a color other than Red,Green,Yellow, or Blue(Or you mispelled one of the colors).\nPlease run program again.\n");
            }
             
        }
        else if(argc > 4) {
                printf("Usage error: too many arguments\n");
                return 1;
        }
        else {
            printf("ERROR, please enter an argument and run program again\n");
        }
        

return (0);
}
