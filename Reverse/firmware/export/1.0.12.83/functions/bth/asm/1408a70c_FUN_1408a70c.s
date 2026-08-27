; FUN_1408a70c @ 0x1408a70c size=56
  push {r4,r5,r6,r7,lr}
  add.w r3,r0,r1, lsl #0x2
  ldr r5,[r3,#0x48]
  sub sp,#0xc
  cbz r5,0x1408a756
  mov r4,r0
  movs r0,#0x0
  str r0,[r3,#0x48]
  mov r7,r1
  mov r6,lr
  ldr r0,[r5,#0x4]
  cbz r2,0x1408a730
  cbz r0,0x1408a730
  ldr r3,[r5,#0x8]
  cbz r3,0x1408a730
  blx r3
  ldr r0,[r5,#0x4]
  str r0,[sp,#0x4]
  ldrb r2,[r4,#0x11]
  mov r3,r4
  ldr r1,[0x1408a75c]
  str r7,[sp,#0x0]
  movs r0,#0x44
  bl 0x1402a64c
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
