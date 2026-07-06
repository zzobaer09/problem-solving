public class problem07 {
    public static void main(String[] args) {
        long currTime = System.currentTimeMillis();

        long TSec = currTime/1000;

        int currSec = (int) TSec%60;
        
        long TMin = TSec/60;
        int currMin = (int) TMin%60;

        long TH = TMin/60;
        int currH = (int) TH%24;

        System.out.println(""+currH+":"+currMin+":"+currSec);
    }
}
