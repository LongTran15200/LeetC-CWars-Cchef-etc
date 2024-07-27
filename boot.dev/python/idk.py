def curse(weapon_damage):
    lesser_cursed = weapon_damage * 0.5
    greater_cursed = weapon_damage * 0.25
    return lesser_cursed, greater_cursed


def test(weapon_damage):
    print("Weapon's base damage:", float(weapon_damage))
    print("Cursing...")
    lesser_cursed, greater_cursed = curse(weapon_damage)
    print("With lesser curse the damage is:", float(lesser_cursed), "damage.")
    print("With greater curse the damage is:", float(greater_cursed), "damage.")
    print("=====================================")


def main():
    test(100)
    test(500)
    test(1000)


main()




#attack and enchant
def enchant_and_attack(target_health, damage, weapon):
    # ?
    enchanted_damage = damage + 10
    new_health = target_health - enchanted_damage
    enchanted_weapon = "enchanted " + weapon
    return enchanted_weapon, new_health


# Don't modify below this line


def test(target_health, damage, weapon):
    print("The target has", target_health, "health.")
    print(weapon, "base damage:", damage, "Enchanting and attacking")
    enchanted_weapon, new_health = enchant_and_attack(target_health, damage, weapon)
    print("The target has been attacked with the", enchanted_weapon)
    print("The target has", new_health, "health remaining.")
    print("=====================================")


def main():
    test(100, 50, "sword")
    test(500, 100, "axe")
    test(1000, 250, "bow")


main()
