package com.google.firebase.crashlytics.internal.settings;

import com.google.firebase.crashlytics.internal.Logger;
import com.google.firebase.crashlytics.internal.common.CurrentTimeProvider;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class SettingsJsonParser {
    private final CurrentTimeProvider currentTimeProvider;

    SettingsJsonParser(CurrentTimeProvider currentTimeProvider) {
        this.currentTimeProvider = currentTimeProvider;
    }

    public Settings parseSettingsJson(JSONObject jSONObject) throws JSONException {
        return getJsonTransformForVersion(jSONObject.getInt("settings_version")).buildFromJson(this.currentTimeProvider, jSONObject);
    }

    private static SettingsJsonTransform getJsonTransformForVersion(int i) {
        if (i == 3) {
            return new SettingsV3JsonTransform();
        }
        Logger.getLogger().m454e("Could not determine SettingsJsonTransform for settings version " + i + ". Using default settings values.");
        return new DefaultSettingsJsonTransform();
    }
}
