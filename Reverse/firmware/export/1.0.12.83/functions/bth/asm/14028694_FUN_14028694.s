; FUN_14028694 @ 0x14028694 size=60
  lsrs r1,r0,#0x4
  push {r3,lr}
  bne 0x140286c2
  lsls r3,r0,#0x1c
  and r12,r0,#0xf
  bmi 0x140286c8
  movs r2,#0x1
  ldr r3,[0x140286d0]
  lsl.w r2,r2,r12
  add.w r0,r3,r12, lsl #0x5
  ldr.w r1,[r0,#0x110]
  uxtb r2,r2
  bic r1,r1,#0x1
  str.w r1,[r0,#0x110]
  str r2,[r3,#0x8]
  str r2,[r3,#0x10]
  pop {r3,pc}
  ldr r0,[0x140286d4]
  bl 0x1402b0f8
  mov r2,r12
  ldr r0,[0x140286d8]
  bl 0x1402b0f8
