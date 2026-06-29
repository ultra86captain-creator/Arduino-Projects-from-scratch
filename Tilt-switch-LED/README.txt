Tilt Switch LED
----------------------------------------
Description:
    Using Arduino UNO to connect a tilt switch and a LED such that the LED switches on when the Tilt Switch is tilted.
    Only Green bulb will light up as this code is to test the usage of the Tilt Switch, not the LED.
    We use digitalRead and INPUT_PULLUP, due to which the Signal Pin for Tilt switch shows LOW when the Tilt switch is tilted.
----------------------------------------
Components
    ->Arduino UNO board (microcontroller)
    ->Arduino IDE (program)
    ->M wires, F wires
    ->RGB LED Module (Robocraze 37 in 1 sensor kits)
    ->Tilt Switch Module (Robocraze 37 in 1 sensor kits)
-----------------------------------------
Logic:
    View Logic.pdf
-----------------------------------------
Steps:
    1. Connect Arduino uno to computer.
    2. Connect IDE to board.
    3. Enter Code into IDE.
    4. For switch, connect S pin to slot 2 in Arduino, the '-' pin into GND, and the third pin into 5V slot in Arduino.
    5. For LED connect green light pin to slot 8 in Arduino, and connect the '-' pin into GND.
    6. Upload the code.