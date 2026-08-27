; FUN_14053e64 @ 0x14053e64 size=46
  push {r4}
  ldr r4,[0x14053e94]
  movs r3,#0x0
  mov r2,r4
  ldrb r1,[r2,#0x12]
  adds r2,#0x14
  cmp r1,r0
  beq 0x14053e82
  adds r3,#0x1
  cmp r3,#0x4
  bne 0x14053e6c
  movs r0,#0xff
  pop.w r4
  bx lr
  add.w r3,r3,r3, lsl #0x2
  add.w r3,r4,r3, lsl #0x2
  ldrb r0,[r3,#0x10]
  pop.w r4
  bx lr
