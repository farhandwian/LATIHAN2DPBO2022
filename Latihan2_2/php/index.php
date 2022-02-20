<?php

include "Product.php";
include "Hardware.php";
include "Memory.php";

$vga1 = new Memory(); // buat objek vga1
// set atribut
$vga1->set_price("Rp. 17.450.000");
$vga1->set_idProduct("NM69");
$vga1->set_brand("Intel");
$vga1->set_model("Intel irisxe");
$vga1->set_freq("99.5 Gbps");
$vga1->set_mSize("84 GB");
$vga1->set_sCuda("21596 Units");

// output untuk vga1
echo "=========================================="."<br>";
echo "Price        : ".$vga1->get_price()."<br>";
echo "ID Product   : ".$vga1->get_idProduct()."<br>";
echo "Brand        : ".$vga1->get_brand()."<br>";
echo "Model        : ".$vga1->get_model()."<br>";
echo "Frequency    : ".$vga1->get_freq()."<br>";
echo "Memory Size  : ".$vga1->get_mSize()."<br>";
echo "Support Cuda : ".$vga1->get_sCuda()."<br>";
echo "========================================="."<br>";

?>