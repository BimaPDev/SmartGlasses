from androguard.core.apk import APK
from androguard.core.dex import DEX

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
targets = {
    "Lcom/upuphone/star/fota/phone/GlassUpdateApiManager$postResult$2;": {"invokeSuspend"},
    "Lcom/upuphone/star/httplib/HttpUtils;": {"h", "b", "a", "c", "d", "e", "f", "g"},
    "Lcom/upuphone/star/httplib/HttpUtils$h$1;": None,
}
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        name = cls.get_name()
        if name in targets:
            wanted = targets[name]
            for m in cls.get_methods():
                if wanted is None or m.get_name() in wanted:
                    print("=== CLASS", name, "METHOD", m.get_name(), m.get_descriptor())
                    code = m.get_code()
                    if code is None:
                        print("  (no code)"); continue
                    for ins in code.get_bc().get_instructions():
                        print("   ", ins.get_name(), ins.get_output())
