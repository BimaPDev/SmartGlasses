; FUN_2c6120f4 @ 0x2c6120f4 size=26
  push {r4,lr}
  ldrsh.w r4,[r1,#0x4]
  cbz r4,0x2c61210c
  ldrb r4,[r1,#0xa]
  cmp r4,#0x2
  bls 0x2c61210c
  ldr r4,[r0,#0x20]
  mov r12,r4
  pop.w {r4,lr}
  bx r12
  pop {r4,pc}
