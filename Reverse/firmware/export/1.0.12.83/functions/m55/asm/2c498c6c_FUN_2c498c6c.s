; FUN_2c498c6c @ 0x2c498c6c size=34
  push {r4,r5,r6,r7,lr}
  ldr r7,[0x2c498cd0]
  sub sp,#0x14
  uxtb r4,r0
  ldr r3,[0x2c498cd4]
  mov r6,r1
  mov r5,r2
  str r2,[sp,#0xc]
  str r7,[sp,#0x0]
  ldr r2,[0x2c498cd8]
  strd r0,r1,[sp,#0x4]
  mov.w r1,#0x23c
  movs r0,#0x4
  bl 0x2c673d88
