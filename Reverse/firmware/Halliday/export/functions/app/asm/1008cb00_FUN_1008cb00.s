; FUN_1008cb00 @ 0x1008cb00 size=38
  push {r3,r4,r5,r6,r7,lr}
  movs r4,#0x0
  mov r6,r0
  mov r7,r4
  ldr r5,[0x1008cb28]
  ldr r3,[r5,#0x4]
  cmp r3,r6
  bne 0x1008cb18
  sxth r0,r4
  ldr r7,[r5,#0x0]
  bl 0x1008cadc
  adds r4,#0x1
  cmp r4,#0x10
  add.w r5,r5,#0x8
  bne 0x1008cb0a
  mov r0,r7
  pop {r3,r4,r5,r6,r7,pc}
