#define relay 2    //attaches the relay to pin 2

int state=0;

void setup() {


// put your setup code here, to run once:
// initialize serial communication at 9600 bits per second:

      
    pinMode(relay, OUTPUT);    //sets the relay as an output
    Serial.begin(9600);
    //Wait for initialization!
    while(!Serial);
}

void loop() {
  

    if(Serial.available())
    {     
      state = Serial.read();
    }
    
    delay(100);
    
    if(state == '1'){
      digitalWrite(relay, HIGH);    //relay open
 
    }
    else if(state == '2'){
      digitalWrite(relay, LOW);
    }
    
    
}

