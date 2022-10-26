from gen_temperature_stream import *

def test_temperature_stream():
    temperature_list = temperature_stream()

    for val in temperature_list:
        assert 1 <= val <= 45