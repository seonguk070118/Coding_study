import cv2 as cv
img = cv.imread('./image/cute.jpg')
cv.imshow('image',img)
cv.waitKey(0)
cv.destroyAllWindows()

