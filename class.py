import cv2 as cv
import numpy as np
import glob

nCols = 9
nRows = 6

criteria = (cv.TERM_CRITERIA_EPS + cv.TERM_CRITERIA_MAX_ITER,30,0.001)

objp = np.zeros((nCols*nRows,3),np.float32)
objp[:,:2] = np.mgrid[0:nCols,0:nRows].T.reshape(-1,2)

objpoints = []
imgpoints = []
images = glob.glob('*.jpg')

for fname in images:
    img = cv.imread(fname)
    gray = cv.cvtColor(img,cv.COLOR_BGR2GRAY)

    ret,corners = cv.findChessboardCorners(gray,(nCols,nRows),None)

    if ret == True:
        objpoints.append(objp)
        corners2 = cv.cornerSubPix(gray,corners,(11,11),(-1,-1),criteria)
        imgpoints.append(corners2)

        cv.drawChessboardCorners(img,(nCols,nRows),corners2,ret)
        cv.imshow('img',img)
        cv.waitKey(500)
cv.destroyAllWindows()

ret,mtx,dist,rvecs,tvecs = cv.calibrateCamera(objpoints,imgpoints,gray.shape[::-1],None,None)

img = cv.imread(images[0])
h,w = img.shape[:2]
newcameramtx,roi = cv.getOptimalNewCameraMatrix(mtx,dist,(w,h),1,(w,h))

dst = cv.undistort(img,mtx,dist,None,newcameramtx)

x,y,w,h=roi
dst = dst[y:y+h,x:x+w]
cv.imwrite('calibresult.png',dst)