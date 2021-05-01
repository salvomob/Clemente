import speech_recognition as sr

file1 = open("input.txt", mode="w")

recognizer_instance = sr.Recognizer()

with sr.Microphone() as source:
	recognizer_instance.adjust_for_ambient_noise(source)
	print("sono in ascolto, parla pure")
	audio = recognizer_instance.listen(source)

try:
	text = recognizer_instance.recognize_google(audio, language = "it-IT")
	file1.write(text)
	file1.close()
	
except Exception as e:
 print (e)
		
