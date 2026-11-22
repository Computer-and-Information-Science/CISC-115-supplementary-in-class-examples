#pragma once

class Clock {
    private:
        int hours;
        int minutes;
        int seconds;
        int uid;
        static int nextUid;
        int getNextUid();

    public:
        Clock();
        int getUid();
};