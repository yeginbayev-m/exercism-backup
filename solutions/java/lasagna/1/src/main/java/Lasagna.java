public class Lasagna {

    int expectedOvenTime = 40;
    
    // TODO: define the 'expectedMinutesInOven()' method
    public int expectedMinutesInOven() {
        return expectedOvenTime;
    }

    public int remainingMinutesInOven(int num) {
        return expectedOvenTime - num;
    }

    public int preparationTimeInMinutes(int layers) {
        return layers * 2;
    }

    public int totalTimeInMinutes(int layers, int minutes) {
        return minutes + preparationTimeInMinutes(layers);
    }

}
