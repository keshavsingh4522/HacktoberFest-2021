#making dice game for a 4 player game


import random

for i in range (0,4):
  rolling_dice = random.randint(1,6)
  print("Value of dice for Player " + str(i+1) +" : " + str(rolling_dice))