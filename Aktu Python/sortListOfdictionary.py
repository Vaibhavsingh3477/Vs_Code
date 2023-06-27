people = [
    {"name": "John", "age": 25},
    {"name": "Alice", "age": 19},
    {"name": "Bob", "age": 32}
]

sorted_people = sorted(people, key=lambda x: x['age'])
print(sorted_people)
