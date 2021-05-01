#!/bin/sh
g++ source.cpp -o cleme
while 1>0
do
	python3 listener.py
	./cleme 
	echo "true" > /home/salvatore/Scrivania/developement/ideas/clemente/source/faccia_clemente/application.linux64/parla.txt
	espeak -v mb-it3 -s 150 -f output.txt
	echo "false" > /home/salvatore/Scrivania/developement/ideas/clemente/source/faccia_clemente/application.linux64/parla.txt 
done
