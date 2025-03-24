//
// Created by hedysom on 24/03/25.
//
#include <chrono>
#include "Timer.h"
#include <thread>
#include <iostream>

Timer::Timer(int duration){
    this->duration = duration;
    remaining = this->duration;
}
void Timer::start(){
    using namespace std::chrono_literals;
    while(remaining > 0){
        if(is_paused)
            break;
        std::this_thread::sleep_for(1min);
        remaining--;
        std::cout << std::format("{} min remaining", remaining) << std::endl;
    }
}
void Timer::pause(){
    is_paused = true;
}
void Timer::stop(){
    duration = 0;
    remaining = 0;
}



