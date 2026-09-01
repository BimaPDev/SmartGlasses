; FUN_1012f5ae @ 0x1012f5ae size=82
  push {r4,r5,r6,r7,r8,r9,lr}
  mov r6,r1
  mov r7,r2
  mov r8,r3
  mov r5,r0
  sub sp,#0x1c
  cbz r0,0x1012f5fa
  movs r4,#0x0
  mov r9,r4
  ldr r3,[sp,#0x38]
  str r4,[sp,#0xc]
  str r3,[sp,#0x8]
  cmp r6,r4
  ble 0x1012f5ee
  ldr.w r3,[r8,r4,lsl #0x2]
  movs r1,#0x2
  str r3,[sp,#0x10]
  ldr.w r3,[r7,r4,lsl #0x2]
  mov r0,r5
  add r2,sp,#0x4
  str r3,[sp,#0x14]
  str r4,[sp,#0x4]
  str.w r9,[sp,#0xc]
  bl 0x10064860
  ldr r3,[sp,#0xc]
  cmp r3,#0x0
  bgt 0x1012f5f6
  ldr r0,[sp,#0xc]
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  adds r4,#0x1
  b 0x1012f5c8
  mvn r0,#0xd
  b 0x1012f5f0
