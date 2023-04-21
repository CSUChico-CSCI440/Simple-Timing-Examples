
class javatiming{
    public static void main(String[] args){
        double start = System.nanoTime();
        try { //thread code
            Thread.sleep(10000);
        } catch (InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        double end = System.nanoTime();
        double duration = end - start;
        duration = duration / 1e9; // convert nano seconds to seconds
        String output = String.format("Time taken %.6f seconds", duration);
        System.out.println(output);
    }
}
