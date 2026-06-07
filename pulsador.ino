int buttonState = 0;// se crea la variable buttonState 

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // leer el estado de la variable 
  buttonState = digitalRead(2);
  // chequear si está presionado
  if (buttonState == HIGH) {
    // encender el LED
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    // apagar el LED
    digitalWrite(LED_BUILTIN, LOW);
  } 
}
