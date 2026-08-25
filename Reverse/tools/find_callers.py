from androguard.core.apk import APK
from androguard.core.dex import DEX

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
needle = "Lcom/upuphone/star/fota/phone/GlassUpdateApiManager;->d(Lcom/upuphone/star/fota/phone/CheckGlassUpdateParamV2;"
needle2 = "CheckGlassUpdateParamV2;-><init>"
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        for m in cls.get_methods():
            code = m.get_code()
            if code is None: continue
            txt = "\n".join(ins.get_name() + " " + ins.get_output() for ins in code.get_bc().get_instructions())
            if needle in txt or needle2 in txt:
                print("###### CALLER:", cls.get_name(), m.get_name())
                print(txt)
                print()
