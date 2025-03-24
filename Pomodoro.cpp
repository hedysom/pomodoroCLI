//
// Created by hedysom on 24/03/25.
//

#include "Pomodoro.h"

void Pomodoro::startPomodoro(){
    timer.start();
}
void Pomodoro::pausePomodoro(){
    timer.pause();
}
void Pomodoro::stopPomodoro(){
    timer.stop();
}
