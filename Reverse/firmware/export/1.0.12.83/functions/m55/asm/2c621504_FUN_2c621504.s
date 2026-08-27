; FUN_2c621504 @ 0x2c621504 size=80
  push {r4,r5,r6,r7,lr}
  mov.w r12,#0x0
  ldrb.w r6,[sp,#0x14]
  asr.w r7,r1,r12
  asr.w r5,r2,r12
  asr.w r4,r3,r12
  asr.w lr,r6,r12
  and r7,r7,#0x1
  and r5,r5,#0x1
  and r4,r4,#0x1
  and lr,lr,#0x1
  add.w r5,r5,r7, lsl #0x1
  add.w r12,r12,#0x1
  add.w r4,r4,r5, lsl #0x1
  add.w lr,lr,r4, lsl #0x1
  ldr.w r0,[r0,lr,lsl #0x2]
  cbz r0,0x2c62154e
  cmp.w r12,#0x8
  bne 0x2c62150e
  ldr r0,[r0,#0x40]
  pop {r4,r5,r6,r7,pc}
  mov.w r0,#0xffffffff
  pop {r4,r5,r6,r7,pc}
