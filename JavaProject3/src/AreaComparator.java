public class AreaComparator implements Comparator{
    public int compare(Object a,Object b) {
        Shape A=(Shape) a;
        Shape B=(Shape) b;
        double aa=A.area(),ba=B.area();
        if(aa>ba) return 1;
        else if(aa<ba) return -1;
        else return 0;
    }
}

