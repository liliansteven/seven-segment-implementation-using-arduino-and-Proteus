# 7-Segment Display Implementation using Arduino and Proteus
## Overview
This repository demonstrates a simple implementation of a 7-segment display using Arduino and Proteus. The code provided sequentially displays numbers `0 to 9 on the 7-segment display`.


## Implementation Details
### 1. Arduino Code
- Uses an array to represent 7-segment display configurations for numbers 0 to 9.
-  Pins are set up as outputs and initialized to HIGH.
- Loops through numbers 0 to 9, displaying them sequentially.
- Activates/deactivates segments based on predefined states for each number.
- Includes a delay for better visual presentation.

### 2. Proteus Simulation
- The pins of the Arduino board are connected to the corresponding pins of the 7-segment display in the Proteus schematic to visualize the output.
- Includes the Proteus simulation setup for testing the Arduino code virtually.
- Enables users to observe the behavior of the `7-segment display` in a simulated environment.


## Repository Structure
- **`seven_segment.ino`**: Arduino code for 7-segment display implementation.
- **`seven_segment.pdsprj`**: Proteus simulation file for visualizing the implementation.
- **`seven_segment_code.ino.with_bootloader.hex`**: The hex file from the arduino compile.

## Usage
1. Open the Arduino IDE and copy the provided code into a new sketch.
2. Connect your Arduino board to your computer and upload the sketch to the board.
3. Open the Proteus simulation file and ensure that the Arduino board is correctly connected to the 7-segment display.
4. Run the simulation to observe the sequential display of numbers 0 to 9 on the 7-segment display.

## Acknowledgments
This implementation is a basic example for educational purposes and can be extended for more complex applications or integrated into larger projects involving numerical displays. Feel free to modify and adapt the code as needed.