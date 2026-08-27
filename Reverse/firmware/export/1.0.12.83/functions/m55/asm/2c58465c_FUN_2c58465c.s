; FUN_2c58465c @ 0x2c58465c size=100
  push {lr}
  sub sp,#0xc
  ble 0x2c5846be
  ldr r3,[0x2c5846cc]
  cmp r12,r3
  bgt 0x2c5846a4
  vmov s15,r12
  vldr.32 s13,[pc,#0x60]
  vcvt.f32.s32 s15,s15
  vdiv.f32 s14,s15,s13
  vldr.32 s12,[pc,#0x58]
  ldr r2,[0x2c5846d8]
  vmul.f32 s15,s14,s13
  vdiv.f32 s14,s15,s12
  vcvt.f64.f32 d7,s14
  vstr.64 d7,[sp]
  bl 0x2c66b450
  add sp,#0xc
  pop.w pc
  ldr r2,[0x2c5846e4]
  asr.w r3,r12, asr #0x1f
  smull r2,r12,r2,r12
  ldr r2,[0x2c5846e0]
  rsb r3,r3,r12, asr #0x6
  add sp,#0xc
  pop.w lr
  b.w 0x2c66b450
  vmov s15,r12
  vmov.f32 s13,0x41200000
  vcvt.f32.s32 s15,s15
  b 0x2c584674
