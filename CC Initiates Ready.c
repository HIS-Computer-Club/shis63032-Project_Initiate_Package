#include <stdio.h>
#include <stdlib.h>

int introduction();
int Homebrew_Installation();
int Atom_Installation();
int AtomPackage_Installation();
int CLT_Installation();


//선택 시스템 함수 - 지정된 함수로 유저를 전송한다.
int Decision_System(int x){
  int systemOutput;
  system("clear");
  if (x==0){
    // 메인화면
    systemOutput=introduction();
  }
  if (x==1){
    // 유저가 최초로 진입시 CLT 설치 함수로 들어가는 IF문
    system("xcode-select --install");
    systemOutput=CLT_Installation();
  }
  if (x==10){
    // 유저가 보낸 변수가 CLT 설치 함수에서 잘못되었을 시 반복하는 IF문
    systemOutput=CLT_Installation();
  }
  if (x==2){
    // 유저가 CLT 함수에서 '계속' 요청을 하고 최초로 Homebrew 설치 함수에 진입하는 IF문
    systemOutput = Homebrew_Installation(1);
  }
  if (x==20){
    systemOutput = Homebrew_Installation(0);
  }
  if (x==3){
    systemOutput = Atom_Installation(1);
  }
  if (x==30){
    systemOutput = Atom_Installation(0);
  }
  if (x==4){
    systemOutput = AtomPackage_Installation(1);
  }
  if (x==40){
    systemOutput = AtomPackage_Installation(0);
  }




  if (x==777){
    // 유저가 오직 프로그램 점검만 요청할 경우
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
      selection = Decision_System(777);
      break;
    default:
      selection = Decision_System(0);
      break;
  }
}


//CLT 설치 함수 - 제 1 차 다운 함수.
int CLT_Installation(){
  int selection;

  printf("Now, we are going to install the infamous XCODE Command Line Tool.\n");
  printf("This tool will let you to approach to using programming language in your terminal.\n");
  printf("Detailed information will not be given right now due to time constrain and the level of difficulty.\n");
  printf("Press 'Install'.\n");
  printf("The download can be quite long, so go have some tea...\n\n\n");


  printf("@@@@@Continue after the install is finished@@@@@\n", );


  printf("1. Continue.\n");
  printf("Type in your number:");
  scanf("%d", &selection);

  switch (selection) {
    case 1:
    selection = Decision_System(2);
    break;

    default:
    selection = Decision_System(10);
    break;
  }
}

//Homebrew 다운 함수 - 제 2 차 다운 함수.
int Homebrew_Installation(int x){
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




int Atom_Installation(int x){
  int selection;

  printf("Great work! Now lets install the power of Atom!\n");
  printf("Atom is a good program that can let you program in an environment that you can set by yourself.\n");
  printf("You always can customize your workspace - atom - to your favor.\n");
  printf("In atom, you can install the tools and themes made by others, or you can even create your own\n");
  printf("(I personally do not recommend, unless you have a solid skill for Web Designing Languages and some sweet senses.)\n\n");

  printf("Anyway, after the atom is installed, I recommend you to go in and look around the commands.\n");

    if (x==1){
        system("brew cask install atom");
      }

  system("clear");
  printf("Great work! Now lets install the power of Atom!\n");
  printf("Atom is a good program that can let you program in an environment that you can set by yourself.\n");
  printf("You always can customize your workspace - atom - to your favor.\n");
  printf("In atom, you can install the tools and themes made by others, or you can even create your own\n");
  printf("(I personally do not recommend, unless you have a solid skill for Web Designing Languages and some sweet senses.)\n\n");

  printf("Anyway, after the atom is installed, I recommend you to go in and look around the commands.\n");
  system("brew doctor");


  printf("\n\n\n1. Continue.\n");
  printf("Type in your number:");
  scanf("%d", &selection);

  switch (selection) {
    case 1:
    selection = Decision_System(4);
    default:
    selection = Decision_System(30);

  }
}
