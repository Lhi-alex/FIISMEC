\# Sistema Automatizado: Control de LED con Arduino


Este proyecto enciende y apaga un LED cada 1 segundo usando una placa Arduino.



\## Materiales

\- 1 Arduino Uno

\- 1 LED

\- 1 resistencia de 220 ohmios

\- Cables jumper

\- Protoboard



\## Conexión

\- Conecta el ánodo del LED al pin 13.

\- Conecta el cátodo a GND usando la resistencia.



\## Archivos del proyecto

\- `MiProyecto.ino`

\- `README.md`



\## Cómo usarlo

1\. Abre el archivo `.ino` en Arduino IDE.

2\. Conecta tu placa Arduino al computador.

3\. Sube el código a la placa.

4\. Observa cómo el LED parpadea.



\## Código

`// C++ code

//

void setup()

{

&#x20; pinMode(13, OUTPUT);

}



void loop()

{

&#x20; digitalWrite(13, HIGH);

&#x20; delay(1000); // Wait for 1000 millisecond(s)

&#x20; digitalWrite(13, LOW);

&#x20; delay(1000); // Wait for 1000 millisecond(s)

}

.ino`.
## Cambio  localmente -features/pushbutton branch

