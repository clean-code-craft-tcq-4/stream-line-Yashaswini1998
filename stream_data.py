from gen_temperature_stream import *
from gen_soc_stream import *

def stream_data():
	temperature_list = temperature_stream()
	soc_list = soc_stream()
	for temperature, soc in zip(temperature_list, soc_list):
		print(temperature,",",soc)

if __name__ == '__main__':
    stream_data()
