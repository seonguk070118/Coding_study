import cv2 as cv2
CAMERA_ID = 0
cam = cv2.VideoCapture(CAMERA_ID)
if cam.isOpened() == False:
    print
    'Cannot open the camera-%d' % (CAMERA_ID)
    exit()

cv2.namedWindow('CAM Window')

background = None

while(True):
    ret,frame = cam.read()
    gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    cv2.imshow('CAM Window',gray)
    key = cv2.waitKey(33)
    if key == ord('q'):
        break
    if key == ord('a'):
        background = gray.copy()
        print('성공')
        break
c=-1
while(True):
    ret,frame = cam.read()
    gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    diff = cv2.absdiff(gray,background)
    key = cv2.waitKey(33)
    
    if key == ord('b'):
        c*=-1
        print(c)
    if c == 1:
        _, thresh = cv2.threshold(diff, 25, 255, cv2.THRESH_BINARY)
        cv2.imshow('CAM Window', thresh)
        key = cv2.waitKey(33)
        
    else:
        cv2.imshow('CAM Window',diff)
    if key == ord('q'):
        break


cam.release()
cv2.destroyAllWindows()