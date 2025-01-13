dice_art ={1:  ("┌─────────┐",
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
                "└─────────┘")               
}
dice = []
total = 0
num_of_dice = int(input("How many dice?:"))

for die in range(num_of_dice):
    dice.append(random.randint(1,6))

# This output horizontal dice
# for die in dice:
#     for line in dice_art[die]:
#         print(line)


# this will output veritcal dice
for line in range(5):
    for die in dice:
        print(dice_art.get(die)[line], end="")
    print()


total = sum(dice)
print(f"dice: {dice}")
print(f"total: {total}")
