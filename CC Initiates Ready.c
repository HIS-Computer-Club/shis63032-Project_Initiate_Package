#include <stdio.h>
#include <stdlib.h>

int Homebrew_Installation();
int Atom_Installation();
int AtomPackage_Installation();
int CLT_Installation();
int Program_Check();

//선택 시스템 함수 - 지정된 함수로 유저를 전송한다.
int Decision_System(int x) {
  int systemOutput;
  system("clear");

  switch (x) {
  case 1:
    // 유저가 최초로 진입시 CLT 설치 함수로 들어가는 IF문
    printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
           "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");
    system("xcode-select --install");
    systemOutput = CLT_Installation();
    break;

  case 10:
    // 유저가 보낸 변수가 CLT 설치 함수에서 잘못되었을 시 반복하는 IF문
    systemOutput = CLT_Installation();
    break;

  case 2:
    // 유저가 CLT 함수에서 '계속' 요청을 하고 최초로 Homebrew 설치 함수에
    // 진입하는 IF문
    systemOutput = Homebrew_Installation(1);
    break;

  case 20:
    // 유저가 보낸 변수가 Homebrew 설치 함수에서 잘못되었을 시 반복하는 IF문
    systemOutput = Homebrew_Installation(0);
    break;

  case 3:
    // 유저가 Homebrew 설치 함수에서 '계속' 요청을 하고 최초로 Atom 설치 함수에
    // 진입하는 IF문
    systemOutput = Atom_Installation(1);
    break;

  case 30:
    // 유저가 보낸 변수가 Atom 설치 함수에서 잘못되었을 시 반복하는 IF문
    systemOutput = Atom_Installation(0);
    break;

  case 4:
    // 유저가 Atom 설치 함수에서 '계속' 요청을 하고 최초로 AtomPackage 설치
    // 함수에 진입하는 IF문
    systemOutput = AtomPackage_Installation(1);
    break;

  case 40:
    // 유저가 보낸 변수가 AtomPackage 설치 함수에서 잘못되었을 시 반복하는 IF문
    systemOutput = AtomPackage_Installation(0);
    break;

  case 99:
    // 유저가 오직 프로그램 점검만 요청할 경우
    systemOutput = Program_Check();
    break;

  default:
    break;
  }

  return 0;
}

//소개 함수 - 기본 시작 함수
int main() {
  int selection;

  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");
  printf("Greetings, Users. I'm shis63032. One of the elders in 2018-2019 "
         "Computer Club.\n\n");
  printf("At the point that you have received this program means that you have "
         "completed the Hour of Code Sessions. Congratulations!\n\n");
  printf("Before you proceed to the next step, we need to customize this "
         "computer to make it as a handy programming computer.\n");
  printf("This program will assume that you are capable of installing "
         "programms in \"Graphic User Interface (GUI)\".\n\n\n");
  printf("Are you?\n\n");
  system("whoami");
  printf("\n1. Yes\n2. No\n\n\n\n0. Initiate Package Check.\n\n");
  printf("Type in your number: ");
  scanf("%d", &selection);

  switch (selection) {
  case 1:
    printf("\n\nGood. Now, we will proceed to the next step.\n");
    selection = Decision_System(1);

    return 0;
    break;

  case 2:
    system("open https://www.wikihow.com/Act-More-Intelligent");
    system("open https://www.wikihow.com/Download-a-File");
    system("open "
           "http://cache.ppomppu.co.kr/zboard/data3/2017/0529/"
           "20170529233353_yecyhdcp.jpg");
    break;

  case 0:
    selection = Decision_System(99);
    break;

  default:
    selection = Decision_System(0);
    break;
  }
}

// CLT 설치 함수 - 제 1 차 다운 함수.
int CLT_Installation() {
  int selection;
  printf(
      "\nNow, we are going to install the infamous XCODE Command Line Tool.\n");
  printf("This tool will let you to approach to using programming language in "
         "your terminal.\n");
  printf("Detailed information will not be given right now due to time "
         "constrain and the level of difficulty. But you need it.\n\n\n");
  printf("The download can be quite long, so go have some tea...\n\n\n");

  printf("@@@@@Continue after the install is finished@@@@@\n\n\n");

  printf("1. Continue.\n");
  printf("Type in your number: ");
  scanf("%d", &selection);

  switch (selection) {
  case 1:
    selection = Decision_System(2);
    break;

  default:
    selection = Decision_System(10);
    break;
  }

  return 0;
}

