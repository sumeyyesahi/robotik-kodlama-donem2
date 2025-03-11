int kirmizi = 3;
  int yesil = 6;
  int mavi = 5;


void setup() {
  
  pinMode(kirmizi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(mavi, OUTPUT);
  randomSeed(analogRead(0)); // Rastgele sayı üreteci için başlangıç
}

void loop() {
  // Rastgele RGB değerleri (0-255 arasında)
  int kirmiziValue = random(0, 256);
  int yesilValue = random(0, 256);
  int maviValue = random(0, 256);

  // LED'e renk değerlerini gönder
  analogWrite(kirmizi, kirmiziValue);
  analogWrite(yesil, yesilValue);
  analogWrite(mavi, maviValue);

  // 500 ms bekle
  delay(500);
}
