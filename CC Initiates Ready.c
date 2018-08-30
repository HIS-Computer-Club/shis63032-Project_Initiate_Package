#include <stdio.h>
#include <stdlib.h>

int Homebrew_Installation();
int Atom_Installation();
int AtomPackage_Installation();
int CLT_Installation();
int Program_Check();

//소개 함수 - 기본 시작 함수
int main() {
  int selection;

  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");
  printf("Greetings, Users. I'm shis63032. One of the elders in 2018-2019 "
         "Computer Club. Before you start, make sure that you are with the tech coordinator such as Mr. Diego or Mr. Xx.\n\n");
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
    system("read -p 'Press enter to continue'");
    selection = CLT_Installation();
    break;

  case 2:
    system("open https://www.wikihow.com/Act-More-Intelligent");
    system("open https://www.wikihow.com/Download-a-File");
    system("open "
           "http://cache.ppomppu.co.kr/zboard/data3/2017/0529/"
           "20170529233353_yecyhdcp.jpg");
    break;

  default:
    selection = main();
    break;
  }

  return 0;
}

// CLT 설치 함수
int CLT_Installation() {
  int selection;
  printf(
      "\nNow, we are going to install the infamous XCODE Command Line Tool.\n");
  printf("This tool will let you to approach to using programming language in "
         "your terminal.\n");
  printf("Detailed information will not be given right now due to time "
         "constrain and the level of difficulty. But you need it.\n\n\n");
  printf("The download can be quite long, so go have some tea...\n\n\n");
  system("xcode-select --install");

  system("read -p 'Press enter to continue.'");
  selection = Homebrew_Installation();

  return 0;
}

// Homebrew 다운 함수 - 제 2 차 다운 함수.
int Homebrew_Installation() {
  int selection;
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Great. Now lets install the Homebrew!\n");
  printf("Homebrew will allow you to download useful things without "
         "downloading by your web browser.\n");
  printf("From now on, you can download necessary things in your "
         "\"Terminal\".\n\n");
    system(
        "/usr/bin/ruby -e \"$(curl -fsSL "
        "https://raw.githubusercontent.com/Homebrew/install/master/install)\"");


  system("clear");
  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Great. Now lets install the Homebrew!\n");
  printf("Homebrew will allow you to download useful things without "
         "downloading by your web browser.\n");
  printf("From now on, you can download necessary things in your "
         "\"Terminal\".\n\n");

  system("read -p 'Press enter to continue.'");
  selection = Atom_Installation();

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

  system("brew cask install atom");
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

  system("read -p 'Press enter to continue.'");
  selection = AtomPackage_Installation();

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

  system("apm install platformio-ide-terminal");

  printf("\nGood. the package has been installed to your computer.\n");
  printf("Now, lets install the script package.\n");
  printf("'Script' package is a program that can 'build' your codes into "
         "actual programs.\n\n");

  system("apm install script");

  printf("\n\nAlthough, 'script' package requires some other programs to build "
         "your codes depending on the language you use.\n(And there are a lot "
         "of different languages.)\n");
  printf("Now, lets check if there are necessary programs in your computer.\n");

  system("read -p 'Press enter to continue.'");
  selection = Program_Check();

  return 0;
}

int Program_Check() {
  int selection;

  printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
         "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

  printf("Initiating...\n");
  system("xcode-select -v");
  system("xcode-select -p");
  system("brew doctor");
  system("atom -v");
  printf("\nCheck completed! You are good to go!\n\n");
  system("read -p 'Press enter to end this session.'");
  
  return 0;
}
