package com.fasterxml.jackson.core.p003io;

import androidx.exifinterface.media.ExifInterface;

/* JADX INFO: loaded from: classes.dex */
public final class NumberOutput {
    private static int BILLION = 1000000000;
    private static long BILLION_L = 1000000000;
    private static long MAX_INT_AS_LONG = 2147483647L;
    private static int MILLION = 1000000;
    private static long MIN_INT_AS_LONG = -2147483648L;
    static final String SMALLEST_INT = String.valueOf(Integer.MIN_VALUE);
    static final String SMALLEST_LONG = String.valueOf(Long.MIN_VALUE);
    private static final int[] TRIPLET_TO_CHARS = new int[1000];
    private static final String[] sSmallIntStrs;
    private static final String[] sSmallIntStrs2;

    static {
        int i = 0;
        for (int i2 = 0; i2 < 10; i2++) {
            for (int i3 = 0; i3 < 10; i3++) {
                int i4 = 0;
                while (i4 < 10) {
                    TRIPLET_TO_CHARS[i] = ((i2 + 48) << 16) | ((i3 + 48) << 8) | (i4 + 48);
                    i4++;
                    i++;
                }
            }
        }
        sSmallIntStrs = new String[]{"0", "1", ExifInterface.GPS_MEASUREMENT_2D, ExifInterface.GPS_MEASUREMENT_3D, "4", "5", "6", "7", "8", "9", "10"};
        sSmallIntStrs2 = new String[]{"-1", "-2", "-3", "-4", "-5", "-6", "-7", "-8", "-9", "-10"};
    }

    public static int outputInt(int i, char[] cArr, int i2) {
        int i3;
        if (i < 0) {
            if (i == Integer.MIN_VALUE) {
                return _outputSmallestI(cArr, i2);
            }
            cArr[i2] = '-';
            i = -i;
            i2++;
        }
        if (i < MILLION) {
            if (i >= 1000) {
                int i4 = i / 1000;
                return _full3(i - (i4 * 1000), cArr, _leading3(i4, cArr, i2));
            }
            if (i < 10) {
                cArr[i2] = (char) (i + 48);
                return i2 + 1;
            }
            return _leading3(i, cArr, i2);
        }
        int i5 = BILLION;
        if (i >= i5) {
            int i6 = i - i5;
            if (i6 >= i5) {
                i6 -= i5;
                i3 = i2 + 1;
                cArr[i2] = '2';
            } else {
                i3 = i2 + 1;
                cArr[i2] = '1';
            }
            return _outputFullBillion(i6, cArr, i3);
        }
        int i7 = i / 1000;
        int i8 = i7 / 1000;
        return _full3(i - (i7 * 1000), cArr, _full3(i7 - (i8 * 1000), cArr, _leading3(i8, cArr, i2)));
    }

    public static int outputInt(int i, byte[] bArr, int i2) {
        int i3;
        if (i < 0) {
            if (i == Integer.MIN_VALUE) {
                return _outputSmallestI(bArr, i2);
            }
            bArr[i2] = 45;
            i = -i;
            i2++;
        }
        if (i < MILLION) {
            if (i >= 1000) {
                int i4 = i / 1000;
                return _full3(i - (i4 * 1000), bArr, _leading3(i4, bArr, i2));
            }
            if (i < 10) {
                int i5 = i2 + 1;
                bArr[i2] = (byte) (i + 48);
                return i5;
            }
            return _leading3(i, bArr, i2);
        }
        int i6 = BILLION;
        if (i >= i6) {
            int i7 = i - i6;
            if (i7 >= i6) {
                i7 -= i6;
                i3 = i2 + 1;
                bArr[i2] = 50;
            } else {
                i3 = i2 + 1;
                bArr[i2] = 49;
            }
            return _outputFullBillion(i7, bArr, i3);
        }
        int i8 = i / 1000;
        int i9 = i8 / 1000;
        return _full3(i - (i8 * 1000), bArr, _full3(i8 - (i9 * 1000), bArr, _leading3(i9, bArr, i2)));
    }

