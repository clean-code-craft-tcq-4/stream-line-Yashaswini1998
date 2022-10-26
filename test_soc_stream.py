from gen_soc_stream import *

def test_soc_stream():
    soc_list = soc_stream()

    for val in soc_list:
        assert 21 <= val <= 80