import random

while True:
    choice = input("Do you want to roll the dice? (yes/no): ").lower()
    # Check if the user wants to roll the dice
    # every y that user inputs is gonna be lowercase str
    if choice == 'y' or choice == "yes":
        dice_roll = random.randint(1, 6)
        dice_roll2 = random.randint(1, 6)
        print(f"You rolled {dice_roll} and {dice_roll2}")
    elif choice == 'n' or choice == "no":
        print("Okay, maybe next time!")
        break
    else:
        print("Invalid input. Please enter 'y' or 'n'.")
        continue