    public static int outputLong(long j, char[] cArr, int i) {
        int i_outputFullBillion;
        if (j < 0) {
            if (j > MIN_INT_AS_LONG) {
                return outputInt((int) j, cArr, i);
            }
            if (j == Long.MIN_VALUE) {
                return _outputSmallestL(cArr, i);
            }
            cArr[i] = '-';
            j = -j;
            i++;
        } else if (j <= MAX_INT_AS_LONG) {
            return outputInt((int) j, cArr, i);
        }
        long j2 = BILLION_L;
        long j3 = j / j2;
        long j4 = j - (j3 * j2);
        if (j3 < j2) {
            i_outputFullBillion = _outputUptoBillion((int) j3, cArr, i);
        } else {
            long j5 = j3 / j2;
            int i_leading3 = _leading3((int) j5, cArr, i);
            i_outputFullBillion = _outputFullBillion((int) (j3 - (j2 * j5)), cArr, i_leading3);
        }
        return _outputFullBillion((int) j4, cArr, i_outputFullBillion);
    }

    public static int outputLong(long j, byte[] bArr, int i) {
        int i_outputFullBillion;
        if (j < 0) {
            if (j > MIN_INT_AS_LONG) {
                return outputInt((int) j, bArr, i);
            }
            if (j == Long.MIN_VALUE) {
                return _outputSmallestL(bArr, i);
            }
            bArr[i] = 45;
            j = -j;
            i++;
        } else if (j <= MAX_INT_AS_LONG) {
            return outputInt((int) j, bArr, i);
        }
        long j2 = BILLION_L;
        long j3 = j / j2;
        long j4 = j - (j3 * j2);
        if (j3 < j2) {
            i_outputFullBillion = _outputUptoBillion((int) j3, bArr, i);
        } else {
            long j5 = j3 / j2;
            int i_leading3 = _leading3((int) j5, bArr, i);
            i_outputFullBillion = _outputFullBillion((int) (j3 - (j2 * j5)), bArr, i_leading3);
        }
        return _outputFullBillion((int) j4, bArr, i_outputFullBillion);
    }

    public static String toString(int i) {
        String[] strArr = sSmallIntStrs;
        if (i < strArr.length) {
            if (i >= 0) {
                return strArr[i];
            }
            int i2 = (-i) - 1;
            String[] strArr2 = sSmallIntStrs2;
            if (i2 < strArr2.length) {
                return strArr2[i2];
            }
        }
        return Integer.toString(i);
    }

    public static String toString(long j) {
        if (j <= 2147483647L && j >= -2147483648L) {
            return toString((int) j);
        }
        return Long.toString(j);
    }

    public static String toString(double d) {
        return Double.toString(d);
    }

    public static String toString(float f) {
        return Float.toString(f);
    }

    public static boolean notFinite(double d) {
        return Double.isNaN(d) || Double.isInfinite(d);
    }

    public static boolean notFinite(float f) {
        return Float.isNaN(f) || Float.isInfinite(f);
    }

    private static int _outputUptoBillion(int i, char[] cArr, int i2) {
        if (i < MILLION) {
            if (i < 1000) {
                return _leading3(i, cArr, i2);
            }
            int i3 = i / 1000;
            return _outputUptoMillion(cArr, i2, i3, i - (i3 * 1000));
        }
        int i4 = i / 1000;
        int i5 = i - (i4 * 1000);
        int i6 = i4 / 1000;
        int i7 = i4 - (i6 * 1000);
        int i_leading3 = _leading3(i6, cArr, i2);
        int[] iArr = TRIPLET_TO_CHARS;
        int i8 = iArr[i7];
        cArr[i_leading3] = (char) (i8 >> 16);
        cArr[i_leading3 + 1] = (char) ((i8 >> 8) & 127);
        cArr[i_leading3 + 2] = (char) (i8 & 127);
        int i9 = iArr[i5];
        cArr[i_leading3 + 3] = (char) (i9 >> 16);
        int i10 = i_leading3 + 5;
        cArr[i_leading3 + 4] = (char) ((i9 >> 8) & 127);
        int i11 = i_leading3 + 6;
        cArr[i10] = (char) (i9 & 127);
        return i11;
    }

