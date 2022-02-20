// class Product is parent of class Hardware
public class Product {
    private String idProduct;
    private String price;
    
    // constructor kosong
    public Product() {
    }
    
    // constructor
    public Product(String price, String idProduct) {
        this.idProduct = idProduct;
        this.price = price;       
    }

    // set product idProduct
    public void set_idProduct(String idProduct) {
        this.idProduct = idProduct;
    }
    // get product idProduct
    public String get_idProduct() {
        return idProduct;
    }

    // set product price
    public void set_price(String price) {
        this.price = price;
    }
    // get product price
    public String get_price() {
        return price;
    }


}