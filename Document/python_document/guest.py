# guest=input("Please input your name.")
filename="guest.txt"
# with open(filename,"w") as file_object:
#     file_object.write(guest)

print("If you want to exit the program.You can input 'quit' at any time.")
while True:
    guest=input("Please input your name.")
    if guest=="quit":
        break
    print(f"Hello,{guest}!")
    reason=input("Why are you love programming?")
    if reason=="quit":
        break
    with open(filename,"a") as file_object:
        file_object.write(f"{guest}\n")
        file_object.write(f"{guest.title()} love programming because {guest} say that, {reason}.\n")

with open(filename) as file_object:
    contents=file_object.read()
print(contents.rstrip())