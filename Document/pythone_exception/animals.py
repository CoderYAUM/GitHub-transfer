filename1="cats.txt"
filename2="dogs.txt"
with open(filename1,'w') as f1:
    f1.write("cat1\n")
    f1.write("cat2\n")
    f1.write("cat3\n")

try:
    with open(filename2) as file_object1:
        contents=file_object1.read()
except FileNotFoundError:
    pass
else:
    print(contents)


