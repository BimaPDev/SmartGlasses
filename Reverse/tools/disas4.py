from androguard.core.apk import APK
from androguard.core.dex import DEX

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
targets = {
    "Lcom/upuphone/star/httplib/UtilExtKt;": {"d"},
    "Lcom/upuphone/star/httplib/HttpUtils;": {"i"},
}
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        name = cls.get_name()
        if name in targets:
            for m in cls.get_methods():
                if m.get_name() in targets[name]:
                    print("=== CLASS", name, "METHOD", m.get_name(), m.get_descriptor())
                    code = m.get_code()
                    if code is None: continue
                    for ins in code.get_bc().get_instructions():
                        print("   ", ins.get_name(), ins.get_output())
        if name == "Lcom/upuphone/star/fota/phone/CheckGlassUpdateParamV2;":
            for f in cls.get_fields():
                print("FIELD:", f.get_name())
