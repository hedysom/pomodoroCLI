//
// Created by hedysom on 24/03/25.
//

#ifndef POMODOROCLI_POMODORO_H
#define POMODOROCLI_POMODORO_H
#include "Timer.h"

class Pomodoro {
private:
    Timer timer = Timer(25);
public:
    Pomodoro()= default;
    ~Pomodoro()= default;
    void startPomodoro();
    void pausePomodoro();
    void stopPomodoro();
};


#endif //POMODOROCLI_POMODORO_H
