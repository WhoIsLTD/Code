from scapy.all import IP, ICMP, sr1

ip_layer = IP(src="192.168.0.1", dst = "www.google.com")

icmp_req = ICMP()

packet = ip_layer / icmp_req

received_packet = sr1(packet)

if received_packet:
    print(received_packet.show())