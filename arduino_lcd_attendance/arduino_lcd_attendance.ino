#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

// LCD pin configuration
const int rs = 11, en = 12, d4 = 10, d5 = 9, d6 = 8, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {
  Serial.begin(115200);
  mySerial.begin(9600);
  
  // Initialize LCD
  lcd.begin(20, 4);  // Change to lcd.begin(20,4) if using a 20x4 LCD
  lcd.setCursor(0, 0);
  lcd.print("Waiting for UID...");
}

void loop() {
  if (mySerial.available()) {
    String cardUID = mySerial.readStringUntil('\n');
    
    // Print to Serial Monitor
    Serial.print("Received UID: ");
    Serial.println(cardUID);
    
    // Display on LCD
    lcd.clear();  // Clear screen before updating
    lcd.setCursor(0, 0);
    lcd.print("RFID UID:");
    lcd.setCursor(0, 1); 
    lcd.print(cardUID);
    
    delay(2000); // Wait for 2 seconds to allow viewing before clearing again
  }
}
