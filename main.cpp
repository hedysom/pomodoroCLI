#include <iostream>
#include "Pomodoro.h"
#include "Break.h"
#include <thread>

void println(const std::string& string);
void innerSwitch();
void input(char *);

int main() {
    Pomodoro pomodoro;
    // Break break = new Break;
    char outerChoise;

    std::cout << "**********************************************\n"
    << "Welcome to pomodoro timer\n" <<
    "**********************************************\n" <<
    "Press 1 to START WORKING (25 minutes)\n" <<
    "Pess 2 to EXIT\n" << std::endl;

    while(true){
        std::cin.get(outerChoise);
        // FLUSHING STDIN SINCE THE \n remains in it and causes another read
        std::cin.clear(); std::cin.ignore(INT_MAX,'\n');
        switch(outerChoise){
            case '1':
                pomodoro.startPomodoro();
                //innerSwitch();
                break;
            case '2':
                println("Bye!");
                return 0;
            default:
                println("You made a typo!");
                break;
        }
    }


    return 0;
}


void println(const std::string& string){
    std::cout << string << std::endl;
}

void innerSwitch(){
    char innerChoice;
    println("25 minutes left.");
    println("Press 1 to PAUSE THE TIMER");

    switch(innerChoice){
        case '1':
            //Pause the

    }
}


