Practica 2, Fisica I #include <LiquidCrystal.h>

int rs = 12; int e = 11; int d4 = 5; int d5 = 4; int d6 = 3; int d7 = 2;

LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void setup() { lcd.begin(16, 2); }

void loop() { long matriculas[] = {2022, 202222118, 202232545, 202249292, 2022, 202279506};

for (int i = 0; i < 6; i++) { lcd.clear(); lcd.setCursor(0, 0); lcd.print("Matricula " + String(i + 1) + ":");

lcd.setCursor(0, 1);
lcd.print(matriculas[i]);

delay(2000);
}

lcd.clear(); delay(2000); }
