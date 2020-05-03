from mac import MAC_changer

if (__name__ == "__main__"):
    mc = MAC_changer()
    mac = mc.get_MAC("enp2s0")
    # print(mac)
    # 08:97:98:78:b4:15
    curr_mac = mc.change_mac("enp2s0", "00:11:22:33:44:55")

    print(curr_mac)