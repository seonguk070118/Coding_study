import cv2
import numpy as np
import os
save_dir = "./code_res_imgs/c3_opticalFlow" 
if not os.path.exists(save_dir):
    os.makedirs(save_dir)

cap =cv2.VideoCapture("./../images/video7.mp4")
numMaxCorners = 20
feature_params=dict(maxCorners = numMaxCorners,qualityLevel = 0.3,minDistance = 7,blockSize=7)

lk_params = dict(winSize = (15,15),maxLevel =2,criteria = (cv2.TERM_CRITERIA_EPS | cv2.TERM_CRITERIA_COUNT, 10, 0.03))

ret,prevFrame = cap.read()
prevFrame = cv2.resize(prevFrame, (320, 240))
prevGray = cv2.cvtColor(prevFrame, cv2.COLOR_BGR2GRAY)
p0 = cv2.goodFeaturesToTrack(prevGray, mask = None, **feature_params)

flowColor = np.random.randint(0,255, (numMaxCorners, 3))
mask = np.zeros_like(prevFrame)