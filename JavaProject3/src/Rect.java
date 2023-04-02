
public class Rect implements Shape {

    private double x1;
    private double y1;
    private double x2;
    private double y2;

    public Rect(double x1, double y1, double x2, double y2)
    {
        this.x1=x1;
        this.y1=y1;
        this.x2=x2;
        this.y2=y2;
    }

    public double area()
    {
        return Math.abs(this.x1-this.x2)*Math.abs(this.y1-this.y2);
    }

    public double getX() {
        return (this.x1+this.x2)/2;
    }

    public double getY() {
        return (this.y1+this.y2)/2;
    }

    public void show() {
        System.out.print("("+this.getX()+","+this.getY()+")"+this.area());
    }
}