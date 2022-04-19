package RandomThingsGo;


public class Product {
    String productName;
    double productPrice;
    double quantity;

    public String toString() {
        return String.format(productName, productPrice, quantity);
    }
}
