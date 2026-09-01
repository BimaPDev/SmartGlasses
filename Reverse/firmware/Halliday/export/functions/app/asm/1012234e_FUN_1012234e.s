; FUN_1012234e @ 0x1012234e size=46
  push {r3,r4,r5,lr}
  mov r5,r0
  movs r4,#0x0
  ldrh.w r0,[r5],#0x2
  cbnz r0,0x1012235e
  mov r0,r4
  pop {r3,r4,r5,pc}
  bl 0x10086a1c
  lsrs r2,r4,#0x1
  add.w r2,r2,r4, lsl #0xf
  uxtb r4,r0
  add r2,r4
  ubfx r3,r2,#0x1,#0xf
  add.w r4,r3,r0, lsr #0x8
  add.w r4,r4,r2, lsl #0xf
  uxth r4,r4
  b 0x10122354
