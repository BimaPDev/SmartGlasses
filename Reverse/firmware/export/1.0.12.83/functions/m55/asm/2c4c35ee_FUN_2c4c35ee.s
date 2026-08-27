; FUN_2c4c35ee @ 0x2c4c35ee size=28
  push {r4,lr}
  vcvt.s32.f32 s15,s15
  ldr r4,[0x2c4c362c]
  vpush {d8}
  sub sp,#0x8
  vmov.f32 s16,s0
  str r4,[sp,#0x0]
  vstr.32 s15,[sp,#0x4]
  bl 0x2c673d88
