import random

min_threshold = 20
max_threshold = 80

def soc_stream():
    soc_list = []
    for i in range(50):
        soc = random.randint(min_threshold, max_threshold)
        soc_list.append(soc)
    return soc_list