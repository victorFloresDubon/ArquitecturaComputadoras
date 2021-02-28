// Estados
int apagar = LOW;
int encender = HIGH;
// Puertos de cada color
int VERDE = 13;
int AMARILLO = 12;
int ROJO = 11;

void setup() {
  // Configuramos los puertos como OUTPUT
  pinMode(VERDE, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(ROJO, OUTPUT);
}

void loop() {
  semaforo();
}

void semaforo(){
  // Enciende el color verde 
  digitalWrite(VERDE, encender);
  // Retardo de 5 segundos
  delay(5000);
  cambio(VERDE);
  // Enciende el amarillo
  digitalWrite(AMARILLO, encender);
  delay(2000);
  digitalWrite(AMARILLO, apagar);
  // Enciende el rojo
  digitalWrite(ROJO, encender);
  delay(5000);
  cambio(ROJO);
}

// Causa intermitencia para el cambio de nuevo color
void cambio(int color){
  for(int i = 0; i < 3; i++){
    digitalWrite(color, apagar);
    delay(500);
    digitalWrite(color, encender);
  }
  digitalWrite(color, apagar);
}