    private static int _outputFullBillion(int i, char[] cArr, int i2) {
        int i3 = i / 1000;
        int i4 = i - (i3 * 1000);
        int i5 = i3 / 1000;
        int[] iArr = TRIPLET_TO_CHARS;
        int i6 = iArr[i5];
        cArr[i2] = (char) (i6 >> 16);
        cArr[i2 + 1] = (char) ((i6 >> 8) & 127);
        cArr[i2 + 2] = (char) (i6 & 127);
        int i7 = iArr[i3 - (i5 * 1000)];
        cArr[i2 + 3] = (char) (i7 >> 16);
        cArr[i2 + 4] = (char) ((i7 >> 8) & 127);
        cArr[i2 + 5] = (char) (i7 & 127);
        int i8 = iArr[i4];
        cArr[i2 + 6] = (char) (i8 >> 16);
        int i9 = i2 + 8;
        cArr[i2 + 7] = (char) ((i8 >> 8) & 127);
        int i10 = i2 + 9;
        cArr[i9] = (char) (i8 & 127);
        return i10;
    }

    private static int _outputUptoBillion(int i, byte[] bArr, int i2) {
        if (i < MILLION) {
            if (i < 1000) {
                return _leading3(i, bArr, i2);
            }
            int i3 = i / 1000;
            return _outputUptoMillion(bArr, i2, i3, i - (i3 * 1000));
        }
        int i4 = i / 1000;
        int i5 = i - (i4 * 1000);
        int i6 = i4 / 1000;
        int i7 = i4 - (i6 * 1000);
        int i_leading3 = _leading3(i6, bArr, i2);
        int[] iArr = TRIPLET_TO_CHARS;
        int i8 = iArr[i7];
        bArr[i_leading3] = (byte) (i8 >> 16);
        bArr[i_leading3 + 1] = (byte) (i8 >> 8);
        bArr[i_leading3 + 2] = (byte) i8;
        int i9 = iArr[i5];
        bArr[i_leading3 + 3] = (byte) (i9 >> 16);
        int i10 = i_leading3 + 5;
        bArr[i_leading3 + 4] = (byte) (i9 >> 8);
        int i11 = i_leading3 + 6;
        bArr[i10] = (byte) i9;
        return i11;
    }

    private static int _outputFullBillion(int i, byte[] bArr, int i2) {
        int i3 = i / 1000;
        int i4 = i - (i3 * 1000);
        int i5 = i3 / 1000;
        int i6 = i3 - (i5 * 1000);
        int[] iArr = TRIPLET_TO_CHARS;
        int i7 = iArr[i5];
        bArr[i2] = (byte) (i7 >> 16);
        bArr[i2 + 1] = (byte) (i7 >> 8);
        bArr[i2 + 2] = (byte) i7;
        int i8 = iArr[i6];
        bArr[i2 + 3] = (byte) (i8 >> 16);
        bArr[i2 + 4] = (byte) (i8 >> 8);
        bArr[i2 + 5] = (byte) i8;
        int i9 = iArr[i4];
        bArr[i2 + 6] = (byte) (i9 >> 16);
        int i10 = i2 + 8;
        bArr[i2 + 7] = (byte) (i9 >> 8);
        int i11 = i2 + 9;
        bArr[i10] = (byte) i9;
        return i11;
    }

