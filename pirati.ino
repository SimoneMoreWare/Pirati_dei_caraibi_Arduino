const int buzzer = 8; 
//in tale stringa vi è selozionato il pin 
// per cui il cicalino è collegato dal filo rosso
const int velocitasuono = 1.5; 

#define NOTE_DO4  262   
#define NOTE_RE4  294
#define NOTE_MI4  330
#define NOTE_FA4  349
#define NOTE_SOL4  392
#define NOTE_LA4  440
#define NOTE_SI4  494
#define NOTE_DO5  523
#define NOTE_RE5  587
#define NOTE_MI5  659
#define NOTE_FA5  698
#define NOTE_SOL5  784
#define NOTE_LA5  880
#define NOTE_SI5  988

// sono state definite le varia note, il valore 
//posto è la frequenza per cui si ottengono tali note.
int note[] = {       
   NOTE_MI4, NOTE_SOL4, NOTE_LA4, NOTE_LA4, 0, 
   NOTE_LA4, NOTE_SI4, NOTE_DO5, NOTE_DO5, 0, 
   NOTE_DO5, NOTE_RE5, NOTE_SI4, NOTE_SI4, 0,
   NOTE_LA4, NOTE_SOL4, NOTE_LA4, 0,
   
   NOTE_MI4, NOTE_SOL4, NOTE_LA4, NOTE_LA4, 0, 
   NOTE_LA4, NOTE_SI4, NOTE_DO5, NOTE_DO5, 0, 
   NOTE_DO5, NOTE_RE5, NOTE_SI4, NOTE_SI4, 0,
   NOTE_LA4, NOTE_SOL4, NOTE_LA4, 0,
   
   NOTE_MI4, NOTE_SOL4, NOTE_LA4, NOTE_LA4, 0, 
   NOTE_LA4, NOTE_DO5, NOTE_RE5, NOTE_RE5, 0, 
   NOTE_RE5, NOTE_MI5, NOTE_FA5, NOTE_FA5, 0,
   NOTE_MI5, NOTE_RE5, NOTE_MI5, NOTE_LA4, 0,
   
   NOTE_LA4, NOTE_SI4, NOTE_DO5, NOTE_DO5, 0, 
   NOTE_RE5, NOTE_MI5, NOTE_LA4, 0, 
   NOTE_LA4, NOTE_DO5, NOTE_SI4, NOTE_SI4, 0,
   NOTE_DO5, NOTE_LA4, NOTE_SI4, 0,

   NOTE_LA4, NOTE_LA4, 
   NOTE_LA4, NOTE_SI4, NOTE_DO5, NOTE_DO5, 0, 
   NOTE_DO5, NOTE_RE5, NOTE_SI4, NOTE_SI4, 0,
   NOTE_LA4, NOTE_SOL4, NOTE_LA4, 0,

   NOTE_MI4, NOTE_SOL4, NOTE_LA4, NOTE_LA4, 0, 
   NOTE_LA4, NOTE_SI4, NOTE_DO5, NOTE_DO5, 0, 
   NOTE_DO5, NOTE_RE5, NOTE_SI4, NOTE_SI4, 0,
   NOTE_LA4, NOTE_SOL4, NOTE_LA4, 0,
   
   NOTE_MI4, NOTE_SOL4, NOTE_LA4, NOTE_LA4, 0, 
   NOTE_LA4, NOTE_DO5, NOTE_RE5, NOTE_RE5, 0, 
   NOTE_RE5, NOTE_MI5, NOTE_FA5, NOTE_FA5, 0,
   NOTE_MI5, NOTE_RE5, NOTE_MI5, NOTE_LA4, 0,
   
   NOTE_LA4, NOTE_SI4, NOTE_DO5, NOTE_DO5, 0, 
   NOTE_RE5, NOTE_MI5, NOTE_LA4, 0, 
   NOTE_LA4, NOTE_DO5, NOTE_SI4, NOTE_SI4, 0,
   NOTE_DO5, NOTE_LA4, NOTE_SI4, 0,

   NOTE_MI5, 0, 0, NOTE_FA5, 0, 0,
   NOTE_MI5, NOTE_MI5, 0, NOTE_SOL5, 0, NOTE_MI5, NOTE_RE5, 0, 0,
   NOTE_RE5, 0, 0, NOTE_DO5, 0, 0,
   NOTE_SI4, NOTE_DO5, 0, NOTE_SI4, 0, NOTE_LA4,

   NOTE_MI5, 0, 0, NOTE_FA5, 0, 0,
   NOTE_MI5, NOTE_MI5, 0, NOTE_SOL5, 0, NOTE_MI5, NOTE_RE5, 0, 0,
   NOTE_RE5, 0, 0, NOTE_DO5, 0, 0,
   NOTE_SI4, NOTE_DO5, 0, NOTE_SI4, 0, NOTE_LA4
};

//lo spartito della colonna sonora dei pirati dei caraibi, 
//lo 0 (0 Hz) raprresenta che in quel preciso momento non deve essere prodotto nessun suono.

int durata[] = {         
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,

  250, 125,
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,
  
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500,

  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500
};

//in tale vettore vi è l'intervallo di tempo per
//cui ciascuna nota del vettore note[i] sarà prodotta.

void setup() {
                        
  
}

//tone è la funzione che permette di generare il suono 
//tramite il cicalino, vi sono tre parametri formali, 
//il primo parametro costituisce il pin in cui è collegato il cicalino, //il secondo parametro è costituito dal vettore note (lo spartito)
//e dalle relative frequenze 
//il terzo parametro è costituito dal periodo durante 
//il quale verrà prodotto ciascun suono.

void loop() {
 for (int i=0;i<203;i++){              
  int attesa = durata[i] * velocitasuono;
  tone(buzzer,note[i],attesa);          
  delay(attesa);} 


  delay (2000);

  // delay(2000) costituisce l'intervallo di tempo per cui 
  //una volta terminato il brano lo ricomincerà da capo
}