// Homebrew 다운 함수 - 제 2 차 다운 함수.
int Homebrew_Installation(int x) {
  int selection;
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Great. Now lets install the Homebrew!\n");
  printf("Homebrew will allow you to download useful things without "
         "downloading by your web browser.\n");
  printf("From now on, you can download necessary things in your "
         "\"Terminal\".\n\n");

  if (x == 1) {
    system(
        "/usr/bin/ruby -e \"$(curl -fsSL "
        "https://raw.githubusercontent.com/Homebrew/install/master/install)\"");
  }

  system("clear");
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Great. Now lets install the Homebrew!\n");
  printf("Homebrew will allow you to download useful things without "
         "downloading by your web browser.\n");
  printf("From now on, you can download necessary things in your "
         "\"Terminal\".\n\n");

  system("brew doctor");

  printf("\n\n1. Continue.\n");
  printf("Type in your number: ");
  scanf("%d", &selection);

  switch (selection) {
  case 1:
    selection = Decision_System(3);
    break;

  default:
    selection = Decision_System(20);
    break;
  }

  return 0;
}

int Atom_Installation(int x) {
  int selection;
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Great work! Now lets install the power of Atom!\n");
  printf("Atom is a good program that can let you program in an environment "
         "that you can set by yourself.\n");
  printf("You always can customize your workspace - atom - to your favor.\n");
  printf("In atom, you can install the tools and themes made by others, or you "
         "can even create your own\n");
  printf("(I personally do not recommend, unless you have a solid skill for "
         "Web Designing Languages and some sweet senses.)\n\n");

  printf("Anyway, after the atom is installed, I recommend you to go in and "
         "look around the commands.\n");

  if (x == 1) {
    system("brew cask install atom");
  }

  system("clear");
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Great work! Now lets install the power of Atom!\n");
  printf("Atom is a good program that can let you program in an environment "
         "that you can set by yourself.\n");
  printf("You always can customize your workspace - atom - to your favor.\n");
  printf("In atom, you can install the tools and themes made by others, or you "
         "can even create your own\n");
  printf("(I personally do not recommend, unless you have a solid skill for "
         "Web Designing Languages and some sweet senses.)\n\n");

  printf("Anyway, after the atom is installed, I recommend you to go in and "
         "look around the commands.\n");
  // system("atom");

  printf("\n\n\n1. Continue.\n");
  printf("Type in your number: ");
  scanf("%d", &selection);

  switch (selection) {
  case 1:
    selection = Decision_System(4);
  default:
    selection = Decision_System(30);
  }

  return 0;
}

int AtomPackage_Installation(int x) {
  int selection;
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("We are almost done. Have you looked around inside the Atom?\n");
  printf("Well... If there is 'only' atom, it will be just a boring program "
         "that can do nothing.\n");
  printf("So, I will install a small terminal and some complier utilities to "
         "your atom.\n");
  printf("The terminal that I will install will have same function as this "
         "terminal right now.\n");
  printf("But isn't just easy to let terminal pop up inside the atom?\n");
  printf("So someone actually made a package for that.\n\n");

  if (x == 1) {
    system("apm install platformio-ide-terminal");
  }

  printf("\nGood. the package has been installed to your computer.\n");
  printf("Now, lets install the script package.\n");
  printf("'Script' package is a program that can 'build' your codes into "
         "actual programs.\n\n");

  if (x == 1) {
    system("apm install script");
  }

  printf("\n\nAlthough, 'script' package requires some other programs to build "
         "your codes depending on the language you use.\n(And there are a lot "
         "of different languages.)\n");
  printf("Now, lets check if there are necessary programs in your computer.\n");

  printf("\n\n1. Continue.\n");
  printf("Type in your number: ");
  scanf("%d", &selection);

  switch (selection) {
  case 1:
    selection = Decision_System(99);
    break;

  default:
    selection = Decision_System(40);
    break;
  }

  return 0;
}

int Program_Check() {
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Initiating...\n");
  system("xcode-select -v");
  system("xcode-select -p");
  system("brew doctor");
  system("atom -v");
  printf("\nCheck completed! You are good to go!\n");

  return 0;
}
