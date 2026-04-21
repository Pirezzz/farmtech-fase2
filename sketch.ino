#include <DHT.h>

#define BOTAO_N 13
#define BOTAO_P 12
#define BOTAO_K 14

#define LDR_PIN 34
#define DHT_PIN 27
#define RELE_PIN 26
#define LED_PIN 25

#define DHTTYPE DHT22

DHT dht(DHT_PIN, DHTTYPE);

float phMin = 5.5;
float phMax = 7.5;
float umidadeLimite = 40.0;

void setup() {
  pinMode(BOTAO_N, INPUT_PULLUP);
  pinMode(BOTAO_P, INPUT_PULLUP);
  pinMode(BOTAO_K, INPUT_PULLUP);

  pinMode(RELE_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(RELE_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  dht.begin();
}

void loop() {
  bool N = digitalRead(BOTAO_N) == LOW;
  bool P = digitalRead(BOTAO_P) == LOW;
  bool K = digitalRead(BOTAO_K) == LOW;

  int nutrientes = 0;
  if (N) nutrientes++;
  if (P) nutrientes++;
  if (K) nutrientes++;

  int ldr = analogRead(LDR_PIN);
  float ph = map(ldr, 0, 4095, 0, 140) / 10.0;

  float umidade = dht.readHumidity();
  if (isnan(umidade)) umidade = 50.0;

  bool phOK = (ph >= phMin && ph <= phMax);
  bool seco = (umidade < umidadeLimite);
  bool nutrientesOK = (nutrientes >= 2);

  bool irrigar = seco && phOK && nutrientesOK;

  digitalWrite(RELE_PIN, irrigar ? HIGH : LOW);
  digitalWrite(LED_PIN, irrigar ? HIGH : LOW);

  delay(500);
}