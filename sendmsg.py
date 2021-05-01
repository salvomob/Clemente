import pywhatkit as kit

numero = input("inserisci il numero(N.B. inserisci anche il prefisso statale(+39 IT)) : ")
messaggio = input("inserisci il messaggio da inviare : ")
ora = int(input("inserisci l'ora di invio : "))
minuto = int(input("inserisci il minuto di invio : "))
kit.sendwhatmsg(numero,messaggio,ora,minuto)
