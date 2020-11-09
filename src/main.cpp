#include <M5Stack.h>
#include "RoverC.h"

// the setup routine runs once when M5StickC starts up
void setup()
{
  // Initialize the M5StickC object
  M5.begin();
  M5.Power.begin();

  M5.Lcd.clearDisplay();
  M5.Lcd.drawJpgFile(SD, "/neco.jpg");

  RoverC_Init();
}

// the loop routine runs over and over again forever
void loop()
{
  for (int i = 0; i < 5; i++)
  {
    Move_forward(75);
    delay(200);
    Move_back(75);
    delay(200);
  }
  Move_turnleft(50);
  delay(2000);
  Move_turnright(50);
  delay(2000);
}
