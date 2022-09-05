from gen_temperature_stream import *
from gen_soc_stream import *

def stream_data(number_of_streams):
    for i in range(number_of_streams):
        temperature_list = temperature_stream()
        print(",".join([str(i) for i in temperature_list]))

    for i in range(number_of_streams):
        soc_list = soc_stream()
        print(",".join([str(i) for i in soc_list]))

if __name__ == '__main__':
    number_of_streams = 5
    stream_data(number_of_streams)