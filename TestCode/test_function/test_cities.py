import unittest
from city_function import combain


class CityTestCase(unittest.TestCase):
    def test_city_country_population(self):
        city_country = combain('santiago', 'chile', 100000)
        self.assertEqual(city_country, "Santiago,Chile-population 100000")

    def test_city_country(self):
        city_country = combain("wuhan", "china")
        self.assertEqual(city_country, "Wuhan,China")

    # def test_city_country_population(self):
    #     city_country=combain('santiago','chile',100000)
    #     self.assertEqual(city_country,"Santiago,Chile-population 100000")


if __name__ == '__main__':
    unittest.main()
