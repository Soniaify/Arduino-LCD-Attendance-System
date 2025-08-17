# Arduino LCD Attendance System

An **RFID-based Attendance System** built with Arduino that displays student attendance on a **20x4 LCD display**.  
This project helps automate classroom or office attendance tracking.

---

## Features
- RFID card scanning for attendance
- LCD screen to display UID and messages
- Simple and easy to use
- Can be extended to connect with backend (ESP8266, Flask, Database)

---

## Components Used
- Arduino Nano (or Uno)
- ESP8266 (optional, for Wi-Fi backend integration)
- RFID Reader (RC522 or similar)
- RFID Tags/Cards
- 20x4 LCD Display + 74HC595 Shift Register
- Potentiometer (10k)
- Jumper Wires & Resistor

---

## Project Structure
arduino_lcd_attendance.ino

---

## How to Run
1. Connect the components as per the wiring diagram.
2. Open `arduino_lcd_attendance.ino` in Arduino IDE.
3. Select the correct **board** and **port**.
4. Upload the code to your Arduino.
5. Scan an RFID card → UID will display on the LCD.

---

## Future Improvements
- Add **Flask backend** for saving attendance.
- Use **ESP8266** to send UID directly to a server.
- Add **admin panel** for managing students.
- Store data in a database for long-term tracking.

---

## Author
- Sonia
