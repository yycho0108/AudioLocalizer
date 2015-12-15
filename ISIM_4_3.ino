#define NUMSENSOR 4
#define THRESHOLD 0.4

class sensor{
public:
  double val;
  int pin;
  long time;
  bool read(long t){
    val = analogRead(pin)/1024.0;
    if(time == 0 && abs(val - 0.50) > THRESHOLD)
      time = micros();
    if(t - time > 1000000)
      time = 0;
    return (time != 0);
  }
};

sensor s[NUMSENSOR];

double sensors[NUMSENSOR];
int sensorPins[NUMSENSOR];
long times[NUMSENSOR];
long lastActivated;

void setup(){
  Serial.begin(9600);
  for(int i=0;i<NUMSENSOR;++i){
    s[i].pin = A0 + i;
    s[i].time = 0;
  }
}

void loop(){
  long t = micros();
  int sensorActive = 0;

  if(t - lastActivated > 1000000){
    for(int i=0;i<NUMSENSOR;++i){
      if (s[i].read(t))
        ++sensorActive; 
    }
  }

  if(sensorActive == NUMSENSOR){ //all sensors are active
    lastActivated = t;
    for(int i=0;i<NUMSENSOR;++i){
      Serial.print(times[i]); //just report the times. PC for computation
      Serial.print(' ');
    }
    Serial.print('\n');
  }  
}



