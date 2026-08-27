; FUN_1405c838 @ 0x1405c838 size=56
  push {r4,r5,r6,r7,lr}
  mov r6,r0
  ldr r0,[r1,#0x18]
  mov r5,r1
  ldr r7,[r1,#0xc]
  sub sp,#0x14
  cbz r0,0x1405c86c
  ldrh r1,[r0,#0x6]
  str r2,[sp,#0xc]
  add r1,r0
  ldrb.w r4,[r1,#0x31]
  ldrb.w r3,[r1,#0x30]
  orr.w r4,r3,r4, lsl #0x8
  bl 0x140735a8
  ldr r2,[sp,#0xc]
  str r4,[sp,#0x0]
  mov r0,r6
  ldrh r3,[r5,#0x1c]
  ldr r1,[r5,#0x10]
  blx r7
  add sp,#0x14
  pop {r4,r5,r6,r7,pc}
  mov r4,r0
  b 0x1405c85e
