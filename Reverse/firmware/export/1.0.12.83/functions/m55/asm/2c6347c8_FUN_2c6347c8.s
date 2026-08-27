; FUN_2c6347c8 @ 0x2c6347c8 size=92
  push {r4,r5,r6,lr}
  mov r5,r1
  ldrh r1,[r1,#0x24]
  ldrh.w r12,[r5,#0x26]
  mul r3,r12,r1
  cbz r3,0x2c634820
  movs r4,#0x0
  ldr r2,[r5,#0x28]
  mov r6,r4
  ldr.w r0,[r2,r4,lsl #0x2]
  cbz r0,0x2c6347f6
  bl 0x2c62bea8
  ldr r3,[r5,#0x28]
  str.w r6,[r3,r4,lsl #0x2]
  ldrh r1,[r5,#0x24]
  ldrh.w r12,[r5,#0x26]
  ldr r2,[r5,#0x28]
  adds r4,#0x1
  mul r3,r12,r1
  uxth r4,r4
  cmp r4,r3
  blt 0x2c6347de
  cbz r2,0x2c63480a
  mov r0,r2
  bl 0x2c62bea8
  ldr r0,[r5,#0x2c]
  cbz r0,0x2c634812
  bl 0x2c62bea8
  ldr r0,[r5,#0x30]
  cbz r0,0x2c63481e
  pop.w {r4,r5,r6,lr}
  b.w 0x2c62bea8
  pop {r4,r5,r6,pc}
  ldr r2,[r5,#0x28]
  b 0x2c634802
