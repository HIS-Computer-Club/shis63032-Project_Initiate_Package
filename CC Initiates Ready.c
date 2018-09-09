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
        system("clear");
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
                printf("\n\nGood. Now, we will proceed to the next step.\n\n");

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

        case 0:
                selection = Program_Check();
                break;

        default:
                system("read -p 'Press enter to end this session.'");
                break;
        }

        return 0;
}

// CLT 설치 함수
int CLT_Installation() {
        int selection;
        system("clear");
        printf("Now, we are going to install the infamous XCODE Command Line Tool.\n");
        printf("This tool will let you to approach various background set-ups that requires the programming languages to work in "
               "your terminal.\n");
        printf("Detailed information will not be given right now due to time "
               "constrain and due to the high level of difficulty. But you need it.\n\n");

        printf("The download can be quite long, so go have some tea...\n\n\n");


        system("xcode-select --install");

        system("read -p 'Press enter to continue.'");
        selection = Homebrew_Installation();

        return 0;
}

// Homebrew 다운 함수 - 제 2 차 다운 함수.
int Homebrew_Installation() {
        int selection;
        system("clear");
        printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
               "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

        printf("Great. Now lets install Homebrew!\n");
        printf("Homebrew will allow you to download useful things in Mac OS without "
               "downloading by your web browser or App Store.\n");
        printf("From now on, you can download necessary things in your "
               "\"Terminal\".\n\n");

        system(
                "/usr/bin/ruby -e \"$(curl -fsSL "
                "https://raw.githubusercontent.com/Homebrew/install/master/install)\"");

        system("read -p 'Press enter to continue.'");
        selection = Atom_Installation();

        return 0;
}

int Atom_Installation(int x) {
        int selection;
        system("clear");
        printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
               "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

        printf("Great work! Now, we have to face the power of Atom!\n");
        printf("Atom is a good program that can let you program in an environment "
               "that you can set by yourself.\n");
        printf("You always can customize your workspace - Atom - to your favor without limit.\n");
        printf("In Atom, you can install the tools and themes made by others, or you "
               "can even create your own tools, application, or theme.\n");
        printf("(I personally do not recommend, unless you have a solid skill for "
               "Web Designing Languages and some sweet senses.)\n\n");

        system("brew cask install atom");

        printf("\n\nAnyway, when Atom is installed, I recommend you to go in and "
               "look around the commands.\n\n");


        system("read -p 'Press enter to continue.'");

        selection = AtomPackage_Installation();

        return 0;
}

int AtomPackage_Installation(int x) {
        int selection;
        system("clear");
        printf("Copyright (c) 2018 Copyright HIS Computer Club All Rights "
               "Reserved.\nHIS Computer Club Package Checking Program.\n\n\n");

        printf("We are almost done. Have you looked around inside the Atom?\n");
        printf("Well... If there is 'only' atom, it will be just a boring program "
               "that can do nothing at all.\n");
        printf("So, I will install a small terminal and some complier utilities to "
               "your atom as a package.\n");
        printf("The terminal that I will install will have same function as this "
               "terminal that you are using it right now.\n");
        printf("While you program by using atom, most likly you will find bit annoyed that the terminal and the atom is splited.\n");
        printf("\"Isn't it easy to just let terminal pop up inside Atom?\" You may say,\n");
        printf("So someone actually made a package for that.\n\n");

        system("apm install platformio-ide-terminal");

        printf("\nGood. the package has been installed to your computer.\n");
        printf("Now, lets install the script package.\n");
        printf("'Script' package is a program that can 'build' your codes into "
               "actual programs.\n\n");

        system("apm install script");

        printf("\n\nAlthough, 'script' package requires some other programs to build "
               "your codes depending on the language you use.\nEach conditions and requirements are user's work that need to be installed before the actual usage.\nYou have to know that; the programmers arn't kind to help you to build the whole program just like the 'Installation Package' like this one.\nYOU ARE THE ONE THAT SHOULD ACTUALLY FIGURE OUT THE SYSTEM AND BUILD THE ENVIRONMENT!\n\n");
        printf("Now, lets check if there are necessary programs in your computer.\n\n");

        system("read -p 'Press enter to continue.'");
        selection = Program_Check();

        return 0;
}

int Program_Check() {
        int selection;
        system("clear");
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
