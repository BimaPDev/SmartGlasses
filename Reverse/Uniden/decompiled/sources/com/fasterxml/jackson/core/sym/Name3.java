package com.fasterxml.jackson.core.sym;

/* JADX INFO: loaded from: classes.dex */
public final class Name3 extends Name {

    /* JADX INFO: renamed from: q1 */
    private final int f194q1;

    /* JADX INFO: renamed from: q2 */
    private final int f195q2;

    /* JADX INFO: renamed from: q3 */
    private final int f196q3;

    @Override // com.fasterxml.jackson.core.sym.Name
    public boolean equals(int i) {
        return false;
    }

    @Override // com.fasterxml.jackson.core.sym.Name
    public boolean equals(int i, int i2) {
        return false;
    }

    @Override // com.fasterxml.jackson.core.sym.Name
    public boolean equals(int i, int i2, int i3) {
        return this.f194q1 == i && this.f195q2 == i2 && this.f196q3 == i3;
    }

    Name3(String str, int i, int i2, int i3, int i4) {
        super(str, i);
        this.f194q1 = i2;
        this.f195q2 = i3;
        this.f196q3 = i4;
    }

    @Override // com.fasterxml.jackson.core.sym.Name
    public boolean equals(int[] iArr, int i) {
        return i == 3 && iArr[0] == this.f194q1 && iArr[1] == this.f195q2 && iArr[2] == this.f196q3;
    }
}
