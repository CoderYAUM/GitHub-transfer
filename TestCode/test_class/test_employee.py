from employee import Employee
import unittest

class TetEmployee(unittest.TestCase):
    def setUp(self):
        self.an_employee=Employee("Joe","Bidden",10000)

    def test_give_default_raise(self):
        self.assertEqual(self.an_employee.salary,10000)


    def test_give_custom_raise(self):
        self.assertEqual(self.an_employee.give_raise(10000),20000)

    if __name__=='__main__':
        unittest.main()
