//
// Created by hedysom on 24/03/25.
//

#ifndef POMODOROCLI_BREAK_H
#define POMODOROCLI_BREAK_H


class Break {
private:

public:
    static void startShortBreak();
    static void pauseShortBreak();
    static void stopShortBreak();

    static void startLongBreak();
    static void pauseLongBreak();
    static void stopLongBreak();
};


#endif //POMODOROCLI_BREAK_H
