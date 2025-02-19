#include <Arduino.h>

const int ledMerah = 8;
const int ledKuning = 9;
const int ledHijau = 10;

void setup() {
  // Mengatur pin-pin yang dihubungkan ke LED sebagai output.
  // Hal ini berarti pin-pin tersebut dapat digunakan untuk mengendalikan LED.
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
}

void loop() {
  // LED Merah
  // Menyalakan LED Merah selama 2 detik, kemudian mematikannya.
  digitalWrite(ledMerah, HIGH);
  delay(6000);
  digitalWrite(ledMerah, LOW);

  // LED Kuning
  // Menyalakan LED Kuning selama 2 detik, kemudian mematikannya.
  digitalWrite(ledKuning, HIGH);
  delay(500);
  digitalWrite(ledKuning, LOW);

  // LED Hijau
  // Menyalakan LED Hijau selama 2 detik, kemudian mematikannya.
  digitalWrite(ledHijau, HIGH);
  delay(4000);
  digitalWrite(ledHijau, LOW);

  digitalWrite(ledKuning, HIGH);
  delay(500);
  digitalWrite(ledKuning, LOW);
}