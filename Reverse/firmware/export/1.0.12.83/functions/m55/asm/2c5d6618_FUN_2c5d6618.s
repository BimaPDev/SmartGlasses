; FUN_2c5d6618 @ 0x2c5d6618 size=44
  push {r3,lr}
  bl 0x2c63e0e0
  vmov s15,r0
  vmov.f64 d6,0x4024000000000000
  vcvt.f64.s32 d7,s15
  vldr.64 d5,[pc,#0x1c]
  vmul.f64 d7,d7,d6
  vdiv.f64 d6,d7,d5
  cdp2 p11,0xb,cr6,cr10,cr6,0x2
  vcvt.s32.f64 s15,d6
  vmov r0,s15
  pop {r3,pc}
