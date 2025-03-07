int seconds = 0;
int minutes = 0;
int hours = 0;
unsigned long previousMillis = 0;
const long interval = 1000; // 1 sekunda

void setup() {
  // Inicjalizacja, jeżeli potrzeba jakiejkolwiek konfiguracji
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    seconds++;

    if (seconds == 60) {
      seconds = 0;
      minutes++;
    }

    if (minutes == 60) {
      minutes = 0;
      hours++;
    }

    if (hours == 24) {
      hours = 0;
    }

    // Program działa, ale nie wyświetla wyniku
  }
}
