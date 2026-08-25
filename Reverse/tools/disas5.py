from androguard.core.apk import APK
from androguard.core.dex import DEX

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        if cls.get_name() == "Lcom/upuphone/star/fota/phone/CheckGlassUpdateParamV2;":
            for m in cls.get_methods():
                if m.get_name() == "<init>" and "DefaultConstructorMarker" not in m.get_descriptor():
                    print("=== CheckGlassUpdateParamV2.<init>", m.get_descriptor())
                    for ins in m.get_code().get_bc().get_instructions():
                        print("   ", ins.get_name(), ins.get_output())
