int seconds = 0;
int minutes = 0;
int hours = 0;
int day = 1;
int month = 1;
int year = 2024; // Możesz ustawić dowolny rok początkowy

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
      day++;
    }

    // Liczba dni w miesiącu
    int daysInMonth;
    if (month == 2) {
      // Sprawdzanie lat przestępnych dla lutego
      daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else {
      // Miesiące 30- lub 31-dniowe
      daysInMonth = (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
    }

    if (day > daysInMonth) {
      day = 1;
      month++;
    }

    if (month > 12) {
      month = 1;
      year++;
    }

    // Program działa, ale nie wyświetla wyniku
  }
}
