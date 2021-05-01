import face_recognition
import cv2 # pip install opencv-python

path = "/home/salvatore/Scrivania/developement/ideas/clemente/foto/"
file1 = open("user.txt", mode="w")
webcam = cv2.VideoCapture(0)

target_image1 = face_recognition.load_image_file(path+"selene.jpg")
target_encoding1 = face_recognition.face_encodings(target_image1)[0]

target_image2 = face_recognition.load_image_file(path+"salvatore.jpg")
target_encoding2 = face_recognition.face_encodings(target_image2)[0]

target_image3 = face_recognition.load_image_file(path+"mariafranca.jpg")
target_encoding3 = face_recognition.face_encodings(target_image3)[0]

target_image4 = face_recognition.load_image_file(path+"peppino.jpg")
target_encoding4 = face_recognition.face_encodings(target_image4)[0]

target_image5 = face_recognition.load_image_file(path+"dalila.jpg")
target_encoding5 = face_recognition.face_encodings(target_image4)[0]

if target_encoding1[0]:
	print("Image 1 Loaded. 128-dimension Face Encoding Generated. \n")
if target_encoding2[0]:
	print("Image 2 Loaded. 128-dimension Face Encoding Generated. \n")
if target_encoding3[0]:
	print("Image 3 Loaded. 128-dimension Face Encoding Generated. \n")
if target_encoding4[0]:
	print("Image 4 Loaded. 128-dimension Face Encoding Generated. \n")
if target_encoding5[0]:
	print("Image 5 Loaded. 128-dimension Face Encoding Generated. \n")	


target_name1 = "selene"
target_name2 = "salvatore"
target_name3 = "mariafranca"
target_name4 = "peppino"
target_name5 = "dalila"

process_this_frame = True

while True:
    ret, frame = webcam.read()

    small_frame = cv2.resize(frame, None, fx=0.20, fy=0.20)
    rgb_small_frame = cv2.cvtColor(small_frame, 4)

    if process_this_frame:

        face_locations = face_recognition.face_locations(rgb_small_frame)
        frame_encodings = face_recognition.face_encodings(rgb_small_frame)

        if frame_encodings:
            frame_face_encoding = frame_encodings[0]
            match1 = face_recognition.compare_faces([target_encoding1], frame_face_encoding)[0]
            match2 = face_recognition.compare_faces([target_encoding2], frame_face_encoding)[0]
            match3 = face_recognition.compare_faces([target_encoding3], frame_face_encoding)[0]
            match4 = face_recognition.compare_faces([target_encoding4], frame_face_encoding)[0]            
            match5 = face_recognition.compare_faces([target_encoding5], frame_face_encoding)[0]            
            if match1:
            	label = target_name1
            if match2:
            	label = target_name2
            if match3:
            	label = target_name3
            if match4:
            	label = target_name4
            if match5:
            	label = target_name5	
            			
			
    process_this_frame = not process_this_frame

    if face_locations:
        top, right, bottom, left = face_locations[0]

        top *= 5
        right *= 5
        bottom *= 5
        left *= 5

        cv2.rectangle(frame, (left, top), (right, bottom), (0, 255, 0), 2)

        cv2.rectangle(frame, (left, bottom - 30), (right, bottom), (0, 255, 0), cv2.FILLED)
        label_font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, label, (left + 6, bottom - 6), label_font, 0.8, (255, 255, 255), 1)

    cv2.imshow("Video Feed", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

file1.write(label)
file1.close()
webcam.release()
cv2.destroyAllWindows()


