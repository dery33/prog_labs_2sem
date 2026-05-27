import java.io.FileWriter;
import java.io.IOException;
public class Main {
  public static void main(String[] args) {
    try {
        java.io.File myFile = new java.io.File("test.txt");
        FileWriter myWriter = new FileWriter("test.txt");
        myWriter.write("Hello, World!");
        myWriter.close();
        System.out.println("Успiшно записано у файл.");
        System.out.println(myFile.getName());
        System.out.println(myFile.getAbsolutePath());
        System.out.println(myFile.length());
        System.out.println(myFile.canRead());
        System.out.println(myFile.canWrite());
    }
    catch (IOException e) {
      System.out.println("Виникла помилка.");
      e.printStackTrace();
    }
  }
}