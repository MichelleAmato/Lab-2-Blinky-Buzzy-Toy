// program to make red led blink continuously 
#include <msp430.h> // compiler imports msp430 file which contains definitions needed to control msp430

int main(void) { // creates main class, has no args 
    WDTCTL = WDTPW | WDTHOLD; // disables watchdog timer
    // watchdog timer register = password required or stop watchdog )

    P1DIR |= BIT0; // pin P1.0 is the output (Port 1 register, Bit 0 (0000 0001)) and stores result

    while (1) { // repeats forever since 1 always means true, unless shut off, reset, etc.
        P1OUT ^= BIT0; // toggles led state between on and off
        // P1OUT holds value for Port 1, perform XOR to flip bit and saves the result) (0 = 0ff, 1 = on)
        // basically, takes the state of P1.0 and flips the state. If on, turns off, vice versa)

        volatile unsigned int i; // reads/writes positive only int i inside memory, unoptomized
        // needs to be volatile since an optimized compiler might remove this if the result isn't observed
        for (i = 0; i < 50000; i++) { // creates a timer delay (0.5 seconds) then goes back to while loop
        }
    }
}
