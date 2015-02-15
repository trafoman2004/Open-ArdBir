// sensor and lcd
OneWire ds(8);
LiquidCrystal lcd(A4, A5, 2, 3, 4, 5);

// push buttons
const char Button_up    = A2;
const char Button_dn    = A3;
const char Button_start = A0;
const char Button_enter = A1;

// outputs
const byte Heat = 6;
const byte Pump = 9;
const byte Buzz = 7;

