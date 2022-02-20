#include "Memory.cpp"

int main()
{
    Memory VGA; // buat objek VGA

    // set atribut
    VGA.set_price("Rp. 59.000.000");
    VGA.set_idProduct("M123");
    VGA.set_brand("Intel");
    VGA.set_model("Intel Rtz");
    VGA.set_freq("49.5 Gbps");
    VGA.set_mSize("224 GB");
    VGA.set_sCuda("10123 Units");

    // output untuk VGA
    cout << "--------------------------------" << endl;
    cout << "Price        : " << VGA.get_price() << endl;
    cout << "ID Product   : " << VGA.get_idProduct() << endl;
    cout << "Brand        : " << VGA.get_brand() << endl;
    cout << "Model        : " << VGA.get_model() << endl;
    cout << "Freqeuency   : " << VGA.get_freq() << endl;
    cout << "Memory Size  : " << VGA.get_mSize() << endl;
    cout << "Support Cuda : " << VGA.get_sCuda() << endl;
    cout << "--------------------------------" << endl;
    
    return 0;
}