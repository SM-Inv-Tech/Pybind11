from lib import chapter_2

if __name__ == "__main__":
    pet = chapter_2.Pet("DaBai")
    print(pet)

    print(pet.get_name())

    pet.set_name("XiaoHuang")
    print(pet.get_name())

    pet.name = "AHuang"
    print(pet.get_name())