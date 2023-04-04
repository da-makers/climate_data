#include <DHT.h>

#include "LiquidCrystal.h"
#include "DHT.h"

#define DHTPIN 12
// 8 è il pin di Arduino a cui collego il sensore di temperatura
#define DHTTYPE DHT11
// dht11 è il tipo di sensore che uso
DHT dht(DHTPIN, DHTTYPE);
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// connessione display (pin)
 
void setup() {
lcd.begin(16, 2);
// imposto il tipo di display (colonne, righe)
lcd.print("Temperatura");
lcd.setCursor(0,1);
lcd.print("Umidita'");
}
void loop() {
int t = dht.readTemperature();
int h = dht.readHumidity();
// posiziono il cursore alla colonna 12 e riga 0
lcd.setCursor(12, 0);
lcd.print(t);
lcd.setCursor(12, 1);
lcd.print(h);
}