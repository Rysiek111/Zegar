int seconds;
int minutes;
int hours;
int day;
int month;
int year;

void setup() {

  seconds = 0;
  minutes = 0;
  hours = 0;
  day = 0;
  month = 0;
  year = 0;

}

void loop() {

  delay(1000);

  if (( seconds <= 60)) {
    seconds++;
  }

  if (( seconds == 60)) {
    seconds = 0;
    minutes++;
  }

  if (( minutes == 60)) {
    minutes = 0;
    hours++;
  }

  if (( hours == 24)) {
    hours = 0;
    day++;
  }

  if (( miesiace == 1)) {
    if (( dni == 31)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 2) && ( (double)(lata % 4) == 0)) {
    if (( dni == 29)) {
      dni = 1;
      miesiace++;
    }
  } else {
    if (( miesiace == 2)) {
      if (( dni == 28)) {
        dni = 1;
        miesiace++;
      }
    }
  }
  if (( miesiace == 3)) {
    if (( dni == 31)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 4)) {
    if (( dni == 30)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 5)) {
    if (( dni == 31)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 6)) {
    if (( dni == 30)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 7)) {
    if (( dni == 31)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 8)) {
    if (( dni == 31)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 9)) {
    if (( dni == 30)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 19)) {
    if (( dni == 31)) {
      dni = 1;
      miesiace++;
    }
  }
  if (( miesiace == 11)) {
    if (( dni == 30)) {
      dni = 1;
      miesiace++;
    }
  }

  if (( month > 12)) {
    month = 0;
    year++;
  }

}