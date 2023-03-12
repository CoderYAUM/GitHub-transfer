# print(1 + 2)
# message = "hell world"
# print(message)
message = "hello"
print(message)
name="Eric"
print("hello,Eric")
print(name.title())
print(name.lower())
print(name.upper())
famous_person="Albert Einstein"
message=f"{famous_person} once said,”A person who never made a mistake never tried anything new“"
print(message)
person=" abd "
print(person)
print(person.lstrip())
print(person.rstrip())
print(person.strip())
person="\tjoe\n\tbiden"
print(person)
print(2**3)
message=7
message_2=message
print(message_2)
names=['yjm','fcc','lym']
print(names[0])
print(names[1].title())
print(names[-1].title())
print(f"hello {names[0].title()}")
print(f"{names[-1].title()}hello")
print(f"{names} hello everyone")
cars=['baoma','benz','mashaladi']
print(cars)
print(f"i would have a {cars[-1].title()}")
cars[-1]='lanbojini'
print(*cars)

pizzas=['apple pizza','banana pizza','peach pizza']
for pizza in pizzas:
    print(f"I like {pizza}.")
print("I really like pizza!")
friend_pizzas=pizzas[:]
pizzas.append('pizza1')
friend_pizzas.append("pizza2")
print(pizzas)
for pizza in pizzas:
    print(pizza)
print(friend_pizzas)

animals=['dog','cat','pig']
for animal in animals:
    print(f"A {animal} would make a pet.")
print("Any of them")

values=list(range(1,21,2))
print(values)
for value in range(1,21,2):
    print(value)
for value in values:
    print(value)

values=[]
for value in range(1,11):
    values.append(value**3)
print(values)


values=[]
for value in range(1,11):
    number=value**3
    values.append(number)
print(values)

numbers=[value**3 for value in range(1,11)]
print(numbers)
print("the first three items in the list are:")
print(numbers[2])
print(numbers[:3])
print(numbers[2:5])
print(numbers[-3:])

foods=[pizzas,animals,numbers]
for object in foods:
    for subject in object:
        print(subject)

goods=('pizza','apple','banana','water','lemon')
for food in goods:
    print(food)
goods=('pizza','1','2a','water','lemon')
for food in goods:
    print(food)

