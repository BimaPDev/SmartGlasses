; FUN_1012845c @ 0x1012845c size=50
  push {r3,r4,r5,lr}
  mov r5,r3
  mov r4,r0
  cbz r0,0x10128478
  ldrb r1,[r0,#0x7]
  ands r1,r1,#0x40
  bne 0x10128478
  cmp r1,r5
  blt 0x1012847a
  ldrb r3,[r4,#0x7]
  orr r3,r3,#0x40
  strb r3,[r4,#0x7]
  pop {r3,r4,r5,pc}
  ldr r3,[r4,#0x14]
  ldr.w r0,[r3,r1,lsl #0x2]
  bl 0x1008f514
  ldr r3,[r4,#0x8]
  strh.w r0,[r3,r1,lsl #0x1]
  adds r1,#0x1
  b 0x1012846c
