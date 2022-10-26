import random

min_threshold = 0
max_threshold = 45

def temperature_stream():
    temperature_list = []
    for i in range(50):
        temp = random.randint(min_threshold, max_threshold)
        temperature_list.append(temp)
    return temperature_list