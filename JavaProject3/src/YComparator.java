public class YComparator implements Comparator{
    public int compare(Object a,Object b) {
        Shape A=(Shape)a;
        Shape B=(Shape)b;
        if(A.getY()>B.getY())return -1;
        else if (A.getY()==B.getY()) return 0;
        else return 1;
    }
}

