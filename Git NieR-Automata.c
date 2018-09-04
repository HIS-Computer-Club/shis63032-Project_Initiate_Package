#include <stdio.h>
#include <stdlib.h>

int GitHub();
int Git_Repo();
int Git_Basic();
int Git_Advanced();


int main(){
        int selection;

        printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights Reserved.\nHIS Computer Club GitHub Training Session. \n\n\n");
        printf("Welcome to HIS Computer Club Training Session.\n");
        printf("In here, we are going to learn about 'GitHub' and what is it for.\n");
        printf(" 1. What is 'GitHub'?\n 2. Git Repository.\n 3. Git Basic.\n 4. Git Advanced (Optional)\n 5. End this session\nType in the number: ");
        scanf("%d", &selection);
        switch (selection) {
        case 1:
                GitHub();
                break;
        case 2:
                Git_Repo();
                break;
        case 3:
                Git_Basic();
                break;
        case 4:
                Git_Advanced();
                break;
        case 5:
                break;
        default:
                main();
                break;
        }

        return 0;
}

int GitHub(){
        int selection;

        system("clear");
        printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights Reserved.\nHIS Computer Club GitHub Training Session. \n\n\n");
        printf("Introduction of GitHub.\n\n1.What is GitHub?\n");
        printf("Before explaining about 'GitHub', we should start our journey to 'Git'.\n");

        printf("\nSo, what is 'Git'?\n");
        printf("'Git' is a program made by Linus Torvalds - who also made Operating System(OS) called 'Linux'\n\n");
        printf("'Git' it a program (a.k.a. version control program) that can save anywhere, upload anywhere, and keep track of changes made by one person or many people.\n");
        printf("And the Git's server - where you save/upload stuff, is called GitHub.\n");
        printf("Its useful for teamworking projects, and most of the programs are made by groups.\n\n\n");
        printf("We will learn how to use Git step by step in next session: \"4. Git Repository\".\n");
        printf("Reference Link:\n1. Linus Torvald's GitHub page\n2. GitHub Homepage\n3. Wikipedia for Git.\n\n4. Git Repository\n\n\n0. Back to main terminal console.");
        printf("Type in the number:");
        scanf("%d", &selection);
        switch (selection) {
        case 1:
                system("open https://github.com/torvalds");
                break;
        case 2:
                system("open https://github.com/");
                break;
        case 3:
                system("open https://en.wikipedia.org/wiki/Git");
                break;
        case 4:
                Git_Repo();
                break;
        case 0:
                main()
                break;
        default:
                GitHub();
                break;
        }
}

int Git_Repo(){
        int selection = 0;
        char command[];

        if(selection == 0){
          printf("Before we actually go into the actual usage, we have to set up some environment for this program.\n\nType \"mkdir Git && cd Git\"\n");
          printf("$");
          gets(command);

          if(str=="mkdir Git && cd Git") {
            system("mkdir Git && cd Git");
            selection = 1;
          }
          else {
            selection = 0;
            Git_Repo();
          }
        }

        if(selection == 1){

        }


        return 0;
}

int Git_Basic(){
        int selection;

        return 0;
}

int Git_Advanced(){
        int selection;

        return 0;
}