    private static int _outputUptoMillion(char[] cArr, int i, int i2, int i3) {
        int[] iArr = TRIPLET_TO_CHARS;
        int i4 = iArr[i2];
        if (i2 > 9) {
            if (i2 > 99) {
                cArr[i] = (char) (i4 >> 16);
                i++;
            }
            cArr[i] = (char) ((i4 >> 8) & 127);
            i++;
        }
        cArr[i] = (char) (i4 & 127);
        int i5 = iArr[i3];
        cArr[i + 1] = (char) (i5 >> 16);
        int i6 = i + 3;
        cArr[i + 2] = (char) ((i5 >> 8) & 127);
        int i7 = i + 4;
        cArr[i6] = (char) (i5 & 127);
        return i7;
    }

    private static int _outputUptoMillion(byte[] bArr, int i, int i2, int i3) {
        int[] iArr = TRIPLET_TO_CHARS;
        int i4 = iArr[i2];
        if (i2 > 9) {
            if (i2 > 99) {
                bArr[i] = (byte) (i4 >> 16);
                i++;
            }
            bArr[i] = (byte) (i4 >> 8);
            i++;
        }
        bArr[i] = (byte) i4;
        int i5 = iArr[i3];
        bArr[i + 1] = (byte) (i5 >> 16);
        int i6 = i + 3;
        bArr[i + 2] = (byte) (i5 >> 8);
        int i7 = i + 4;
        bArr[i6] = (byte) i5;
        return i7;
    }

    private static int _leading3(int i, char[] cArr, int i2) {
        int i3 = TRIPLET_TO_CHARS[i];
        if (i > 9) {
            if (i > 99) {
                cArr[i2] = (char) (i3 >> 16);
                i2++;
            }
            cArr[i2] = (char) ((i3 >> 8) & 127);
            i2++;
        }
        int i4 = i2 + 1;
        cArr[i2] = (char) (i3 & 127);
        return i4;
    }

    private static int _leading3(int i, byte[] bArr, int i2) {
        int i3 = TRIPLET_TO_CHARS[i];
        if (i > 9) {
            if (i > 99) {
                bArr[i2] = (byte) (i3 >> 16);
                i2++;
            }
            bArr[i2] = (byte) (i3 >> 8);
            i2++;
        }
        int i4 = i2 + 1;
        bArr[i2] = (byte) i3;
        return i4;
    }

    private static int _full3(int i, char[] cArr, int i2) {
        int i3 = TRIPLET_TO_CHARS[i];
        cArr[i2] = (char) (i3 >> 16);
        int i4 = i2 + 2;
        cArr[i2 + 1] = (char) ((i3 >> 8) & 127);
        int i5 = i2 + 3;
        cArr[i4] = (char) (i3 & 127);
        return i5;
    }

    private static int _full3(int i, byte[] bArr, int i2) {
        int i3 = TRIPLET_TO_CHARS[i];
        bArr[i2] = (byte) (i3 >> 16);
        int i4 = i2 + 2;
        bArr[i2 + 1] = (byte) (i3 >> 8);
        int i5 = i2 + 3;
        bArr[i4] = (byte) i3;
        return i5;
    }

    private static int _outputSmallestL(char[] cArr, int i) {
        String str = SMALLEST_LONG;
        int length = str.length();
        str.getChars(0, length, cArr, i);
        return i + length;
    }

    private static int _outputSmallestL(byte[] bArr, int i) {
        int length = SMALLEST_LONG.length();
        int i2 = 0;
        while (i2 < length) {
            bArr[i] = (byte) SMALLEST_LONG.charAt(i2);
            i2++;
            i++;
        }
        return i;
    }

    private static int _outputSmallestI(char[] cArr, int i) {
        String str = SMALLEST_INT;
        int length = str.length();
        str.getChars(0, length, cArr, i);
        return i + length;
    }

    private static int _outputSmallestI(byte[] bArr, int i) {
        int length = SMALLEST_INT.length();
        int i2 = 0;
        while (i2 < length) {
            bArr[i] = (byte) SMALLEST_INT.charAt(i2);
            i2++;
            i++;
        }
        return i;
    }
}
