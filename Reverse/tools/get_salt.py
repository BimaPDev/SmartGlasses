from androguard.core.apk import APK
from androguard.core.dex import DEX
apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for s in d.get_strings():
        if "RhdNS" in s:
            print(repr(s))
