from androguard.core.apk import APK
from androguard.core.dex import DEX
apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        for m in cls.get_methods():
            code = m.get_code()
            if code is None: continue
            outs = [i.get_output() for i in code.get_bc().get_instructions()]
            if any("super-app/latest-version" in o for o in outs):
                print("CALLER:", cls.get_name(), m.get_name())
                for i, o in enumerate(outs):
                    if "latest-version" in o:
                        print("\n".join("  " + x for x in outs[max(0,i-25):i+5]))
