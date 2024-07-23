def become_warrior(first_name, last_name, power):
    new_power = power + 1
    title = f"{first_name} {last_name} the warrior"
    return title, new_power


def main():
    test("Frodo", "Baggins", 5)
    test("Bilbo", "Baggins", 10)
    test("Gandalf", "The Grey", 9000)


def test(first_name, last_name, power):
    title, new_power = become_warrior(first_name, last_name, power)
    print(title, "has a power level of:", new_power)


main()
