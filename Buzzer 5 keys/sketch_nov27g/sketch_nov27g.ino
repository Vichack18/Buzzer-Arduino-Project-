
int nota1=200; 
int nota2=470;
int nota3=600;
int nota4=880;
int nota5=1020;
int buzzer=8;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

}

void loop() {
  int tecla=analogRead(A0);
  Serial.println(tecla);
    if ( tecla==1023){
      tone (buzzer,nota1); // no se pone duracion ya que solo se va a activar cuando oprimamos el boton y se desactivara
      // cuando dejemos de oprimirlo //
    }
    else if(tecla<=1010 && tecla>=999){  // los valores incluyen margenes de errores //
        tone (buzzer,nota2);
    }
    else if(tecla<=998 && tecla>=990){  // los valores incluyen margenes de errores //
        tone (buzzer,nota3);
    }
    else if(tecla<=940 && tecla>=925){  // los valores incluyen margenes de errores //
        tone (buzzer,nota4);
    }
    else if(tecla<=540  && tecla>=500){  // los valores incluyen margenes de errores //
        tone (buzzer,nota25);
    }
  else {
    noTone(8); // noTone hace que, mientras que ninguna tecla se este presionando el buzzer dejara de sonar //
  }
}