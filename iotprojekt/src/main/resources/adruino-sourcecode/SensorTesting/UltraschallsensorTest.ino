#include <NewPing.h>

#define TRIG_PIN 13
#define ECHO_PIN 12
#define MAX_DIST 400

NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DIST);

void setup()
{
  Serial.begin(9600);
}
void loop()
{
 delay(50);
 unsigned int distanceCM = sonar.ping_cm();
 Serial.print(distanceCM);
 Serial.println("cm");
}