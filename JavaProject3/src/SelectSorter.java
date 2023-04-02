public class SelectSorter implements Sorter {
    public void sort(Object[] a,Comparator b) {
        for (int i = 0; i < a.length; i++) {
            int poi=i;
            for (int j = i+1; j < a.length; j++) {
                if(b.compare(a[j], a[poi])==-1)
                    poi=j;
            }
            if(poi!=i) {
                Object tem=a[i];
                a[i]=a[poi];
                a[poi]=tem;
            }
        }

    }
}
