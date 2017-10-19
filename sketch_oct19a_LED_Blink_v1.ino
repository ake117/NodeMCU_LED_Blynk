/*************************************************************
Let’s turn ON your LED with Blynk!
  You’ll need:
   - Blynk App (download from AppStore or Google Play)
   - NodeMCU v2
   - Decide how to connect to Blynk

 5 Steps guide:

  1. Connect LED to Pin D8 (GPIO15)

 In the Blynk App:
  2. Create New Project
  3. Email yourself Auth Token. You can do it later at any time
  4. Add a Button Widget. Select Pin D9 in Widget's Settings
  5. Press Play icon. Enjoy Blynking!

  You can find a QR code for easy setup of this project here:
  https://github.com/blynkkk/blynk-library/tree/master/examples/GettingStarted/BlynkBlink
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial // Enables Serial Monitor

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "***";
const char ssid[] = "***";
const char pass[] = "***";

void setup()
{
  // See the connection status in Serial Monitor
  Serial.begin(115200);

  // Here your Arduino connects to the Blynk Cloud.
  Blynk.begin(auth,ssid,pass);
}

void loop()
{
  // All the Blynk Magic happens here...
  Blynk.run();

  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}

