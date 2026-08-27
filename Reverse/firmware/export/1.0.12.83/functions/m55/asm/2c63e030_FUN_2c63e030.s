; FUN_2c63e030 @ 0x2c63e030 size=154
  push {r4,lr}
  ldr r3,[0x2c63e0cc]
  sub sp,#0x18
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x14]
  mov.w r3,#0x0
  bl 0x2c6411ac
  cbnz r0,0x2c63e056
  ldr r3,[0x2c63e0cc]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x14]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c63e0c8
  add sp,#0x18
  pop {r4,pc}
  add r1,sp,#0x8
  movs r0,#0x1f
  bl 0x2c5e31b4
  cbz r0,0x2c63e0ae
  ldrb.w r0,[sp,#0x8]
  cbz r0,0x2c63e092
  add.w r3,r0,r0, lsl #0x2
  add.w r3,r0,r3, lsl #0x3
  add.w r3,r3,r3, lsl #0x2
  ubfx r2,r3,#0x1,#0x7
  orr.w r3,r2,r3, lsl #0x7
  uxtb r3,r3
  cmp r3,#0x19
  bls 0x2c63e0c2
  ldr r3,[0x2c63e0d0]
  umull r3,r0,r3,r0
  lsrs r0,r0,#0x3
  add.w r0,r0,r0, lsl #0x2
  lsls r0,r0,#0x1
  subs r0,#0xa
  uxtb r0,r0
  ldr r3,[0x2c63e0cc]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x14]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c63e0c8
  movs r2,#0x1
  mov r1,r2
  add sp,#0x18
  pop.w {r4,lr}
  b.w 0x2c63d8b8
  ldr r4,[0x2c63e0d4]
  movs r0,#0x4
  ldr r3,[0x2c63e0d8]
  mov.w r2,#0x178
  ldr r1,[0x2c63e0dc]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
  subs r0,#0xa
  uxtb r0,r0
  b 0x2c63e092
  bl 0x2c674828
