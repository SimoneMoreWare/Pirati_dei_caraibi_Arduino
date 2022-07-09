# Pirati_dei_caraibi_Arduino
Arduino e buzzer: componiamo i Pirati dei Caraibi
Nel mondo di Arduino vi è data la possibilità di realizzare una miriade di progetti. Da tal proposito in questo articolo vi sarà illustrato un tutorial su come realizzare e comporre tramite l’ausilio di un cicalino passivo la famigerata colonna sonora dei pirati dei Caraibi.

Ma che cosa è un cicalino passivo? Il principio di funzionamento del cicalino passivo si fonda sull’utilizzo della modulazione PWM le cui onde permettono la vibrazione dell’aria sulla membrana interna del cicalino generando così un suono. Impostando la frequenza delle onde correttamente, si possono generare suoni differenti. Per esempio inviando una pulsazione di 523Hz si genera un Do, con una pulsazione di 587Hz si genera un re, con una pulsazione di 659Hz si genera un Mi. Mettendo insieme tutto ciò si può costruire e suonare una canzone.

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2019/11/61uDKJRvrLL._SX466_.jpg?w=466&ssl=1)

Il suono è un’onda meccanica longitudinale, che consiste nell’alternarsi di compressioni e rarefazioni del mezzo attraverso cui si propaga. Quando l’onda giunge alle nostre orecchie, la membrana che costituisce il timpano entra in vibrazione. La membrana è spinta verso l’interno dall’aria compressa e aspirata verso l’esterno dall’aria rarefatta. Questo movimento è poi trasmesso, attraverso gli ossicini dell’orecchio medio, a una struttura a spirale piena di liquido, chiamata chiocciola. Le oscillazioni del liquido eccitano delle sottilissime terminazioni nervose, generando il segnale che mediante il nervo acustico giunge fino al cervello. È così che percepiamo suoni e rumori.

Ogni suono ha tre caratteristiche fondamentali: l’altezza, l’intensità e il timbro:

L’altezza distingue un suono più acuto da uno più grave ed è determinata dalla frequenza dell’onda. Un suono è tanto più alto quanto maggiore è la sua frequenza, che coincide con la frequenza di vibrazione della sorgente.
L’intensità distingue un suono forte, o ad alto volume, da uno debole, o a basso volume. L’intensità cresce con l’ampiezza dell’onda. Infatti, un’onda sonora di ampiezza maggiore crea compressioni e rarefazioni dell’aria più marcate; quindi costituisce un suono che si ode meglio.
Il timbro differenzia le onde sonore in base alla particolare forma del loro profilo o, in modo equivalente, della legge periodica con cui, in un dato punto, esse oscillano nel tempo. Ogni strumento musicale ha un proprio timbro, che corrisponde a un diverso tipo di onda periodica. Dal timbro riusciamo a capire, per esempio, se stiamo ascoltando la musica di un pianoforte o quella di una tromba.
pirati dei Caraibi

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2019/11/Figure_18_03_01ab.jpg?w=400&ssl=1)

Nella cultura occidentale la musica si basa sulla successione di sette note, chiamate do, re, mi, fa, sol, la e si. La nota che segue il si è ancora un do, ma, come si dice in gergo musica, è “un’ottava sopra” al do precedente. Ogni nota è un suono di diversa altezza e quindi di diversa frequenza. Due note sono separate da un’ottava se la frequenza della seconda nota è esattamente il doppio della frequenza della prima.

Fin dall’epoca classica è stata utilizzata la cosiddetta scala naturale, in cui la frequenza di ogni nota è uguale a quella della nota precedente moltiplicata per una frazione semplice. Queste frazioni sono mostrare nella tabella sottostante.

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2019/11/cicalino5.jpg?w=593&ssl=1)

Partendo dal la naturale, a cui è stata assegnata la frequenza di 440 Hz, si calcolano, quindi, le frequenze di tutte le altre note. I rapporti tra le frequenze delle note sono chiamati intervalli: nella tabella si legge che l’intervallo mi-fa e quello si-do equivalgono 16/15 (1,0667); mentre gli altri intervalli, 10/9 (1,1111) e 9/8 (1,125), sono più ampi. Gli intervalli più ampi costituiscono un tono (9/8 e 10/9), mentre quello più piccolo rappresenta un semitono (16/15). Poiché si ha 16/15 * 16/15 = 1,1378, cioè due semitoni che valgono all’incirca un tono, l’intera ottava (che conta 5 toni e 2 semitoni) contiene 12 semitoni (5*2 + 2).

La scala naturale, avendo rapporti variabili tra un tono e l’altro, rende difficile in pratica l’accordatura degli strumenti musicali. Così, a partire dal Settecento si è diffuso un nuovo metodo di accordatura, detto temperamento equabile, in cui il rapporto k tra le frequenze di due semitoni consecutivi è fisso.

La scala naturale, avendo rapporti variabili tra un tono e l’altro, rende difficile in pratica l’accordatura degli strumenti musicali. Così, a partire dal Settecento si è diffuso un nuovo metodo di accordatura, detto temperamento equabile, in cui il rapporto k tra le frequenze di due semitoni consecutivi è fisso.

Partiamo, per esempio, da una nota do che ha frequenza f0. Nella scala temperata il semitono successivo (do diesis) ha frequenza f1 = k*f0 e quello successivo (re) ha frequenza f2 = k * f1 = k^2 * f0.

Continuando in questo modo, troviamo che il do posto dodici semitoni al di sopra di quello di partenza ha frequenza f12= k^12 *f0 .

Poiché tale frequenza deve essere uguale a 2*f0 possiamo scrivere la seguente relazione: 2*f0 = k^12 * f0. Da tale relazione è possibile calcolare il valore di k, che equivale alle radice dodicesima di 2 (1,05946).

I tasti della chitarra non sono equamente spaziati: le loro posizioni sono determinate in base alla successione dei valori di k, k^2, k^3, … ; al dodicesimo tasto la nota prodotta sarà uguale a un’ottava superiore a quella posta 12 tasti prima.

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2019/11/maxresdefault-3.jpg?resize=1024%2C576&ssl=1)

Dopo questa digressione teorica passiamo al progetto vero e proprio per la composizione della colonna sonora dei pirati dei Caraibi. I componenti richiesti per realizzare tale progetto sono:

1x Arduino Uno o Elegoo UNO R3
1x Cicalino passivo
2x Connettori F-M (1x rosso, 1x nero)
Ora il prossimo passo consiste nel collegare il cicalino alla scheda UNO, il cavo rosso (positivo) al pin 8 e il cavo nero (negativo) alla messa a terra GND.

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2019/11/cicalino2.jpg?w=622&ssl=1)

Il codice è presente nel seguente [Link][(https://pages.github.com/](https://github.com/SimoneMoreWare/Pirati_dei_caraibi_Arduino/blob/main/pirati.ino))

Una volta copiato il programma basta incollarlo su un nuovo progetto su Arduino Ide, e caricare il programma sulla propria board, ed ecco che potrete udire nella totale magnificenza la colonna sonora dei pirati dei Caraibi. Un ringraziamento speciale va al musicista Daniele Cassa che ha realizzato lo sparito per conto del programmatore, aiutandolo per quanto riguarda le note da utilizzare e la durata di ciascuna di esse.
