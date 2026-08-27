; FUN_1406dd10 @ 0x1406dd10 size=70
  push {r3,r4,r5,lr}
  mov r4,r0
  ldrh r0,[r0,#0x0]
  ubfx r0,r0,#0x0,#0xc
  bl 0x1405c284
  cmp r0,#0xff
  bne 0x1406dd26
  movs r0,#0x0
  pop {r3,r4,r5,pc}
  mov r5,r0
  ldrh r2,[r4,#0x0]
  ldrh r3,[r4,#0x2]
  ldr r1,[0x1406dd58]
  asrs r2,r2,#0xc
  ubfx r3,r3,#0x0,#0xe
  adds r0,#0x6
  ldr.w r0,[r1,r0,lsl #0x2]
  orr.w r3,r3,r2, lsl #0xe
  ldr r2,[r4,#0x8]
  mov r1,r4
  strh r2,[r4,#0xa]
  strh r3,[r4,#0x8]
  adds r0,#0x24
  bl 0x140739f0
  mov r0,r5
  bl 0x14070c18
  movs r0,#0x1
  pop {r3,r4,r5,pc}
