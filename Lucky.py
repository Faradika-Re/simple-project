import random

# i wanna create a program that generates random word from a array
while True:
    choice = input("Do you want to try your luck? (yes/no): ").lower()
    if choice == 'yes' or choice == 'y':
       words = ["Lucky af", "Had no luck", "Just feeling lucky", "Unlucky at all"]
       luck = random.choice(words)
       print("Today, you may get a title of :", f"{luck}.")
    elif choice == 'no' or choice == 'n':
        print("It's a good choice.\nNever do gambling with your luck again!")
        break
    else:
        print("Invalid input. Please enter 'yes' or 'no'.")

        continue
