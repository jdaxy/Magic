#pragma once

enum motor_e {
    M_Z,
    M_Y,
    M_X,
    M_E1,
    M_GUARD
};

enum {
    U_STEPS_256,
    U_STEPS_128,
    U_STEPS_64,
    U_STEPS_32,
    U_STEPS_16,
    U_STEPS_8,
    U_STEPS_4,
    U_STEPS_3,
    U_STEPS_2,
    U_STEPS_1,
    U_STEPS_GUARD
};


/* Holding currents */
#define MOTOR_CURRENT_HOLD      31
#define MOTOR_CURRENT_STBY      0
/* 31 is max current - heatsink could be useful */
#define MOTOR_CURRENT_PROBE     9
#define MOTOR_CURRENT_NORMAL    31
/* When starting a move ignore this many ms */
#define MOTOR_STALL_DELAY       80

void motorInit(void);
void tmcSetCurrent(uint8_t mot, uint8_t run, uint8_t hold, uint8_t holdDly);
void startProbeing(void);
void clearProbeing(void);
bool checkProbeing(void);
