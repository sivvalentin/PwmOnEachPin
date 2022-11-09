#include <TimersClk.h>
#include <PwmOnEachPin.h>
int i = 0;
int count = mstime;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  startTimers();
  if(mstime - count > 150){
    i >= 63 ? i = 0 : i += 1;
    count = mstime;
  }
  pwm(13, i, 200000);
}
