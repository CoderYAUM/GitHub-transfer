def combain(city_name, country_name,population=None):
    if population:
        city_country = f"{city_name.title()},{country_name.title()}-population {population} "
    else:
        city_country=f"{city_name.title()},{country_name.title()}"
    return city_country

result=combain("wuhan","china",100000000)
print(result)
result=combain("shanghai","china")
print(result)

