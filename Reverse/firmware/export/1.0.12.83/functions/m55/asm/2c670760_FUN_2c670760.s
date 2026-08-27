; FUN_2c670760 @ 0x2c670760 size=60
  push {r4,r5,r6,lr}
  ldr r6,[r0,#0x24]
  mov r5,r0
  mov r4,r1
  cbnz r6,0x2c670788
  movs r0,#0x10
  bl 0x2c669578
  mov r2,r0
  str r0,[r5,#0x24]
  cbnz r0,0x2c670780
  ldr r3,[0x2c67079c]
  movs r1,#0x8a
  ldr r0,[0x2c6707a0]
  bl 0x2c668484
  strd r6,r6,[r0,#0x4]
  str r6,[r0,#0x0]
  str r6,[r0,#0xc]
  cbz r4,0x2c67079a
  ldr r3,[r5,#0x24]
  ldr r2,[r4,#0x4]
  ldr r3,[r3,#0xc]
  ldr.w r1,[r3,r2,lsl #0x2]
  str r1,[r4,#0x0]
  str.w r4,[r3,r2,lsl #0x2]
  pop {r4,r5,r6,pc}
