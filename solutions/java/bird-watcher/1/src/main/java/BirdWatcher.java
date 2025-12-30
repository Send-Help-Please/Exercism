
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        int[] birdCount = {0, 2, 5, 3, 7, 8, 4} ;
        return birdCount ;
    }

    public int getToday() {
        return birdsPerDay[birdsPerDay.length - 1];
    }

    public void incrementTodaysCount() {
        int lastIndex = birdsPerDay.length;
        birdsPerDay[birdsPerDay.length - 1] ++ ;
    }

    public boolean hasDayWithoutBirds() {
        for(int day: birdsPerDay) {
            if (day == 0) {
                return true;
            }
        }
        return false;
    }

    public int getCountForFirstDays(int numberOfDays) {
        int countBirds = 0;
        if (birdsPerDay.length < numberOfDays) {
            for(int birdsADay:birdsPerDay) {
                countBirds = countBirds + birdsADay;
            }
        } else {
            for (int i = 0; i <= numberOfDays - 1; i ++) {
                countBirds = countBirds + birdsPerDay[i];
            }
        }
        return countBirds;
    }

    public int getBusyDays() {
        int countBusyDays = 0;
        for (int birdsADay:birdsPerDay) {
            if (birdsADay >= 5) {
                countBusyDays ++;
            }
        }
        return countBusyDays;
    }
}
