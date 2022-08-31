//------------------------------------------------
// Program From : www.warriornux.com
//------------------------------------------------
 
#include "dht.h"
#define sensor 14 
dht DHT;
 
void setup() {
  Serial.begin(115200);
  delay(500);
  
  Serial.println("Sensor Suhu dan Kelembaban Udara DHT11 Warriornux");
  delay(1000);
 
}
 
void loop() {
  DHT.read11(sensor);
  Serial.print("Kelembaban udara = ");
  Serial.print(DHT.humidity);
  Serial.print("% ");
  Serial.print("Suhu = ");
  Serial.print(DHT.temperature); 
  Serial.println(" C ");
  delay(5000);
 
}
