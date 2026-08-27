; FUN_2c13aa78 @ 0x2c13aa78 size=98
  push {r4,r5,r6,r7,r8,lr}
  ldr r5,[r0,#0x0]
  sub sp,#0x8
  cmp r5,#0x4
  ble 0x2c13aa8a
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr.w r8,[0x2c13aaf0]
  mov r4,r0
  mov.w r1,#0xffffffff
  ldr.w r0,[r8,#0x0]
  ldr r6,[0x2c13aadc]
  bl 0x2c13f29c
  add.w r3,r5,r5, lsl #0x1
  add.w r3,r6,r3, lsl #0x2
  ldr r3,[r3,#0x8]
  lsls r7,r5,#0x1
  cbz r3,0x2c13aab0
  mov r0,r4
  blx r3
  add r5,r7
  ldr.w r0,[r8,#0x0]
  add.w r6,r6,r5, lsl #0x2
  bl 0x2c13f2d8
  ldr r3,[r6,#0x8]
  cmp r3,#0x0
  bne 0x2c13aa84
  ldr r2,[0x2c13aae0]
  ldr r4,[0x2c13aae4]
  str r2,[sp,#0x4]
  movs r1,#0xbb
  ldr r3,[0x2c13aae8]
  ldr r2,[0x2c13aaec]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c135988
  b 0x2c13aa84
