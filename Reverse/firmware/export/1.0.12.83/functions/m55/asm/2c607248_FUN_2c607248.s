; FUN_2c607248 @ 0x2c607248 size=48
  push {r3,lr}
  ldrb.w r2,[r0,#0x22]
  orr r2,r2,#0x1
  strb.w r2,[r0,#0x22]
  bl 0x2c604178
  ldrb.w r2,[r0,#0x22]
  orr r2,r2,#0x2
  strb.w r2,[r0,#0x22]
  bl 0x2c604188
  ldr r0,[r0,#0x4]
  cbz r0,0x2c607276
  pop.w {r3,lr}
  b.w 0x2c62be4c
  pop {r3,pc}
