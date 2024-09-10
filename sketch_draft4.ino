int pin4 = 4;
int pin7 = 7;

void setup() {
  pinMode(pin4, OUTPUT);
  pinMode(pin7, OUTPUT);
}

// The turnOn function will turn on the spray for 4.5 seconds 
// if you would like the spray to be longer or shorter adjust 
// the delays with in the turnOn() and turnOff() function. 

void turnOn(int pin) {
  delay(1500UL);
  digitalWrite(pin, HIGH);
  delay(1500UL);
  digitalWrite(pin, LOW);
  delay(1500UL);
}

void turnOff(int pin) {
  delay(1500UL);
  digitalWrite(pin, HIGH);
  delay(1500UL);
  digitalWrite(pin, LOW);
  delay(1500UL);
}

void loop() {

  //Adjust this as much as you would like
  // 0 sec 
  delay(57000UL);
 

  //DONT put delay between tunOn() & turnOff() OK
  //Spary at 57 sec
  turnOn(4);
  turnOff(4);

  //Adjust this as much as you would like 
  // 66 sec
  delay(30000UL);

  //DONT put delay between tunOn() & turnOff()
  //Spary at 96 sec
  turnOn(4);
  turnOff(4);

  //Adjust this as much as you would like 
  //105 sec
  delay(30000UL);

  //DONT put delay between tunOn() & turnOff()
  //Spary at 135 sec
  turnOn(4);
  turnOff(4);

  //Adjust this as much as you would like 
  //144 sec
  delay(60000UL);

  //DONT put delay between tunOn() & turnOff()
  //Spary at 204 sec
  turnOn(4);
  turnOff(4);

  //Adjust this as much as you would like 
  // 213 sec
  delay(83000UL);

  //DONT put delay between tunOn() & turnOff()
  //Spary at 299 sec | 5min 8 sec
  turnOn(7);
  turnOff(7);

  //Adjust this as much as you would like 
 // 308 sec
  delay(18000UL);

  //DONT put delay between tunOn() & turnOff()
  //Spary at 323 sec | 
  turnOn(7);
  turnOff(7);

//Adjust this as much as you would like 
//332 sec
  delay(15000UL);

//DONT put delay between tunOn() & turnOff()
//Spary at 347 sec | 
  turnOn(7);
  turnOff(7);

//356 sec
  delay(15000UL);

  //DONT put delay between tunOn() & turnOff()
  //371 sec 
  turnOn(7);
  turnOff(7);

  //Adjust this as much as you would like 
  //380 sec | 
  delay(15000UL);

  //DONT put delay between tunOn() & turnOff()
  //395 sec | 6min 34 sec
  turnOn(7);
  turnOff(7);

//404
  // This while loop stops the code from looping 
  while (true) {
  }
}
