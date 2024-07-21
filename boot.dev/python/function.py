def area_of_circle(radius):
    pi = 3.14
    area = pi * radius * radius
    return area


sword_length = 1.0
spear_length = 2.0

# don't touch above this line

sword_area = area_of_circle(sword_length)
spear_area = area_of_circle(spear_length)

# don't touch below this line

print("Sword length:", sword_length, "meters.")
print("Sword attack area:", sword_area, "square meters")

print("Spear length:", spear_length, "meters.")
print("Spear attack area:", spear_area, "square meters")




#Multi parameter
attack_one = 2
attack_two = 4
attack_three = 3
attack_four = -1
attack_five = 10
attack_six = 5

# Don't touch above this line


def triple_attack(damage_one, damage_two, damage_three):
    # ?
    total = damage_one + damage_two + damage_three
    return total


# Don't touch below this line

print("Getting damage for", attack_one, attack_two, "and", attack_three, "...")
print(triple_attack(attack_one, attack_two, attack_three), "points of damage dealt!")
print("=====================================")

print("Getting damage for", attack_four, attack_five, "and", attack_six, "...")
print(triple_attack(attack_four, attack_five, attack_six), "points of damage dealt!")
print("=====================================")
