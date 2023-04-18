filename = "learning_python.txt"
with open(f"D:/Python/{filename}") as file_object:
    for line in file_object:
        message=line.replace("Python","C")
        print(message.rstrip())
#     lines=file_object.readlines()
#     for line in file_object:
#         print(line)
#     file=file_object
#     contents = file_object.read()
# # print(contents)
# py_string=""
# for aline in lines:
#     py_string+=aline.rstrip()
# print(py_string)