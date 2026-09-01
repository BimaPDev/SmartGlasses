; FUN_1005c180 @ 0x1005c180 size=34
  push {r4,r5,r6,lr}
  ldr r5,[0x1005c1a4]
  ldr r6,[0x1005c1a8]
  ldr r4,[r5,#0x0]
  subs r4,#0x1
  cmp r4,#0x0
  bge 0x1005c194
  movs r3,#0x0
  str r3,[r5,#0x0]
  pop {r4,r5,r6,pc}
  ldr.w r0,[r6,r4,lsl #0x2]
  movs r1,#0x6
  ldr r3,[r0,#0x18]
  blx r3
  subs r4,#0x1
  b 0x1005c18a
