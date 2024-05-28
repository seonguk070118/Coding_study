import numpy as np
import cv2
from matplotlib import pyplot as plt
img = cv2.imread("KakaoTalk_20240528_112132361.jpg")
h,w, d = img.shape
xl = []
yl = []

def draw_rect(event,x,y,flags,param):
    if event == cv2.EVENT_LBUTTONDOWN:
        cv2.rectangle(img, (x, y), (x + 5, y + 5), (255, 0, 0), -1)
        xl.append(x)
        yl.append(y)


#img = np.zeros((512,512,3),np.uint8)
cv2.namedWindow('image')
cv2.setMouseCallback('image',draw_rect)



while True:
    cv2.imshow('image',img)
    if cv2.waitKey(1) & 0xFF==27:
        break
    if len(xl)==4:
        src = np.float32([[xl[0],yl[0]],[xl[1],yl[1]],[xl[2],yl[2]],[xl[3],yl[3]]])
        dst = np.float32([[xl[0],yl[0]],[xl[0],yl[1]],[xl[3],yl[2]],[xl[3],yl[3]]])
        per_mat = cv2.getPerspectiveTransform(src,dst)
        res = cv2.warpPerspective(img,per_mat,(w,h))
        plt.subplot(2,2,1)
        plt.imshow(res,cmap='gray')
        plt.xticks([]),plt.yticks([])
        plt.show()
        xl = []


cv2.destroyAllWindows()