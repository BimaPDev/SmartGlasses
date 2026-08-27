; FUN_2c0138bc @ 0x2c0138bc size=30
  vmov s14,r0
  vmov.f32 s15,0x3f000000
  vldr.32 s13,[pc,#0x14]
  vcvt.f32.u32 s14,s14,#0xe
  vfma.f32 s15,s14,s13
  vcvt.u32.f32 s15,s15
  vmov r0,s15
  bx lr
