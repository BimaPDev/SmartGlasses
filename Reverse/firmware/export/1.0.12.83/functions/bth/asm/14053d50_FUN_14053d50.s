; FUN_14053d50 @ 0x14053d50 size=52
  push {r4,r5,r6,r7,r8,lr}
  mov r6,r0
  mov r5,r1
  ldr r4,[0x14053d84]
  ldr.w r8,[0x14053d88]
  add.w r7,r4,#0x50
  ldrb r3,[r4,#0x13]
  cmp r3,#0xff
  beq 0x14053d7a
  ldr.w r3,[r8,r3,lsl #0x2]
  blx r3
  mov r3,r0
  mov r2,r5
  mov r0,r4
  mov r1,r6
  ldr r3,[r3,#0x8]
  blx r3
  adds r4,#0x14
  cmp r7,r4
  bne 0x14053d62
  pop.w {r4,r5,r6,r7,r8,pc}
