package com.google.firebase.crashlytics.internal.model.serialization;

import android.util.Base64;
import android.util.JsonReader;
import com.google.common.base.Ascii;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.firebase.crashlytics.internal.model.AutoCrashlyticsReportEncoder;
import com.google.firebase.crashlytics.internal.model.CrashlyticsReport;
import com.google.firebase.encoders.DataEncoder;
import com.google.firebase.encoders.json.JsonDataEncoderBuilder;
import java.io.IOException;
import java.io.StringReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class CrashlyticsReportJsonTransform {
    private static final DataEncoder CRASHLYTICS_REPORT_JSON_ENCODER = new JsonDataEncoderBuilder().configureWith(AutoCrashlyticsReportEncoder.CONFIG).ignoreNullValues(true).build();

    /* JADX INFO: Access modifiers changed from: private */
    interface ObjectParser<T> {
        T parse(JsonReader jsonReader) throws IOException;
    }

    public String reportToJson(CrashlyticsReport crashlyticsReport) {
        return CRASHLYTICS_REPORT_JSON_ENCODER.encode(crashlyticsReport);
    }

    public String eventToJson(CrashlyticsReport.Session.Event event) {
        return CRASHLYTICS_REPORT_JSON_ENCODER.encode(event);
    }

    public String applicationExitInfoToJson(CrashlyticsReport.ApplicationExitInfo applicationExitInfo) {
        return CRASHLYTICS_REPORT_JSON_ENCODER.encode(applicationExitInfo);
    }

    public CrashlyticsReport reportFromJson(String str) throws IOException {
        try {
            JsonReader jsonReader = new JsonReader(new StringReader(str));
            try {
                CrashlyticsReport report = parseReport(jsonReader);
                jsonReader.close();
                return report;
            } catch (Throwable th) {
                try {
                    jsonReader.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (IllegalStateException e) {
            throw new IOException(e);
        }
    }

    public CrashlyticsReport.Session.Event eventFromJson(String str) throws IOException {
        try {
            JsonReader jsonReader = new JsonReader(new StringReader(str));
            try {
                CrashlyticsReport.Session.Event event = parseEvent(jsonReader);
                jsonReader.close();
                return event;
            } catch (Throwable th) {
                try {
                    jsonReader.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (IllegalStateException e) {
            throw new IOException(e);
        }
    }

    public CrashlyticsReport.ApplicationExitInfo applicationExitInfoFromJson(String str) throws IOException {
        try {
            JsonReader jsonReader = new JsonReader(new StringReader(str));
            try {
                CrashlyticsReport.ApplicationExitInfo appExitInfo = parseAppExitInfo(jsonReader);
                jsonReader.close();
                return appExitInfo;
            } catch (Throwable th) {
                try {
                    jsonReader.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (IllegalStateException e) {
            throw new IOException(e);
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static CrashlyticsReport parseReport(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Builder builder = CrashlyticsReport.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            byte b = -1;
            switch (strNextName.hashCode()) {
                case -2118372775:
                    if (strNextName.equals("ndkPayload")) {
                        b = 0;
                    }
                    break;
                case -1962630338:
                    if (strNextName.equals("sdkVersion")) {
                        b = 1;
                    }
                    break;
                case -1907185581:
                    if (strNextName.equals("appQualitySessionId")) {
                        b = 2;
                    }
                    break;
                case -1375141843:
                    if (strNextName.equals("appExitInfo")) {
                        b = 3;
                    }
                    break;
                case -911706486:
                    if (strNextName.equals("buildVersion")) {
                        b = 4;
                    }
                    break;
                case -401988390:
                    if (strNextName.equals("firebaseAuthenticationToken")) {
                        b = 5;
                    }
                    break;
                case 344431858:
                    if (strNextName.equals("gmpAppId")) {
                        b = 6;
                    }
                    break;
                case 719853845:
                    if (strNextName.equals("installationUuid")) {
                        b = 7;
                    }
                    break;
                case 1047652060:
                    if (strNextName.equals("firebaseInstallationId")) {
                        b = 8;
                    }
                    break;
                case 1874684019:
                    if (strNextName.equals("platform")) {
                        b = 9;
                    }
                    break;
                case 1975623094:
                    if (strNextName.equals("displayVersion")) {
                        b = 10;
                    }
                    break;
                case 1984987798:
                    if (strNextName.equals("session")) {
                        b = Ascii.f294VT;
                    }
                    break;
            }
            switch (b) {
                case 0:
                    builder.setNdkPayload(parseNdkPayload(jsonReader));
                    break;
                case 1:
                    builder.setSdkVersion(jsonReader.nextString());
                    break;
                case 2:
                    builder.setAppQualitySessionId(jsonReader.nextString());
                    break;
                case 3:
                    builder.setAppExitInfo(parseAppExitInfo(jsonReader));
                    break;
                case 4:
                    builder.setBuildVersion(jsonReader.nextString());
                    break;
                case 5:
                    builder.setFirebaseAuthenticationToken(jsonReader.nextString());
                    break;
                case 6:
                    builder.setGmpAppId(jsonReader.nextString());
                    break;
                case 7:
                    builder.setInstallationUuid(jsonReader.nextString());
                    break;
                case 8:
                    builder.setFirebaseInstallationId(jsonReader.nextString());
                    break;
                case 9:
                    builder.setPlatform(jsonReader.nextInt());
                    break;
                case 10:
                    builder.setDisplayVersion(jsonReader.nextString());
                    break;
                case 11:
                    builder.setSession(parseSession(jsonReader));
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static CrashlyticsReport.Session parseSession(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Builder builder = CrashlyticsReport.Session.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            byte b = -1;
            switch (strNextName.hashCode()) {
                case -2128794476:
                    if (strNextName.equals("startedAt")) {
                        b = 0;
                    }
                    break;
                case -1907185581:
                    if (strNextName.equals("appQualitySessionId")) {
                        b = 1;
                    }
                    break;
                case -1618432855:
                    if (strNextName.equals("identifier")) {
                        b = 2;
                    }
                    break;
                case -1606742899:
                    if (strNextName.equals("endedAt")) {
                        b = 3;
                    }
                    break;
                case -1335157162:
                    if (strNextName.equals("device")) {
                        b = 4;
                    }
                    break;
                case -1291329255:
                    if (strNextName.equals("events")) {
                        b = 5;
                    }
                    break;
                case 3556:
                    if (strNextName.equals("os")) {
                        b = 6;
                    }
                    break;
                case 96801:
                    if (strNextName.equals("app")) {
                        b = 7;
                    }
                    break;
                case 3599307:
                    if (strNextName.equals("user")) {
                        b = 8;
                    }
                    break;
                case 286956243:
                    if (strNextName.equals("generator")) {
                        b = 9;
                    }
                    break;
                case 1025385094:
                    if (strNextName.equals("crashed")) {
                        b = 10;
                    }
                    break;
                case 2047016109:
                    if (strNextName.equals("generatorType")) {
                        b = Ascii.f294VT;
                    }
                    break;
            }
            switch (b) {
                case 0:
                    builder.setStartedAt(jsonReader.nextLong());
                    break;
                case 1:
                    builder.setAppQualitySessionId(jsonReader.nextString());
                    break;
                case 2:
                    builder.setIdentifierFromUtf8Bytes(Base64.decode(jsonReader.nextString(), 2));
                    break;
                case 3:
                    builder.setEndedAt(Long.valueOf(jsonReader.nextLong()));
                    break;
                case 4:
                    builder.setDevice(parseDevice(jsonReader));
                    break;
                case 5:
                    builder.setEvents(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda1
                        @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                        public final Object parse(JsonReader jsonReader2) {
                            return CrashlyticsReportJsonTransform.parseEvent(jsonReader2);
                        }
                    }));
                    break;
                case 6:
                    builder.setOs(parseOs(jsonReader));
                    break;
                case 7:
                    builder.setApp(parseApp(jsonReader));
                    break;
                case 8:
                    builder.setUser(parseUser(jsonReader));
                    break;
                case 9:
                    builder.setGenerator(jsonReader.nextString());
                    break;
                case 10:
                    builder.setCrashed(jsonReader.nextBoolean());
                    break;
                case 11:
                    builder.setGeneratorType(jsonReader.nextInt());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.FilesPayload parseNdkPayload(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.FilesPayload.Builder builder = CrashlyticsReport.FilesPayload.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            if (strNextName.equals("files")) {
                builder.setFiles(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda4
                    @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                    public final Object parse(JsonReader jsonReader2) {
                        return CrashlyticsReportJsonTransform.parseFile(jsonReader2);
                    }
                }));
            } else if (strNextName.equals("orgId")) {
                builder.setOrgId(jsonReader.nextString());
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.ApplicationExitInfo parseAppExitInfo(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.ApplicationExitInfo.Builder builder = CrashlyticsReport.ApplicationExitInfo.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "buildIdMappingForArch":
                    builder.setBuildIdMappingForArch(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda8
                        @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                        public final Object parse(JsonReader jsonReader2) {
                            return CrashlyticsReportJsonTransform.parseBuildIdMappingForArch(jsonReader2);
                        }
                    }));
                    break;
                case "pid":
                    builder.setPid(jsonReader.nextInt());
                    break;
                case "pss":
                    builder.setPss(jsonReader.nextLong());
                    break;
                case "rss":
                    builder.setRss(jsonReader.nextLong());
                    break;
                case "timestamp":
                    builder.setTimestamp(jsonReader.nextLong());
                    break;
                case "processName":
                    builder.setProcessName(jsonReader.nextString());
                    break;
                case "reasonCode":
                    builder.setReasonCode(jsonReader.nextInt());
                    break;
                case "traceFile":
                    builder.setTraceFile(jsonReader.nextString());
                    break;
                case "importance":
                    builder.setImportance(jsonReader.nextInt());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.FilesPayload.File parseFile(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.FilesPayload.File.Builder builder = CrashlyticsReport.FilesPayload.File.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            if (strNextName.equals("filename")) {
                builder.setFilename(jsonReader.nextString());
            } else if (strNextName.equals("contents")) {
                builder.setContents(Base64.decode(jsonReader.nextString(), 2));
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.User parseUser(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.User.Builder builder = CrashlyticsReport.Session.User.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            if (jsonReader.nextName().equals("identifier")) {
                builder.setIdentifier(jsonReader.nextString());
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Application parseApp(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Application.Builder builder = CrashlyticsReport.Session.Application.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "identifier":
                    builder.setIdentifier(jsonReader.nextString());
                    break;
                case "developmentPlatform":
                    builder.setDevelopmentPlatform(jsonReader.nextString());
                    break;
                case "developmentPlatformVersion":
                    builder.setDevelopmentPlatformVersion(jsonReader.nextString());
                    break;
                case "version":
                    builder.setVersion(jsonReader.nextString());
                    break;
                case "installationUuid":
                    builder.setInstallationUuid(jsonReader.nextString());
                    break;
                case "displayVersion":
                    builder.setDisplayVersion(jsonReader.nextString());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.OperatingSystem parseOs(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.OperatingSystem.Builder builder = CrashlyticsReport.Session.OperatingSystem.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "buildVersion":
                    builder.setBuildVersion(jsonReader.nextString());
                    break;
                case "jailbroken":
                    builder.setJailbroken(jsonReader.nextBoolean());
                    break;
                case "version":
                    builder.setVersion(jsonReader.nextString());
                    break;
                case "platform":
                    builder.setPlatform(jsonReader.nextInt());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Device parseDevice(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Device.Builder builder = CrashlyticsReport.Session.Device.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "simulator":
                    builder.setSimulator(jsonReader.nextBoolean());
                    break;
                case "manufacturer":
                    builder.setManufacturer(jsonReader.nextString());
                    break;
                case "ram":
                    builder.setRam(jsonReader.nextLong());
                    break;
                case "arch":
                    builder.setArch(jsonReader.nextInt());
                    break;
                case "diskSpace":
                    builder.setDiskSpace(jsonReader.nextLong());
                    break;
                case "cores":
                    builder.setCores(jsonReader.nextInt());
                    break;
                case "model":
                    builder.setModel(jsonReader.nextString());
                    break;
                case "state":
                    builder.setState(jsonReader.nextInt());
                    break;
                case "modelClass":
                    builder.setModelClass(jsonReader.nextString());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.Session.Event parseEvent(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Builder builder = CrashlyticsReport.Session.Event.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "device":
                    builder.setDevice(parseEventDevice(jsonReader));
                    break;
                case "rollouts":
                    builder.setRollouts(parseEventRolloutsState(jsonReader));
                    break;
                case "app":
                    builder.setApp(parseEventApp(jsonReader));
                    break;
                case "log":
                    builder.setLog(parseEventLog(jsonReader));
                    break;
                case "type":
                    builder.setType(jsonReader.nextString());
                    break;
                case "timestamp":
                    builder.setTimestamp(jsonReader.nextLong());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.Application parseEventApp(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.Builder builder = CrashlyticsReport.Session.Event.Application.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "appProcessDetails":
                    builder.setAppProcessDetails(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda7
                        @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                        public final Object parse(JsonReader jsonReader2) {
                            return CrashlyticsReportJsonTransform.parseProcessDetails(jsonReader2);
                        }
                    }));
                    break;
                case "background":
                    builder.setBackground(Boolean.valueOf(jsonReader.nextBoolean()));
                    break;
                case "execution":
                    builder.setExecution(parseEventExecution(jsonReader));
                    break;
                case "internalKeys":
                    builder.setInternalKeys(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda6
                        @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                        public final Object parse(JsonReader jsonReader2) {
                            return CrashlyticsReportJsonTransform.parseCustomAttribute(jsonReader2);
                        }
                    }));
                    break;
                case "customAttributes":
                    builder.setCustomAttributes(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda6
                        @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                        public final Object parse(JsonReader jsonReader2) {
                            return CrashlyticsReportJsonTransform.parseCustomAttribute(jsonReader2);
                        }
                    }));
                    break;
                case "uiOrientation":
                    builder.setUiOrientation(jsonReader.nextInt());
                    break;
                case "currentProcessDetails":
                    builder.setCurrentProcessDetails(parseProcessDetails(jsonReader));
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.Session.Event.Application.ProcessDetails parseProcessDetails(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.ProcessDetails.Builder builder = CrashlyticsReport.Session.Event.Application.ProcessDetails.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "pid":
                    builder.setPid(jsonReader.nextInt());
                    break;
                case "processName":
                    builder.setProcessName(jsonReader.nextString());
                    break;
                case "defaultProcess":
                    builder.setDefaultProcess(jsonReader.nextBoolean());
                    break;
                case "importance":
                    builder.setImportance(jsonReader.nextInt());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.Application.Execution parseEventExecution(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.Execution.Builder builder = CrashlyticsReport.Session.Event.Application.Execution.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "appExitInfo":
                    builder.setAppExitInfo(parseAppExitInfo(jsonReader));
                    break;
                case "threads":
                    builder.setThreads(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda2
                        @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                        public final Object parse(JsonReader jsonReader2) {
                            return CrashlyticsReportJsonTransform.parseEventThread(jsonReader2);
                        }
                    }));
                    break;
                case "signal":
                    builder.setSignal(parseEventSignal(jsonReader));
                    break;
                case "binaries":
                    builder.setBinaries(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda3
                        @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                        public final Object parse(JsonReader jsonReader2) {
                            return CrashlyticsReportJsonTransform.parseEventBinaryImage(jsonReader2);
                        }
                    }));
                    break;
                case "exception":
                    builder.setException(parseEventExecutionException(jsonReader));
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.Application.Execution.Exception parseEventExecutionException(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.Execution.Exception.Builder builder = CrashlyticsReport.Session.Event.Application.Execution.Exception.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "frames":
                    builder.setFrames(parseArray(jsonReader, new CrashlyticsReportJsonTransform$$ExternalSyntheticLambda0()));
                    break;
                case "reason":
                    builder.setReason(jsonReader.nextString());
                    break;
                case "type":
                    builder.setType(jsonReader.nextString());
                    break;
                case "causedBy":
                    builder.setCausedBy(parseEventExecutionException(jsonReader));
                    break;
                case "overflowCount":
                    builder.setOverflowCount(jsonReader.nextInt());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.Application.Execution.Signal parseEventSignal(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.Execution.Signal.Builder builder = CrashlyticsReport.Session.Event.Application.Execution.Signal.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "address":
                    builder.setAddress(jsonReader.nextLong());
                    break;
                case "code":
                    builder.setCode(jsonReader.nextString());
                    break;
                case "name":
                    builder.setName(jsonReader.nextString());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.Session.Event.Application.Execution.BinaryImage parseEventBinaryImage(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.Execution.BinaryImage.Builder builder = CrashlyticsReport.Session.Event.Application.Execution.BinaryImage.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "name":
                    builder.setName(jsonReader.nextString());
                    break;
                case "size":
                    builder.setSize(jsonReader.nextLong());
                    break;
                case "uuid":
                    builder.setUuidFromUtf8Bytes(Base64.decode(jsonReader.nextString(), 2));
                    break;
                case "baseAddress":
                    builder.setBaseAddress(jsonReader.nextLong());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.Session.Event.Application.Execution.Thread parseEventThread(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.Execution.Thread.Builder builder = CrashlyticsReport.Session.Event.Application.Execution.Thread.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "frames":
                    builder.setFrames(parseArray(jsonReader, new CrashlyticsReportJsonTransform$$ExternalSyntheticLambda0()));
                    break;
                case "name":
                    builder.setName(jsonReader.nextString());
                    break;
                case "importance":
                    builder.setImportance(jsonReader.nextInt());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.Session.Event.Application.Execution.Thread.Frame parseEventFrame(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Application.Execution.Thread.Frame.Builder builder = CrashlyticsReport.Session.Event.Application.Execution.Thread.Frame.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "offset":
                    builder.setOffset(jsonReader.nextLong());
                    break;
                case "symbol":
                    builder.setSymbol(jsonReader.nextString());
                    break;
                case "pc":
                    builder.setPc(jsonReader.nextLong());
                    break;
                case "file":
                    builder.setFile(jsonReader.nextString());
                    break;
                case "importance":
                    builder.setImportance(jsonReader.nextInt());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.Device parseEventDevice(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Device.Builder builder = CrashlyticsReport.Session.Event.Device.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "batteryLevel":
                    builder.setBatteryLevel(Double.valueOf(jsonReader.nextDouble()));
                    break;
                case "batteryVelocity":
                    builder.setBatteryVelocity(jsonReader.nextInt());
                    break;
                case "orientation":
                    builder.setOrientation(jsonReader.nextInt());
                    break;
                case "diskUsed":
                    builder.setDiskUsed(jsonReader.nextLong());
                    break;
                case "ramUsed":
                    builder.setRamUsed(jsonReader.nextLong());
                    break;
                case "proximityOn":
                    builder.setProximityOn(jsonReader.nextBoolean());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.Log parseEventLog(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.Log.Builder builder = CrashlyticsReport.Session.Event.Log.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            if (jsonReader.nextName().equals(FirebaseAnalytics.Param.CONTENT)) {
                builder.setContent(jsonReader.nextString());
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.RolloutsState parseEventRolloutsState(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.RolloutsState.Builder builder = CrashlyticsReport.Session.Event.RolloutsState.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            if (strNextName.equals("assignments")) {
                builder.setRolloutAssignments(parseArray(jsonReader, new ObjectParser() { // from class: com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform$$ExternalSyntheticLambda5
                    @Override // com.google.firebase.crashlytics.internal.model.serialization.CrashlyticsReportJsonTransform.ObjectParser
                    public final Object parse(JsonReader jsonReader2) {
                        return CrashlyticsReportJsonTransform.parseEventRolloutsAssignment(jsonReader2);
                    }
                }));
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.Session.Event.RolloutAssignment parseEventRolloutsAssignment(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.RolloutAssignment.Builder builder = CrashlyticsReport.Session.Event.RolloutAssignment.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "parameterKey":
                    builder.setParameterKey(jsonReader.nextString());
                    break;
                case "templateVersion":
                    builder.setTemplateVersion(jsonReader.nextLong());
                    break;
                case "rolloutVariant":
                    builder.setRolloutVariant(parseRolloutAssignmentRolloutVariant(jsonReader));
                    break;
                case "parameterValue":
                    builder.setParameterValue(jsonReader.nextString());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static CrashlyticsReport.Session.Event.RolloutAssignment.RolloutVariant parseRolloutAssignmentRolloutVariant(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.Session.Event.RolloutAssignment.RolloutVariant.Builder builder = CrashlyticsReport.Session.Event.RolloutAssignment.RolloutVariant.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            if (strNextName.equals("variantId")) {
                builder.setVariantId(jsonReader.nextString());
            } else if (strNextName.equals("rolloutId")) {
                builder.setRolloutId(jsonReader.nextString());
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.CustomAttribute parseCustomAttribute(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.CustomAttribute.Builder builder = CrashlyticsReport.CustomAttribute.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            if (strNextName.equals("key")) {
                builder.setKey(jsonReader.nextString());
            } else if (strNextName.equals("value")) {
                builder.setValue(jsonReader.nextString());
            } else {
                jsonReader.skipValue();
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static CrashlyticsReport.ApplicationExitInfo.BuildIdMappingForArch parseBuildIdMappingForArch(JsonReader jsonReader) throws IOException {
        CrashlyticsReport.ApplicationExitInfo.BuildIdMappingForArch.Builder builder = CrashlyticsReport.ApplicationExitInfo.BuildIdMappingForArch.builder();
        jsonReader.beginObject();
        while (jsonReader.hasNext()) {
            String strNextName = jsonReader.nextName();
            strNextName.hashCode();
            switch (strNextName) {
                case "libraryName":
                    builder.setLibraryName(jsonReader.nextString());
                    break;
                case "arch":
                    builder.setArch(jsonReader.nextString());
                    break;
                case "buildId":
                    builder.setBuildId(jsonReader.nextString());
                    break;
                default:
                    jsonReader.skipValue();
                    break;
            }
        }
        jsonReader.endObject();
        return builder.build();
    }

    private static <T> List<T> parseArray(JsonReader jsonReader, ObjectParser<T> objectParser) throws IOException {
        ArrayList arrayList = new ArrayList();
        jsonReader.beginArray();
        while (jsonReader.hasNext()) {
            arrayList.add(objectParser.parse(jsonReader));
        }
        jsonReader.endArray();
        return Collections.unmodifiableList(arrayList);
    }
}
