#include <dht.h>
dht DHT; 
#define DHT11_PIN 7 


void setup(){
  Serial.begin(9600);
}

void loop(){
  int okunanDeger=DHT.read11(DHT11_PIN);
  Serial.print("SICAKLIK (Celcius) : ")
  Serial.println(DHT.temperature);

  Serial.print("SICAKLIK (Fahrenheit) : ")
  Serial.println(DHT.fahrenheit(),DHT11_PIN);

  Serial.print("SICAKLIK (Kelvin) : ")
  Serial.println(DHT.kelvin(),DHT11_PIN);
  
  Serial.print("NEM: ");
  Serial.println(DHT.humidity);
  delay(2000);
}
