package androidx.constraintlayout.core.widgets;

/* JADX INFO: loaded from: classes.dex */
public class Rectangle {
    public int height;
    public int width;

    /* JADX INFO: renamed from: x */
    public int f46x;

    /* JADX INFO: renamed from: y */
    public int f47y;

    public boolean contains(int i, int i2) {
        int i3;
        int i4 = this.f46x;
        return i >= i4 && i < i4 + this.width && i2 >= (i3 = this.f47y) && i2 < i3 + this.height;
    }

    void grow(int i, int i2) {
        this.f46x -= i;
        this.f47y -= i2;
        this.width += i * 2;
        this.height += i2 * 2;
    }

    public void setBounds(int i, int i2, int i3, int i4) {
        this.f46x = i;
        this.f47y = i2;
        this.width = i3;
        this.height = i4;
    }

    boolean intersects(Rectangle rectangle) {
        int i;
        int i2;
        int i3 = this.f46x;
        int i4 = rectangle.f46x;
        return i3 >= i4 && i3 < i4 + rectangle.width && (i = this.f47y) >= (i2 = rectangle.f47y) && i < i2 + rectangle.height;
    }

    public int getCenterX() {
        return (this.f46x + this.width) / 2;
    }

    public int getCenterY() {
        return (this.f47y + this.height) / 2;
    }
}
