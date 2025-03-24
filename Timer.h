//
// Created by hedysom on 24/03/25.
//

#ifndef POMODOROCLI_TIMER_H
#define POMODOROCLI_TIMER_H


#include <atomic>

class Timer {
private:
    int duration;
    int remaining = 0;
    bool is_paused = false;
public:
    explicit Timer(int duration);
    ~Timer()= default;
    void start();
    void pause();
    void stop();
};


#endif //POMODOROCLI_TIMER_H
