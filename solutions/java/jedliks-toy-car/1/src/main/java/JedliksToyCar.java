public class JedliksToyCar {
    private int dist = 0;
    private int battery = 100;
    public JedliksToyCar() {
        this.dist = dist;
        this.battery = battery;
    }
    public static JedliksToyCar buy() {
        return new JedliksToyCar();

    }

    public String distanceDisplay() {
        return String.format("Driven %d meters", this.dist);
    }

    public String batteryDisplay() {
        if (this.battery == 0) {
            return String.format("Battery empty");
        } else {
            return String.format("Battery at %d%%", this.battery);
        }
        
    }

    public void drive() {

        if (this.battery != 0) {
            this.dist = this.dist + 20;
            this.battery = this.battery - 1;
        }

    }
}
