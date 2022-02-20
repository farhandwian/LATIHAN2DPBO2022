public class Main {
    public static void main(String[] args) {
        Memory VGA = new Memory(); // buat objek VGA

        // set atribut
        VGA.set_price("Rp. 25.000.000");
        VGA.set_idProduct("kz123");
        VGA.set_brand("Nmixx");
        VGA.set_model("intel RTX 212");
        VGA.set_frequency("59.5 Gbps");
        VGA.set_memorySize("104 GB");
        VGA.set_supportsCuda("21507 Units");

        // output untuk VGA
        System.out.println("======================================");
        System.out.println("Price        : " + VGA.get_price());
        System.out.println("ID Product   : " + VGA.get_idProduct());
        System.out.println("Brand        : " + VGA.get_brand());
        System.out.println("Model        : " + VGA.get_model());
        System.out.println("Frequency    : " + VGA.get_frequency());
        System.out.println("Memory Size  : " + VGA.get_memorySize());
        System.out.println("Support Cuda : " + VGA.get_supportsCuda());
        System.out.println("=======================================");
    }
}