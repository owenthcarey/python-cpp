import tutorial


# Press the green button in the gutter to run the script.
if __name__ == "__main__":
    person = tutorial.Person("Alice", 25)
    print(f"Person: {person}")
    print(f"Name: {person.get_name()}")
    print(f"Age: {person.get_age()}")
