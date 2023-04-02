public class Main {
    public static void main(String[] args)
    {
        Circle[] circles = new Circle[10];
        Rect[]   rects = new Rect[10];
        for (int i = 0; i < circles.length; i ++) {
            circles[i] = new Circle(Math.random() * 100, Math.random() * 100, Math.random() * 100);
            rects[i] = new Rect(Math.random() * 100, Math.random() * 100, Math.random() * 100, Math.random() * 100);
        }

        Sorter sorter = new SelectSorter();
        Comparator c1 = new AreaComparator();
        Comparator c2 = new XComparator();
        Comparator c3 = new YComparator();

        sorter.sort(circles, c1);
        sorter.sort(rects, c1);
        System.out.println("按Area排序");
        for (int i = 0; i < circles.length; i ++) {
            System.out.print("第"+(i+1)+":");
            circles[i].show();
            System.out.print(' ');
        }
        System.out.println();
        for (int i = 0; i < rects.length; i ++) {
            System.out.print("第"+(i+1)+":");
            rects[i].show();
            System.out.print(' ');
        }
        System.out.println();


        sorter.sort(circles, c2);
        sorter.sort(rects, c2);
        System.out.println("按中心X坐标排序");
        for (int i = 0; i < circles.length; i ++) {
            circles[i].show();
            System.out.print(' ');
        }
        System.out.println();
        for (int i = 0; i < rects.length; i ++) {
            rects[i].show();
            System.out.print(' ');
        }
        System.out.println();


        sorter.sort(circles, c3);
        sorter.sort(rects, c3);
        System.out.println("按中心Y坐标排序");
        for (int i = 0; i < circles.length; i ++) {
            circles[i].show();
            System.out.print(' ');
        }
        System.out.println();
        for (int i = 0; i < rects.length; i ++) {
            rects[i].show();
            System.out.print(' ');
        }
    }
}