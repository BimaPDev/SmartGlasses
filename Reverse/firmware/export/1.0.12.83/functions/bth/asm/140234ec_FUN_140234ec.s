; FUN_140234ec @ 0x140234ec size=60
  ldrb r3,[r0,#0x0]
  cbz r3,0x14023526
  mov r12,r0
  push {r4,r5,lr}
  ldrb.w r3,[r12,#0x2]!
  ldrsh.w lr,[r1,r3,lsl #0x1]
  mov r3,r12
  ldrb.w r1,[r12,#0x1]!
  subs r3,#0x1
  add lr,r1
  ldr.w r1,[r2,lr,lsl #0x2]
  ldrb.w r5,[r12,#0x4]
  cmp r1,#0x0
  ite gt
  add.gt r1,r1,r5
  sub.le r1,r1,r5
  lsl.w r4,lr,#0x2
  str r1,[r2,r4]
  ldrb r1,[r0,#0x1]
  subs r3,r3,r0
  cmp r1,r3
  bge 0x140234fc
  pop {r4,r5,pc}
  bx lr
