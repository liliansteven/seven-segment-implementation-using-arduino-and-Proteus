// Define an array representing the segments of a 7-segment display for numbers 0 to 9
uint8_t states[10][7] = {
  {HIGH , LOW, LOW, LOW, LOW, LOW, LOW },   // 0
  {HIGH , HIGH , HIGH , HIGH , LOW , LOW , HIGH },   // 1
  {LOW , HIGH , LOW , LOW , HIGH , LOW , LOW },   // 2
  {LOW , HIGH , HIGH , LOW , LOW , LOW , LOW },   // 3
  {LOW , LOW , HIGH , HIGH , LOW , LOW , HIGH },   // 4
  {LOW , LOW , HIGH , LOW , LOW , HIGH , LOW },   // 5
  {LOW , LOW , LOW , LOW ,  LOW , HIGH , LOW },   // 6
  {HIGH, HIGH, HIGH, HIGH , LOW, LOW, LOW },   // 7
  {LOW, LOW, LOW, LOW, LOW, LOW, LOW},   // 8
  {LOW, LOW, HIGH, LOW, LOW, LOW, LOW}   // 9
};

void setup() {
  // Setup pins for output and set them to HIGH
  for(int i = 0; i < 8; ++i) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  // Displaying numbers 0 to 9 on the 7-segment display sequentially

  for(int j = 0; j < 10; j++) {
    // I Iterates through each segment of the display
    for(int i = 0; i < 7; i++) {
      // Turn on/off segments based on the defined state/number for the current number
      digitalWrite(i, states[j][i]);
    }
    // Delay to show each number for a short period
    delay(100);
  }
}