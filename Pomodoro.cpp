//
// Created by hedysom on 24/03/25.
//

#include <ostream>
#include "Pomodoro.h"


void Pomodoro::startPomodoro(){
    std::println("Pomodoro started");
    timer.start();
}
void Pomodoro::pausePomodoro(){
    timer.pause();
}
void Pomodoro::stopPomodoro(){
    timer.stop();
};