
public static void main(String[] args) {
        class mouse {
        String type;
        int dpi;
        boolean wireless;
        static int mouse_count = 0;

        mouse(String type, int dpi, boolean wireless) {
            this.type = type;
            this.dpi = dpi;
            this.wireless = wireless;
            mouse_count();
        }
        mouse() {
            this.type = "Unknown";
            this.dpi = 0;
            this.wireless = false;
            mouse_count();
        }
        mouse(mouse other) {
            this.type = other.type;
            this.dpi = other.dpi;
            this.wireless = other.wireless;
            mouse_count();
        }
        public static int mouse_count() {
            mouse_count++;
            return mouse_count;
        }
        void count_mouse_objects() {
            System.out.println("Total mouse objects created: " + mouse_count);
            }

        }
    }
public class Main {
    public static void main(String[] args) {
        mouse mouse1 = new mouse("Gaming", 16000, true);
        mouse mouse2 = new mouse();
        mouse mouse3 = new mouse(mouse1);

        System.out.println("Mouse 1: Type: " + mouse1.type + ", DPI: " + mouse1.dpi + ", wireless: " + mouse1.wireless);
        System.out.println("Mouse 2: Type: " + mouse2.type + ", DPI: " + mouse2.dpi + ", wireless: " + mouse2.wireless);
        System.out.println("Mouse 3: Type: " + mouse3.type + ", DPI: " + mouse3.dpi + ", wireless: " + mouse3.wireless);

        // Count the number of mouse objects created
        int totalMice = mouse.mouse_count();
        System.out.println("Total mice created: " + totalMice);
    }
}