#include <stdio.h>
#include <stdlib.h>

int introduction();
int Homebrew_Installation();
int Atom_Installation();
int AtomTerminal_Installation();
int CLT_Installation();


//선택 시스템 함수 - 지정된 함수로 유저를 전송한다.
int Decision_System(int x){
  int systemOutput;
  if (x==0){
    // 메인화면
    system("clear");
    systemOutput=introduction();
  }
  if (x==1){
    // 유저가 최초로 진입시 들어가는 IF문
    system("clear");
    system("xcode-select --install");
    systemOutput=CLT_Installation();
  }
  if (x==10){
    // 유저가 보낸 변수가 잘못되었을 시 반복하는 IF문
    system("clear");
    systemOutput=CLT_Installation();
  }
  if (x==2){
    system("clear");
    systemOutput = Homebrew_Installation(1);
  }
  if (x==20){

  }




  if (x==123456789){
    system("xcode-select -v");
    system("xcode-select -p");
    system("brew doctor");
    system("atom -v");
    printf("Check completed!");
  }
  return 0;
}

// 메인 함수
int main(){
  int decision;

  system("clear");

  decision = Decision_System(0);

  return 0;
}


//소개 함수 - 기본 시작 함수
int introduction(){
  int selection;

  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights Reserved.\nHIS Computer Club Program Package Checking Protocal.\n\n\n" );
  printf("Greetings, Users. I'm shis63032. One of the elders in 2018-2019 Computer Club.\n\n");
  printf("At the point that you have received this protocal means that you have completed the Hour of Code Sessions. Congratulations!\n\n");
  printf("Before you proceed to the next step, we need to customize this computer to make it as a handy programming computer.\n");
  printf("This protocal will assume that you are capable of 'installing programms in Graphic User Interface (GUI)'.\n\n\n");
  printf("Are you?\n\n");
  system("whoami");
  printf("\n1. Yes\n2. No\n3. Program Check Protocal\n\n");
  printf("Type in your number: ");
  scanf("%d", &selection);
  switch (selection) {
    case 1:
      printf("\n\nGood. Now, we will proceed to the next step.\n");
      selection = Decision_System(1);

      break;
    case 2:
      break;

    case 3:
      selection = Decision_System(123456789);
      break;
    default:
      selection = Decision_System(0);
      break;
  }
}


//도구 다운 함수 - 제 1차 다운 함수.
int CLT_Installation(){
  int selection;

  printf("Now, we are going to install Command Line Tool.\n");
  printf("This tool will let you to approach to using programming language in your terminal.\n");
  printf("Detailed information will not be given right now due to time constrain and the level of difficulty.\n");
  printf("Press 'Install'.\n");
  printf("After the installation is done, continue.\n");
  printf("\n\n1. Continue.\n\n\nType in your number:");
  scanf("%d", &selection);

  switch (selection) {
    case 1:
    selection = Decision_System(2);
    default:
    selection = Decision_System(10);
    break;
  }

}

//Homebrew 다운 함수 - 제 2차 다운 함;
int Homebrew_Installation_Output(int x){
  int selection;


  printf("Great. Now lets install the Homebrew!\n");
  printf("Homebrew will allow you to download useful things without downloading by your web browser.\n");
  printf("From now on, you can download necessary things in your \"Terminal\".\n\n");

  if (x==1){
    system("/usr/bin/ruby -e \"$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)\"");
  }

  system("clear");
  printf("Great. Now lets install the Homebrew!\n");
  printf("Homebrew will allow you to download useful things without downloading by your web browser.\n");
  printf("From now on, you can download necessary things in your \"Terminal\".\n\n");
  system("brew doctor");

  printf("\n\n1. Continue.\n");
  printf("Type in your number: ");
  scanf("%d",&selection);


  switch (selection) {
    case 1:

    selection = Decision_System(3);

    break;

    default:

    selection = Decision_System(20);

    break;
  }
}




int Atom_Installation(){
  int selection;


}
