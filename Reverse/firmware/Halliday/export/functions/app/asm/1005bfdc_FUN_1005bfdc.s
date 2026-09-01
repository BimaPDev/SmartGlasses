; FUN_1005bfdc @ 0x1005bfdc size=34
  push {r4,r5,r6,lr}
  ldr r5,[0x1005c000]
  ldr r6,[0x1005c004]
  ldr r4,[r5,#0x0]
  subs r4,#0x1
  cmp r4,#0x0
  bge 0x1005bff0
  movs r3,#0x0
  str r3,[r5,#0x0]
  pop {r4,r5,r6,pc}
  ldr.w r0,[r6,r4,lsl #0x2]
  movs r1,#0x0
  bl 0x1011b5f8
  subs r4,#0x1
  b 0x1005bfe6
