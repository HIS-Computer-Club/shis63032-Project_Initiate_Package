#include <stdio.h>
#include <stdlib.h>

int introduction();
int Atom_Installation();
int CLT_Installation();


//선택 시스템 함수 - 지정된 함수로 전송한다.
int decision_system(int x){
  int system;
  if (x==0){
    system=introduction();
  }
  if (x==1){
  }
  return 0;
}

// 메인 함수
int main(){
  int decision;
  system("clear");
  decision = decision_system(0);



  return 0;
}


//소개 함수 - 기본 시작 함수
int introduction(){
  int selection;

  system("clear");
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights Reserved.\nHIS Computer Club Program Package Checking Protocal.\n\n\n" );
  printf("Greetings, Users. I'm shis63032. One of the elders in 2018-2019 Computer Club.\n\n");
  printf("At the point that you have received this protocal means that you have completed the Hour of Code Sessions. Congratulations!\n\n");
  printf("Before you proceed to the next step, we need to customize this computer to make it as a handy programming computer.\n");
  printf("This protocal will assume that you are capable of 'installing programms in Graphic User Interface (GUI)'.\n\n\n");
  printf("Are you?\n\n");
  system("whoami");
  printf("\n1. Yes\n2. No\n\n");
  printf("Type in your number: ");
  scanf("%d", &selection);
  switch (selection) {
    case 1:
      system("clear");
      printf("Good. Now, we will proceed to the next step.\n");

      break;
    case 2:
      break;
    default:
      selection = decision_system(0);

  }
}


//도구 다운 함수 - 제 1차 다운 함수.
int CLT_Installation(){
  int selection;
  int system;
  if (system==0){
  printf("Now, we are going to install Command Line Tool.\n");
  printf("This tool will let you to approach to using programming language in your terminal.\n");
  printf("Detailed information will not be given right now due to time constrain and the level of difficulty.\n");
  printf("Press 'Install'.\n");
  system("xcode-select --install");
  printf("\n\n1. Continue\n\n\nType in your number:");
  scanf("%d", &selection);
  switch (selection) {
    case 1:

    default:
    selection =
}
  printf("\n\n1. Continue\n\n\nType in your number:");
  scanf("%d", &selection);
  switch (selection) {
    case :
  }
}
