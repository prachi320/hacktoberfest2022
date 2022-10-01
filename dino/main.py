import pyautogui
from PIL import Image,ImageGrab
from numpy import asarray
import time

def hit(key):
    pyautogui.keyDown(key);

def iscollied(data):
  for i in range(300,415):
     for j in range(600,650):
        if data[i,j] < 100:
            return True
  return False

if __name__ == "__main__":
    time.sleep(3)
    print("game about")
    hit('up')
    print("game up")
    while True:
        print("running")
        image = ImageGrab.grab().convert('L')
        data = image.load()
        if iscollied(data):
           hit("up")
        # print(asarray(image))
        # for i in range(220,390):
        #  for j in range(470,500):
        #     data[i,j] = 0
        # image.show()

