
//Programa: Sensor de Luminosidade
//Autor: GuiaRobotica

const int LDR = A0;             // Pino analógico que o sensor está conectado
const int luz = 13;             // Pino Referente ao led ou rele
const int movimento = 8;
int valorsensor ;               // valor que sera armazenado o valor do LDR
void setup() {
  pinMode(luz, OUTPUT);         // Coloca variavel luz é um sinal de saidad
  pinMode(movimento, OUTPUT);         // Coloca variavel luz é um sinal de saida
  pinMode(LDR, INPUT);          // Coloca a variavel LDR como entrada
  Serial.begin(9600);           // inicializa a comunicação serial com a taxa de 9600 bps
}

void loop() {
  valorsensor = analogRead(LDR); // Faz a leitura do pino analógico LDR e armazena o valor na variavel valorsensor
  Serial.print("LDR : " );      // Mostra o valor no monitor serial
  Serial.println(valorsensor);
  digitalWrite(luz, HIGH);

  if (valorsensor < 300) {      // Se o valor de VALORSENSOR for menos que 500
    Serial.println("Movimento");
    digitalWrite(movimento, HIGH);
  } else {                    // Se não
    Serial.println("Sem Movimento");
    digitalWrite(movimento, LOW);
  }
  delay(100);                 // Aguarda 100 milisegundos
}
