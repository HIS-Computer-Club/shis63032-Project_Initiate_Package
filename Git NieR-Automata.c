#include <stdio.h>
#include <stdlib.h>

int GitHub(int continue);
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
      main();
    case 2:

    case 3:

    case 4:

    case 5:
    break;

    default:
  }

  return 0;
}

int GitHub(continue){
  int selection;

  system("clear");
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights Reserved.\nHIS Computer Club GitHub Training Session. \n\n\n");
  printf("Introduction of GitHub.\n\n1.What is GitHub?\n");
  printf("Before explaining about 'GitHub', we should start our journey to 'Git'.\n");
  printf("\nSo, what is 'Git'?\n");
  printf("'Git' is a program made by Linus Torvalds - who also made Operating System(OS) called 'Linux'\n\n");
  printf("'Git' it a program that can save anywhere, upload anywhere, and keep track of changes made by one person or many people.\n", );
  printf("And the Git's server - where you save/upload stuff, is called GitHub.\n");
  printf("Its useful for teamworking projects, and most of the programs are made by groups.\n\n\n");
  printf("Reference Link:\n1. Linus Torvald's GitHub page\n2. GitHub Homepage\n3. Wikipedia for Git.\n\n\n0. Back to main terminal console.");
  printf("Type in the number:");
  scanf("%d", &selection);
  switch (selection) {
    case 1:
      system("open https://github.com/torvalds");
    case 2:
      system("open https://github.com/");
    case 3:
      system("open https://en.wikipedia.org/wiki/Git")
    case 0:

    default:
  }
}
