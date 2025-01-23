import random

dice_art ={ 1: ("┌─────────┐",
                "│         │",
                "│    ●    │",
                "│         │",
                "└─────────┘"),
            2: ("┌─────────┐",
                "│  ●      │",
                "│         │",
                "│      ●  │",
                "└─────────┘"),
            3: ("┌─────────┐",
                "│  ●      │",
                "│    ●    │",
                "│      ●  │",
                "└─────────┘"),
            4: ("┌─────────┐",
                "│  ●   ●  │",
                "│         │",
                "│  ●   ●  │",
                "└─────────┘"), 
            5: ("┌─────────┐",
                "│ ●     ● │",
                "│    ●    │",
                "│ ●     ● │",
                "└─────────┘"), 
            6: ("┌─────────┐",
                "│  ●   ●  │",
                "│  ●   ●  │",
                "│  ●   ●  │",
                "└─────────┘"),               
            7: ("┌─────────┐",
                "│  ●   ●  │",
                "│  ● ● ●  │",
                "│  ●   ●  │",
                "└─────────┘"),
            8: ("┌─────────┐",
                "│  ● ● ●  │",
                "│  ●   ●  │",
                "│  ● ● ●  │",
                "└─────────┘"),
            9: ("┌─────────┐",
                "│  ● ● ●  │",
                "│  ● ● ●  │",
                "│  ● ● ●  │",
                "└─────────┘"),                
            10:("┌─────────┐",
                "│ ● ● ● ● │",
                "│ ●     ● │",
                "│ ● ● ● ● │",
                "└─────────┘"),
            11:("┌─────────┐",
                "│ ● ● ● ● │",
                "│ ●  ●  ● │",
                "│ ● ● ● ● │",
                "└─────────┘"),
            12:("┌─────────┐",
                "│ ● ● ● ● │",
                "│ ● ● ● ● │",
                "│ ● ● ● ● │",
                "└─────────┘")
}
dice = []
total = 0

num_of_dice = int(input("Enter number of dice: "))

#store the dice in the list
for die in range(num_of_dice):
    dice.append(random.randint(1,12))

#using list comprehension to filter odd and even dice
odd_dice = [die for die in dice if die%2 != 0]
even_dice = [die for die in dice if die%2 == 0]


#if odd dice then print 2 dice in each line
if odd_dice:
    print("\nOdd Dice:")
    for i in range(0,len(odd_dice),2):
        for line in range(5):
            for die in odd_dice[i:i+2]:
                print(dice_art[die][line], end="")
            print()
          
#if even dice then print 2 dice in each line
if even_dice:
    print("\nEven Dice:")
    for i in range(0,len(even_dice),2):
        for line in range(5):
            for die in even_dice[i:i+2]:
                print(dice_art[die][line], end="")
            print()

sorted_dice = sorted(dice)

def print_dice(dice_list, display):
    print(display)
    if dice_list:
        for line in range(5):
            print(" " .join(dice_art[die][line] for die in dice_list))

print_dice(sorted_dice, "\nDisplay dice:")

print(f"Sorted dice: {sorted_dice}")
total = sum(dice)
print(f"dice: {dice}")
print(f"total: {total}")
