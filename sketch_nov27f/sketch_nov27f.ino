
int nota1=200; // 200, 400 y 600 van a ser las frecuencias que les vamos a pasar al buzzer para que se active //
// entre mas chica la frecuencia mas grave sonara el buzzer //
int nota2=400;
int nota3=600;

// el valor min es 30 y el valor max es de aprox 600 ( relativo ) del buzzer //

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 tone (buzzer , nota1, 200); // nueva funcion llamada tone, se forma con 3 parametros:
 // el primero es en donde va a emitir el sonido, el segundo es la frecuencia y el ultimo parametro
 // es la duracion, luego se agrega un delay para separar las notas con un tiempo //
 delay (300);

 tone (buzzer, nota2, 200);
 delay (300);

 tone (buzzer, nota3, 200);
 delay (300);

}
