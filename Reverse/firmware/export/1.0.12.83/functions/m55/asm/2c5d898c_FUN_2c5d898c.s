; FUN_2c5d898c @ 0x2c5d898c size=106
  push {r4,lr}
  sub sp,#0x8
  ble 0x2c5d89b0
  ldr r3,[0x2c5d8a04]
  cmp r2,r3
  bgt 0x2c5d89f0
  ldr r4,[0x2c5d8a08]
  asrs r3,r2,#0x1f
  smull r4,r2,r4,r2
  rsb r3,r3,r2, asr #0xc
  ldr r2,[0x2c5d8a0c]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c66b450
  ldr r3,[0x2c5d8a10]
  asr.w r12,r2, asr #0x1f
  vldr.32 s13,[pc,#0x5c]
  smull r3,r2,r3,r2
  mov.w r3,#0x3e8
  rsb r2,r12,r2, asr #0x6
  mul r12,r3,r2
  ldr r2,[0x2c5d8a18]
  vmov s15,r12
  vcvt.f32.s32 s15,s15
  vdiv.f32 s14,s15,s13
  vcvt.f64.f32 d7,s14
  vstr.64 d7,[sp]
  bl 0x2c66b450
  add sp,#0x8
  pop {r4,pc}
  movs r3,#0x63
  ldr r2,[0x2c5d8a0c]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c66b450
