
import pyautogui
import time

n = int(input("Enter pyramid height: "))

time.sleep(5)

for i in range(1, n + 1):
    spaces = " " * (n - i)
    stars = "*" * (2 * i - 1)

    line = spaces + stars

    pyautogui.write(line)
    pyautogui.press("enter")

 