; FUN_2c4e27fc @ 0x2c4e27fc size=42
  push {r0,r1,r2,r3,r4,r5,r6,lr}
  movs r3,#0x0
  mov.w r2,#0x1300
  movs r1,#0x7
  ldr r0,[0x2c4e2828]
  strd r2,r3,[sp,#0xc]
  ldr r2,[0x2c4e282c]
  str r2,[sp,#0x8]
  movs r2,#0x20
  str r2,[sp,#0x4]
  ldr r2,[0x2c4e2830]
  str r2,[sp,#0x0]
  mov r2,r3
  bl 0x2c4e0504
  movs r0,#0x1
  add sp,#0x1c
  pop.w pc
