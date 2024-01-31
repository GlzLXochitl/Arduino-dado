// C++ code
//

int numero;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  
}

void loop()
{
   if(digitalRead(8)==HIGH){
    numero = random(1,6);
    
    
    switch(numero){
  
    case 1:
      digitalWrite(2,LOW);
  	  digitalWrite(3,LOW);
  	  digitalWrite(4,LOW);
  	  digitalWrite(5,LOW);
  	  digitalWrite(6,HIGH);
  	  digitalWrite(7,LOW);
      delay(2000);
      
      numero = 0;
      break;
      
    case 2:
      digitalWrite(2,LOW);
  	  digitalWrite(3,LOW);
  	  digitalWrite(4,LOW);
  	  digitalWrite(5,HIGH);
  	  digitalWrite(6,LOW);
  	  digitalWrite(7,HIGH);
      delay(2000);
      
      numero = 0;
      break;
      
    case 3:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      delay(2000);
      
      numero = 0;
      break;
      
    case 4:
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      delay(2000);
      
      numero = 0;
      break;
      
    case 5:
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      delay(2000);
      
      numero = 0;
      break;
      
    default:
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      delay(2000);
      
      numero = 0;
      break;
  }
  }else{
    digitalWrite(2,LOW);
  	digitalWrite(3,LOW);
  	digitalWrite(4,LOW);
  	digitalWrite(5,LOW);
  	digitalWrite(6,LOW);
  	digitalWrite(7,LOW);
  }
  
}




/*void setup()
{
  pinMode(2,OUTPUT);
  
}

void loop()
{
  if(digitalRead(8)==HIGH)
  {
    digitalWrite(2,HIGH);
  }else{
    digitalWrite(2,LOW);
  }
  
}*/





























