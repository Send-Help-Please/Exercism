public class LogLevels {
    
    public static String message(String logLine) {
        String message;

        message = logLine.substring(logLine.indexOf(":") + 2).trim();
        return message;
    }

    public static String logLevel(String logLine) {
        String logLevel;

        logLevel = logLine.substring(logLine.indexOf("[")+1, logLine.indexOf("]")).trim().toLowerCase();
        return logLevel;
    }

    public static String reformat(String logLine) {
        String message;
        String logLevel;
        String reformatted_log;

        message = message(logLine);
        logLevel = logLevel(logLine);

        reformatted_log = message + " (" + logLevel + ")";
        return reformatted_log;
    }
}
