Button LED
----------------------------------------
Description:
    Using Arduino UNO to connect a button and a LED such that the LED switches on when the button is pressed.
    Only Green bulb will light up as this code is to test the usage of the button, not the LED.z
    We use digitalRead and INPUT_PULLUP, due to which the Signal Pin for button shows LOW when the button is pressed
----------------------------------------
Components
    ->Arduino UNO board (microcontroller)
    ->Arduino IDE (program)
    ->M wires, F wires
    ->RGB LED Module (Robocraze 37 in 1 sensor kits)
    ->Button Module (Robocraze 37 in 1 sensor kits)
-----------------------------------------
Logic:
    View Logic.pdf
-----------------------------------------
Steps:
    1. Connect Arduino uno to computer.
    2. Connect IDE to board.
    3. Enter Code into IDE.
    4. For button, connect S pin to slot 2 in arduino, the '-' pin into GND, and the third pin into 5V slot in arduino.
    5. For LED connect green light pin to slot 8 in Arduino, and connect the '-' pin into GND.
    6. Upload the code.
