import json

# number=input("Please input the number you want:")
# filename="like_number.txt"
# with open(filename,'w') as f:
#     json.dump(number,f)
# with open(filename) as file_object:
#     contents=file_object.read()
# print(f"I know your favorite number!It's {contents}.")
filename="like_number.txt"
try:
    with open(filename) as f:
        number=json.load(f)
except FileNotFoundError:
    number=input("What is your favorite number?")
    with open(filename,"w") as f:
        json.dump(number,f)
else:
    print(f"I know {number} is your favorite number.")
