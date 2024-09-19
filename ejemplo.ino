// Definir los pines de entrada
const int pinA = 2; // Entrada A
const int pinB = 3; // Entrada B
const int pinC = 4; // Entrada C
const int pinD = 5; // Entrada D

// Definir los pines de salida
const int andOutputPin = 6; // Salida AND
const int orOutputPin = 7;  // Salida OR

void setup() {
  // Configurar los pines de entrada
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  pinMode(pinC, INPUT);
  pinMode(pinD, INPUT);
  
  // Configurar los pines de salida
  pinMode(andOutputPin, OUTPUT);
  pinMode(orOutputPin, OUTPUT);
}

void loop() {
  // Leer las entradas
  int A = digitalRead(pinA);
  int B = digitalRead(pinB);
  int C = digitalRead(pinC);
  int D = digitalRead(pinD);
  
  // Realizar la operación AND entre A y B
  int andResult = A && B;
  
  // Realizar la operación OR entre C y D
  int orResult = C || D;
  
  // Establecer los resultados en las salidas
  digitalWrite(andOutputPin, andResult); // Salida AND
  digitalWrite(orOutputPin, orResult);   // Salida OR
  
  // Esperar un pequeño tiempo antes de repetir el bucle
  delay(100);
}
