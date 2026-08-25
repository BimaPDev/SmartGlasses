from androguard.core.apk import APK
from androguard.core.dex import DEX
import sys

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
targets = ["GlassUpdateApiManager", "AirGlassOtaApiImpl", "CheckGlassUpdateParam"]
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        name = cls.get_name()
        if any(t in name for t in targets):
            print("CLASS:", name)
            for m in cls.get_methods():
                print("  METHOD:", m.get_name(), m.get_descriptor())
