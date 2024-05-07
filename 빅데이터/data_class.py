import cv2
import numpy as np
from matplotlib import pyplot as plt

CAMERA_ID = 0
cam = cv2.VideoCapture(CAMERA_ID)
if not cam.isOpened():
    print('Cannot open the camera-%d' % CAMERA_ID)
    exit()

def nothing():
    pass

cv2.namedWindow('RGB track bar')
cv2.createTrackbar('red color','RGB track bar',1,255,nothing)
cv2.createTrackbar('green color','RGB track bar',1,255,nothing)
cv2.createTrackbar('blue color','RGB track bar',1,255,nothing)

while(True):
    ret, frame = cam.read()
    if not ret:
        print("카메라 프레임을 읽을 수 없습니다. 종료합니다.")
        break  # 카메라에서 프레임을 제대로 읽지 못했으면 루프를 빠져나옴

    #cv2.setTrackbarPos('red color','RGB track bar',125)
    #cv2.setTrackbarPos('greed color','RGB track bar',125)
    #cv2.setTrackbarPos('blue color','RGB track bar',125)
    redVal = cv2.getTrackbarPos('red color', 'RGB track bar')
    greenVal = cv2.getTrackbarPos('green color', 'RGB track bar')
    blueVal = cv2.getTrackbarPos('blue color', 'RGB track bar')
    dst = cv2.blur(frame,(redVal,greenVal))
    
    cv2.imshow('RGB track bar', dst)
    
    if cv2.waitKey(1) & 0xFF == ord('q'):  # 'q'를 누르면 루프에서 빠져나옴
        break

# 루프를 빠져나온 후 자원을 해제하고 모든 창을 닫음
cam.release()
cv2.destroyAllWindows()






img = np.zeros((512,512,3),np.uint8)
while(1):
    break