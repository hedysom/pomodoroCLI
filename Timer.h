//
// Created by hedysom on 24/03/25.
//

#ifndef POMODOROCLI_TIMER_H
#define POMODOROCLI_TIMER_H


#include <atomic>

class Timer {
private:
    std::atomic_bool is_running = false;
    std::atomic_int duration;
    std::atomic_int remaining = 0;
    std::atomic_bool is_paused = false;

public:
    explicit Timer(int duration);

    ~Timer();

    void start();

    void pause();

    void stop();

    int getRemainingTime();

    static void soundAlert();
    static void clearScreen();
};

#endif //POMODOROCLI_TIMER_H
