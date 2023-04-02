public class XComparator implements Comparator{
    public int compare(Object a,Object b) {
        Shape A=(Shape)a;
        Shape B=(Shape)b;
        if(A.getX()>B.getX())return -1;
        else if (A.getX()==B.getX()) return 0;
        else return 1;
    }
}

