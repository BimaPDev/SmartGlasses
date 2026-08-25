from androguard.core.apk import APK
from androguard.core.dex import DEX

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        if cls.get_name().startswith("Lcom/xjmz/myvu/flutter/pigeon/impl/AirGlassOtaApiImpl"):
            for m in cls.get_methods():
                print("=== METHOD", m.get_name(), m.get_descriptor())
                code = m.get_code()
                if code is None: continue
                for ins in code.get_bc().get_instructions():
                    print("   ", ins.get_name(), ins.get_output())
