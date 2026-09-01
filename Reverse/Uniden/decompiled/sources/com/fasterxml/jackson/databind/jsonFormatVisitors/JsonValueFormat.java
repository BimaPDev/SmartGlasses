package com.fasterxml.jackson.databind.jsonFormatVisitors;

import androidx.constraintlayout.core.motion.utils.TypedValues;
import com.fasterxml.jackson.annotation.JsonValue;

/* JADX INFO: loaded from: classes.dex */
public enum JsonValueFormat {
    COLOR(TypedValues.Custom.S_COLOR),
    DATE("date"),
    DATE_TIME("date-time"),
    EMAIL("email"),
    HOST_NAME("host-name"),
    IP_ADDRESS("ip-address"),
    IPV6("ipv6"),
    PHONE("phone"),
    REGEX("regex"),
    STYLE("style"),
    TIME("time"),
    URI("uri"),
    UTC_MILLISEC("utc-millisec"),
    UUID("uuid");

    private final String _desc;

    @Override // java.lang.Enum
    @JsonValue
    public String toString() {
        return this._desc;
    }

    JsonValueFormat(String str) {
        this._desc = str;
    }
}
