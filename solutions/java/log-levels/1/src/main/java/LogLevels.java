public class LogLevels {
    
    public static String message(String logLine) {
        String[] parts = logLine.split(":");
        return parts[1].trim();
    }

    public static String logLevel(String logLine) {
         String[] parts = logLine.split(":");
        return parts[0].replace("[", "").replace("]", "").toLowerCase();
    }

    public static String reformat(String logLine) {
        String[] parts = logLine.split(":");
        String type = parts[0].replace("[", "").replace("]", "").toLowerCase();
        String msg = parts[1].trim();
        return String.format("%s (%s)", msg, type);
    }
}
