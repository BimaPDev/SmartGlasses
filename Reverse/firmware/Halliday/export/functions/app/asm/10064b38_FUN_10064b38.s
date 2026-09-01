; FUN_10064b38 @ 0x10064b38 size=62
  movs r3,#0x0
  ldr r0,[0x10064b78]
  push {r4,lr}
  ldr r4,[r0,#0x0]
  asr.w r1,r4,r3
  ands r1,r1,#0x1
  bne 0x10064b66
  movs r2,#0x1
  lsls r2,r3
  orrs r2,r4
  str r2,[r0,#0x0]
  ldr r2,[0x10064b7c]
  add.w r3,r2,r3, lsl #0x5
  mov r0,r3
  movs r2,#0x20
  bl 0x1011ea48
  mov r3,r0
  mov r0,r3
  pop {r4,pc}
  adds r3,#0x1
  cmp r3,#0x14
  bne 0x10064b40
  ldr r0,[0x10064b80]
  bl 0x10119dc2
  movs r3,#0x0
  b 0x10064b62
