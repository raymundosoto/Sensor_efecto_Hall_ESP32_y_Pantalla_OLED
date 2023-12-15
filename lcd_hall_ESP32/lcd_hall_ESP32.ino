#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("No se ha encontrado el display OLED"));
    while (true);
  }

  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {
  int hallValue = hallRead(); // Lee el valor del sensor de efecto Hall

  // Realiza la conversión a unidades de campo magnético
  // Ajusta esto según las especificaciones de tu sensor de efecto Hall
  float campoMagnetico = map(hallValue, 0, 4095, -1500, 1500); // Rango de -1500 a 1500 Gauss

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Sensor de Efecto Hall");
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 20);
  display.print("Campo Mag.: ");
  display.println(campoMagnetico, 2); // Mostrar el valor del campo magnético con 2 decimales
  display.display();

  delay(1000); // Espera un segundo antes de la próxima lectura
}
