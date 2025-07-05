# Arduino-
This Arduino project allows you to control three LEDs using three push buttons. Each button toggles its corresponding LED on or off with every press.



How It Works:

Each button is connected to a digital pin with `INPUT_PULLUP` enabled.
When a button is pressed (logic goes from HIGH to LOW), its LED toggles state.
A small `delay(20)` is added for basic debounce.

  Features:

Simple and efficient button state change detection.
Uses arrays to manage multiple buttons and LEDs easily.
Great for beginners learning digital I/O and button handling.
Getting Started

1. Connect the components as per the pin configuration.
2. Upload the code to your Arduino board.
3. Press the buttons to toggle the LEDs.

4. License

This project is open-source and free to use for educational purposes.
