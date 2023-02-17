int seconds;
int minutes;
int hours;

void setup() {

  seconds = 0;
  minutes = 0;
  hours = 0;

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
  }

}