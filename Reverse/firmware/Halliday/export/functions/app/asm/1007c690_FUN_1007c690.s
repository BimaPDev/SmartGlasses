; FUN_1007c690 @ 0x1007c690 size=76
  ldr r3,[0x1007c6dc]
  push {r4,r5,r6,r7,r8,lr}
  movs r4,#0xf
  mov r5,r3
  add.w r2,r3,r4, lsl #0x2
  ldrh r2,[r2,#0x2]
  cmp r2,r0
  ble 0x1007c6d0
  subs r4,#0x1
  bne 0x1007c69a
  add.w r8,r4,#0x1
  add.w r3,r5,r8, lsl #0x2
  ldrh r7,[r3,#0x2]
  add.w r3,r5,r4, lsl #0x2
  ldrh r3,[r3,#0x2]
  subs r7,r0,r7
  subs r0,r0,r3
  bl 0x1013d02e
  mov r6,r0
  mov r0,r7
  bl 0x1013d02e
  cmp r6,r0
  it gt
  mov.gt r4,r8
  b 0x1007c6d4
  cmp r4,#0xf
  bne 0x1007c6a8
  ldrb.w r0,[r5,r4,lsl #0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
