int led1 = D6;
int sensor_light = A1;


void setup() {
    pinMode(led1,OUTPUT);
}

void loop() {
    digitalWrite(led1,HIGH);
    String Data_Light = String(analgRead(sensor_light));//set up and gather the sensor data and transmit to string
    Particle.publish("Light_Data",Data_Light,PRIVATE); //publish to webhook
    delay(30000); //Wait for 30 seconds as required
    
    digitalWrite(led1,LOW);
    delay(30000);
}