//
// Created by hedysom on 24/03/25.
//

#ifndef POMODOROCLI_TIMER_H
#define POMODOROCLI_TIMER_H


#include <atomic>

class Timer {
private:
    int duration;
    int remaining;
    std::atomic<bool> is_paused;
    std::atomic<bool> is_running;
public:



};


#endif //POMODOROCLI_TIMER_H
