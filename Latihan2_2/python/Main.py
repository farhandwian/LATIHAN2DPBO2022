from Memory import Memory

vga1 = Memory() # buat objek vga1

# set atribut pada object
vga1.set_price("Rp. 10.000.000")
vga1.set_idProduct("boeing109")
vga1.set_brand("nvdia")
vga1.set_model("GeForce RTX 28901")
vga1.set_freq("30 Gbps")
vga1.set_mSize("214 GB")
vga1.set_sCuda("21591 Units")

# output untuk vga1
print(f"=====================================")
print(f"Price        : {vga1.get_price()}")
print(f"ID Product   : {vga1.get_idProduct()}")
print(f"Brand        : {vga1.get_brand()}")
print(f"Model        : {vga1.get_model()}")
print(f"Frequency    : {vga1.get_freq()}")
print(f"Memory Size  : {vga1.get_mSize()}")
print(f"Support Cuda : {vga1.get_sCuda()}")
print(f"=======================================")