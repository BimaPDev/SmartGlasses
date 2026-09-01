package com.google.firebase.heartbeatinfo;

/* JADX INFO: loaded from: classes2.dex */
public interface HeartBeatInfo {
    HeartBeat getHeartBeatCode(String str);

    public enum HeartBeat {
        NONE(0),
        SDK(1),
        GLOBAL(2),
        COMBINED(3);

        private final int code;

        public int getCode() {
            return this.code;
        }

        HeartBeat(int i) {
            this.code = i;
        }
    }
}
