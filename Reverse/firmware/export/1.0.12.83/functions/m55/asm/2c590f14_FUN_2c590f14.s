; FUN_2c590f14 @ 0x2c590f14 size=40
  push {r4,r5,r6,r7,lr}
  ldr r3,[r0,#0x24]
  sub sp,#0x14
  cmp r3,r1
  beq.w 0x2c59106c
  mov r4,r0
  mov r5,r1
  ldr r6,[0x2c591088]
  ldr r1,[r3,#0xc]
  movs r2,#0xec
  ldr r3,[0x2c5910a8]
  ldr r0,[0x2c5910ac]
  str r1,[sp,#0x8]
  ldr r1,[0x2c5910b0]
  strd r0,r3,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
