package RandomThingsGo;
import java.io.*;

public class tema {
    static String delimiter = ";";
    static String pathFile = "F://Work&Projects//C-Codes//RandomThingsGo//";

    public static void main(String[] args) throws FileNotFoundException, IOException {
        String string;
        String[] stringArray;
        String nameMax = null, nameMin = null, sourceName, destinationName, quantityMaxS = null, quantityMinS = null, priceMinS = null, priceMaxS = null;
        double priceMin = 10000000, quantityMax = 0;
        double priceMax = -10000000, quantityMin = 0;

        Product products = new Product();
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        sourceName = reader.readLine();
        destinationName = reader.readLine();

        FileWriter fileWriter = new FileWriter(pathFile + destinationName);
        BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);
        FileInputStream fileInputStream = new FileInputStream(pathFile + sourceName);
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(fileInputStream));

        
        System.out.println("-----Data from the file-----");
        while((string = bufferedReader.readLine()) != null) {
            stringArray = string.split(delimiter);
            products.productName = stringArray[0];
            products.productPrice = Double.parseDouble(stringArray[1]);
            products.quantity = Double.parseDouble(stringArray[2]);
            System.out.println(products.productName + "-" + products.productPrice + "-" + products.quantity);

            if(priceMin > products.productPrice) {
                priceMin = products.productPrice;
                nameMin = products.productName;
                quantityMin = products.quantity;
            } else if(priceMax < products.productPrice) {
                priceMax = products.productPrice;
                nameMax = products.productName;
                quantityMax = products.quantity;
            }

            quantityMaxS = String.valueOf(quantityMax);
            quantityMinS = String.valueOf(quantityMin);
            priceMaxS = String.valueOf(priceMax);
            priceMinS = String.valueOf(priceMin);
        
        }

        bufferedReader.close();
        String[] contentString = new String[]{nameMin, priceMinS, quantityMinS, nameMax, priceMaxS, quantityMaxS};
        for(int i = 0; i < contentString.length; ++i) {
            bufferedWriter.write(contentString[i] + " ");
        }

        bufferedWriter.close();
    }
}