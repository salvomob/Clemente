Ciao e benvenuto!

Mi presento, il mio nome è Salvatore Maria Mobilia, studente di Informatica presso l'Università degli Studi di Catania.

Questo piccolo progetto personale, chiamato "Clemente l'assistente intelligente", si pone l'obiettivo di facilitare l'utilizzo del pc tramite dei comandi vocali.

NON È una "intelligenza artificiale", in quanto mancano tutte le operazioni base di una intelligenza artificiale.

L'applicazione è piuttosto un assistente vocale che aiuta l'utente, semplificando alcuni task .

Fino ad ora sono state implementate le seguenti features : 



-Presentazione(es:"presentati")

(1)
-Risposta ad alcune domande(in continua espansione)

(2)
-Riproduzione musica(cartella musica: basta inserire file wav al su interno e dire "Riproduci file (senza l'estensione)" es- "Riproduci musica_leggera) N.B. i nomi dei file devono essere esattamente una stringa. Se il nome della canzone è composto da più parole, basta rinominare il file da riprodurre intervallando gli spazi con dei trattini o trattini bassi e quando si vuole riprodurlo, specificarli) es : "Riproduci musicatrattinobsassoleggera -> musica_leggera verrà riprodotta senza problemi.

(3)
-Riproduzione film(cartella film :basta inserire file mkv al su interno e dire "Riproduci film file (senza l'estensione)" es- "Riproduci film Thor) N.B. i nomi dei file devono essere esattamente una stringa. Se il nome del film/video è composto da più parole, basta rinominare il file da riprodurre intervallando gli spazi con dei trattini o trattini bassi e quando si vuole riprodurlo, specificarli) es : "Riproduci film Thor_2 -> Thor_2 verrà riprodotto senza problemi.

(4)
-Creazione file sulla Scrivania(Desktop) con qualsiasi estenzione si voglia "Crea nomefile estensione" --->>> es: "Crea prova txt" -->> prova.txt verrà creato sulla scrivania N.B. affinchè i file possano essere utilizzati, bisogna non inventare delle estensioni non esistenti (buon senso cercasi)

(5)
-Creazione cartelle sulla Scrivania(Deskktop) es:"Crea cartella NomeCartella"-->> cartella creata con nome NomeCartella sulla Scrivania 

(6)
-Riconoscimento facciale utente tramite opencv (per fare ciò, bisogna inserire la foto dell'utente affincè venga riconosciuto in foto e bisogna settare delle linee di codice in prova1.py... a breve cercherò di automatizzare il tutto)  es: "Chi sono"--> verrà aperto una finestra utilizzando la webcam e verrà riconosciuto il volto (se presente in foto)

(7)
-Invio messaggi whatsapp (per inviare messaggi bisognerà prima collegare whatsapp web col proprio account) es : "Invia messaggio" -->> verrà aperta una finestra per l'invio di un messaggio 

(8)
-Mostra messaggi -->> mostra tutti i messaggi inviati fino a quel momento es:"Mostra Messaggi"

(9)
-Operazioni matematiche base(+,-,*,/) fra due numeri es: "Quanto fa 5 più 5"

(10)
-Ora locale es:"Che ore sono"

(11)
-Data odierna es:"Che giorno è oggi"

(11)
-Impostazione sveglia es:"Imposta sveglia" -->> verrà aperta una finestra che ti chiederà di inserire i dati per l'avvio della sveglia

(12)
-Mostra processi attivi es:"mostra processi attivi"

(13)
-Mostra informazioni CPU es:"Mostra informazioni CPU"

(14)
-Utilities Sistema : firefox( es:"Apri firefox") (es:"Chiudi firefox") , editor xed (es:"Apri editor di testo")  , libreoffice(es:"Apri libreoffice"), chiudi il programma(es"Addio") , spegni pc (es:"spegni pc")

(15)
-Gioco snake es:"Apri Snake"


