/* finger_drum_01
   This program is for reading input from two FSRs: one attached to the finger of a glove and
   the other as a stand-alone pad. It will send both sets of data to the serial port for decoding in Max.
*/

// Constants
#define fsr_glove_pin A0
#define fsr_pad_pin A1

// Variables
int fsr_glove_value = 0;
int fsr_pad_value = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the raw input values
  fsr_glove_value = analogRead(fsr_glove_pin);
  fsr_pad_value = analogRead(fsr_pad_pin);

  // Transmit the raw data to serial port
  //Serial.print("glove: ");
  Serial.print(fsr_glove_value);
  Serial.print(" ");
  //Serial.print(" pad: ");
  Serial.println(fsr_pad_value);

  delayMicroseconds(10);
  //delay(100);

}
