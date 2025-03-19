Anfang
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(900);
  digitalWrite(13,LOW);
  delay(900);
  
}


											DISPLAY BEBIK<3

   #include <Wire.h>
   #include <Adafruit_SSD1306.h>  
   #define SCREEN_WIDTH 128   // pixelbreite
   #define SCREEN_HEIGHT 64   // pixelhöhe

   #define OLED_RESET   5
   Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

   void setup()
   {
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}
  void loop(void)
{
   display.clearDisplay();
   display.setTextSize(1); 
   display.setTextColor(SSD1306_WHITE);
   display.setCursor(10, 10);
   display.println("MeinBebik<3");
   display.display();
   delay(800);
   display.setTextColor(SSD1306_BLACK);
   display.println("variable");
   display.display();
   delay(800);
   display.invertDisplay(true);
   delay(400);
   display.invertDisplay(false); 
   display.clearDisplay();
   display.setTextSize(1); 
   display.setTextColor(SSD1306_WHITE);
   display.setCursor(10, 20);
   display.println("MeinBebik<3");
   display.display();
   delay(800);
   display.setTextColor(SSD1306_BLACK);
   display.println("variable");
   display.display(); 
   delay(800);
   display.clearDisplay();
   display.setTextSize(2); 
   display.setTextColor(SSD1306_WHITE);
   display.setCursor(10, 20);
   display.println("MeinBebik<3<3");
   display.display();
   delay(800);
   display.setTextColor(SSD1306_BLACK);
   display.println("variable");
   display.display();
   delay(1000);
   display.invertDisplay(true);
   delay(400);
   display.invertDisplay(false); 
   display.clearDisplay();
   display.setTextSize(2); 
   display.setTextColor(SSD1306_WHITE);
   display.setCursor(10, 30);
   display.println("MeinBebik<3<3");
   display.display();
   delay(800);
   display.setTextColor(SSD1306_BLACK);
   display.println("variable");
   display.display();
   delay(1000);
   display.clearDisplay();
   display.setTextSize(2); 
   display.setTextColor(SSD1306_WHITE);
   display.setCursor(10, 30);
   display.println("MeinBebik<3<3<3");
   display.display();
   delay(800);
   display.setTextColor(SSD1306_BLACK);
   display.println("variable");
   display.display();
   delay(2000);
   display.invertDisplay(true);
   delay(500);
   display.invertDisplay(false); 
   display.clearDisplay();
   display.setTextSize(2); 
   display.setTextColor(SSD1306_WHITE);
   display.setCursor(10, 10);
   display.println("MeinBebik<3<3<3<3<3");
   display.display();
   display.setTextColor(SSD1306_BLACK);
   display.println("variable");
   display.display();
   delay(3777); 

						Taster Einstieg

void setup() {
  DDRD = 0b11111111;

}

void loop() {
  int TasterS0 = 13;
  int TasterS3 = 17;

  int leds[7] = {3, 6, 5, 7, 4, 2, 196};

  while (1)
  {
    TasterS0 = digitalRead(14);
    TasterS3 = digitalRead(17);

    if (TasterS0 == 1)PORTD = leds[4];
    if (TasterS0 == 0)PORTD = 128;
    if (TasterS3 == 1)
    {
      for (int z = 0; z < 7; z++)
      {
        PORTD = leds[z];
        delay(250);
        if (digitalRead(16) == 1) z = 8;
      }
    }
    if (digitalRead(15) == 1);
    {
      PORTD = 32;
      delay(1000);
      PORTD = 8;

    }
  }
}
 
 