//
// Created by hedysom on 24/03/25.
//
#include "Timer.h"
#include <thread>
#include <atomic>
#include <iostream>

// a generic timer that sleeps for 1 second, hence the duration specified should be in seconds
// at the end of specified time it will sound the buzz 3 times

Timer::Timer(int duration){
    this->duration = duration;
    remaining.store(this->duration);
}
void Timer::start(){
    using namespace std::chrono_literals;
    int elapsed = 0;
    int progressBarWidth = 40;
    while(remaining > 0){
        clearScreen();
        // stop if paused
        if(is_paused)
            break;

        //print the progress bar
        int progressChars = progressBarWidth * elapsed / duration;
        std::cout << "[";
        for (int i = 0; i < progressBarWidth; ++i) {
            if (i < progressChars) std::cout << "=";
            else std::cout << " ";
        }
        std::cout << "]" << std::endl;
        //sleep
        std::this_thread::sleep_for(1s);
        elapsed++;
        remaining--;
    }

    // Sound the alert 3 times
    for (int i = 0; i < 3; ++i) {
        soundAlert();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void Timer::pause(){
    is_paused = true;
}

void Timer::stop(){
    duration = 0;
    remaining = 0;
}

int Timer::getRemainingTime(){
    return this->remaining;
}

Timer::~Timer(){
    this->stop();
}

void Timer::soundAlert(){
    #ifdef _WIN32
    std::cout << '\a'; // Bell character
    #else
    system("printf '\a'");
    #endif
}


void Timer::clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}




