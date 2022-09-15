from gen_temperature_stream import *
from gen_soc_stream import *

def stream_data(number_of_streams):
    for i in range(number_of_streams):
        temperature_list = temperature_stream()
        print(temperature_list[i]\n)

if __name__ == '__main__':
    number_of_streams = 1
    stream_data(number_of_streams)
