# define GREEN 2
  # define ORANGE 3
  # define RED 4
  # define Buzzer 5
  # define Sensor A0
    
  void setup() {
    for (int i = 2; i < 6; i++)
      pinMode(i, OUTPUT);
  
    Serial.begin(9600);
  }
  
  void loop() {
    
    for (int i = 2; i < 6; i++)
      digitalWrite(i, LOW);
  
    status_Indicator();
  
  }
  
  void status_Indicator()
  {
    int sensor_In = analogRead(A0);
    Serial.println(sensor_In);
    
    if ( sensor_In >=40  )
    {
      digitalWrite(RED, HIGH);
      digitalWrite(Buzzer,HIGH);
    }
    else if (sensor_In >=25 )
    {
      digitalWrite(ORANGE, HIGH);
    } else
    {
      digitalWrite(GREEN, HIGH);
    }
    delay(10);
  }
 
