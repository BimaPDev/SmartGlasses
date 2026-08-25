import sys
from androguard.core.apk import APK
from androguard.core.dex import DEX
from androguard.decompiler.decompile import DvMethod, DvClass

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        if cls.get_name() == "Lcom/upuphone/star/fota/phone/GlassUpdateApiManager;":
            for m in cls.get_methods():
                try:
                    dv = DvMethod(m)
                    dv.process(doAST=True)
                    src = dv.get_source()
                    print("=== METHOD", m.get_name(), m.get_descriptor())
                    print(src)
                except Exception as e:
                    print("=== METHOD", m.get_name(), "FAILED:", e)
