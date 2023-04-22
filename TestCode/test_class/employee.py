class Employee:
    def __init__(self,first_name,last_name,salary):
        self.first_name=first_name
        self.last_name=last_name
        self.salary=salary

    def give_raise(self,increase_salary=None):
        if increase_salary:
            self.salary+=increase_salary
        else:
            self.salary+=50000




