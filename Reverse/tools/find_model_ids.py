from androguard.core.apk import APK
from androguard.core.dex import DEX

apk_path = "Reverse/extracted/com.upuphone.star.launcher.intl.apk"
a = APK(apk_path)
needles = ["GLASS_DEVICE_ARI_PRO_INTL_MODEL_ID", "GLASS_DEVICE_STAR_CONCEPT_MODEL_ID", "MODEL_ID", "DEVICE_TYPE_"]
seen = set()
for dex_bytes in a.get_all_dex():
    d = DEX(dex_bytes)
    for cls in d.get_classes():
        for m in cls.get_methods():
            code = m.get_code()
            if code is None: continue
            insns = list(code.get_bc().get_instructions())
            txt = " ".join(i.get_output() for i in insns)
            if "MODEL_ID" in txt or "deviceType" in txt and "const-string" in " ".join(i.get_name() for i in insns):
                pass
            # find const-string near sput of MODEL_ID fields
            for i, ins in enumerate(insns):
                out = ins.get_output()
                if "MODEL_ID" in out:
                    ctx = insns[max(0,i-6):i+1]
                    for c in ctx:
                        if c.get_name().startswith("const-string"):
                            key = (cls.get_name(), c.get_output())
                            if key not in seen:
                                seen.add(key)
                                print(cls.get_name(), "::", m.get_name(), "::", c.get_output().strip(), "->", out.strip()[:80])
