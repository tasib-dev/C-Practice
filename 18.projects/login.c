#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main () {
    int n;
    printf("===========================\n");
    printf("welcome to my database\n");
    printf("============================\n");
    printf("choose one (just type the number 1 or 2)\n");
    printf("1. new here? -- then create a account\n");
    printf("2. already a user? -- then Login\n");
    scanf("%d", &n);
    switch (n)
    {case 1 :
        char user[20];
        int pass;
        FILE *fp = fopen("data.txt", "a");
        printf("type your username: (only character)\n");
        scanf("%s", user);
        printf("now give a password (only number)\n");
        scanf("%d", &pass);
        fprintf(fp, "%s %d\n", user, pass);
        fclose(fp);
        break;
    case 2 :
        char preuser[20];
        int prepass;
        char file_user[20];
        int file_pass;
        int found =0;
        printf("what is your username?\n");
        scanf("%s", preuser);
        printf("what's your password?\n");
        scanf("%d", &prepass);
        fp = fopen("data.txt", "r");
        while (fscanf(fp, "%s %d", file_user, &file_pass) != EOF){
             if (strcmp(preuser, file_user) == 0 && prepass == file_pass){
                     found = 1;
                     break;
                 }
        }
        fclose(fp);
        if (found) {
    printf("great\n");} else{
        printf("wrong username or password\n");}
        break;
    default:
        printf("Wrong choice\n");
        break;
    }
    return 0;
}