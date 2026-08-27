; FUN_2c1448c4 @ 0x2c1448c4 size=30
  vmov s14,r0
  vldr.32 s13,[pc,#0x18]
  vcvt.f32.u32 s14,s14,#0xe
  vmov.f32 s15,0x3f000000
  vfma.f32 s15,s14,s13
  vcvt.u32.f32 s15,s15
  vmov r0,s15
  bx lr
