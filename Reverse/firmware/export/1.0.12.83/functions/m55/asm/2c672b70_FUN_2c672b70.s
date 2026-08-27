; FUN_2c672b70 @ 0x2c672b70 size=42
  vldr.64 d6,[pc,#0x2c]
  vmov d7,r0,r1
  vldr.64 d5,[pc,#0x2c]
  vmul.f64 d6,d7,d6
  vcvt.u32.f64 s12,d6
  vcvt.f64.u32 d4,s12
  vmov r1,s12
  vfms.f64 d7,d4,d5
  vcvt.u32.f64 s15,d7
  vmov r0,s15
  bx lr
