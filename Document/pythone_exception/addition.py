print("If you want to exit the program.Please input 'quit'!")
while True:
    print("Please input two numbers.")
    number1 = input("The first number is:")
    if number1=="quit":
        break
    number2 = input("The second number is:")
    if number2=="quit":
        break
    try:
        print(int(number1) + int(number2))
    except ValueError:
        print("There is an error existing your input.")