package com.fasterxml.jackson.core;

import com.bumptech.glide.load.Key;
import java.io.Serializable;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: classes.dex */
public class JsonLocation implements Serializable {
    public static final int MAX_CONTENT_SNIPPET = 500;

    /* JADX INFO: renamed from: NA */
    public static final JsonLocation f184NA = new JsonLocation(null, -1, -1, -1, -1);
    private static final long serialVersionUID = 1;
    protected final int _columnNr;
    protected final int _lineNr;
    final transient Object _sourceRef;
    protected final long _totalBytes;
    protected final long _totalChars;

    public long getByteOffset() {
        return this._totalBytes;
    }

    public long getCharOffset() {
        return this._totalChars;
    }

    public int getColumnNr() {
        return this._columnNr;
    }

    public int getLineNr() {
        return this._lineNr;
    }

    public Object getSourceRef() {
        return this._sourceRef;
    }

    public JsonLocation(Object obj, long j, int i, int i2) {
        this(obj, -1L, j, i, i2);
    }

    public JsonLocation(Object obj, long j, long j2, int i, int i2) {
        this._sourceRef = obj;
        this._totalBytes = j;
        this._totalChars = j2;
        this._lineNr = i;
        this._columnNr = i2;
    }

    public String sourceDescription() {
        return _appendSourceDesc(new StringBuilder(100)).toString();
    }

    public int hashCode() {
        Object obj = this._sourceRef;
        return ((((obj == null ? 1 : obj.hashCode()) ^ this._lineNr) + this._columnNr) ^ ((int) this._totalChars)) + ((int) this._totalBytes);
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj == null || !(obj instanceof JsonLocation)) {
            return false;
        }
        JsonLocation jsonLocation = (JsonLocation) obj;
        Object obj2 = this._sourceRef;
        if (obj2 == null) {
            if (jsonLocation._sourceRef != null) {
                return false;
            }
        } else if (!obj2.equals(jsonLocation._sourceRef)) {
            return false;
        }
        return this._lineNr == jsonLocation._lineNr && this._columnNr == jsonLocation._columnNr && this._totalChars == jsonLocation._totalChars && getByteOffset() == jsonLocation.getByteOffset();
    }

    public String toString() {
        StringBuilder sb = new StringBuilder(80);
        sb.append("[Source: ");
        _appendSourceDesc(sb);
        sb.append("; line: ");
        sb.append(this._lineNr);
        sb.append(", column: ");
        sb.append(this._columnNr);
        sb.append(']');
        return sb.toString();
    }

    /* JADX WARN: Code duplicated, block: B:30:0x009e  */
    protected StringBuilder _appendSourceDesc(StringBuilder sb) {
        int length;
        int i_append;
        Object obj = this._sourceRef;
        if (obj == null) {
            sb.append("UNKNOWN");
            return sb;
        }
        Class<?> cls = obj instanceof Class ? (Class) obj : obj.getClass();
        String name = cls.getName();
        if (name.startsWith("java.")) {
            name = cls.getSimpleName();
        } else if (obj instanceof byte[]) {
            name = "byte[]";
        } else if (obj instanceof char[]) {
            name = "char[]";
        }
        sb.append('(').append(name).append(')');
        int length2 = 0;
        String str = " chars";
        if (obj instanceof CharSequence) {
            CharSequence charSequence = (CharSequence) obj;
            length = charSequence.length();
            i_append = _append(sb, charSequence.subSequence(0, Math.min(length, MAX_CONTENT_SNIPPET)).toString());
        } else {
            if (obj instanceof char[]) {
                char[] cArr = (char[]) obj;
                length = cArr.length;
                i_append = _append(sb, new String(cArr, 0, Math.min(length, MAX_CONTENT_SNIPPET)));
            } else if (obj instanceof byte[]) {
                byte[] bArr = (byte[]) obj;
                int iMin = Math.min(bArr.length, MAX_CONTENT_SNIPPET);
                _append(sb, new String(bArr, 0, iMin, Charset.forName(Key.STRING_CHARSET_NAME)));
                length2 = bArr.length - iMin;
                str = " bytes";
            }
            if (length2 > 0) {
                sb.append("[truncated ").append(length2).append(str).append(']');
            }
            return sb;
        }
        length2 = length - i_append;
        if (length2 > 0) {
            sb.append("[truncated ").append(length2).append(str).append(']');
        }
        return sb;
    }

    private int _append(StringBuilder sb, String str) {
        sb.append('\"').append(str).append('\"');
        return str.length();
    }
}
