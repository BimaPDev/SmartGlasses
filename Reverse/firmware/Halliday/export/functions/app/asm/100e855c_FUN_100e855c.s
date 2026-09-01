; FUN_100e855c @ 0x100e855c size=194
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  mov r7,r1
  mov r6,r0
  cbnz r0,0x100e8586
  ldr r2,[0x100e8620]
  ldr r3,[0x100e8624]
  ldr r1,[0x100e8628]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  ldr r2,[0x100e862c]
  ldr r0,[0x100e8630]
  and r3,r3,#0xff00
  orrs r0,r3
  bl 0x100a5b78
  mov.w r0,#0xffffffff
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  ldr r5,[0x100e8634]
  ldr r3,[r5,#0x0]
  cbnz r3,0x100e85cc
  lsls r0,r7,#0x3
  bl 0x100e825c
  str r0,[r5,#0x0]
  cmp r0,#0x0
  bne 0x100e8616
  ldr r2,[0x100e8620]
  ldr r3,[0x100e8624]
  ldr r1,[0x100e8628]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  ldr r2,[0x100e8638]
  ldr r0,[0x100e863c]
  and r3,r3,#0xff00
  b 0x100e8578
  ldr.w r0,[r0,r4,lsl #0x3]
  cbz r0,0x100e85b6
  bl 0x100e833c
  adds r4,#0x1
  ldr.w r3,[r8,#0x0]
  ldr r0,[r5,#0x0]
  cmp r3,r4
  bgt 0x100e85ac
  bl 0x100e833c
  movs r3,#0x0
  str r3,[r5,#0x0]
  b 0x100e858c
  movs r4,#0x0
  ldr.w r8,[0x100e8640]
  b 0x100e85b8
  ldr.w r0,[r6,r4,lsl #0x3]
  lsl.w r8,r4,#0x3
  cbz r0,0x100e8608
  bl 0x1011ea10
  adds r0,#0x1
  ldr.w r10,[r5,#0x0]
  bl 0x100e825c
  ldr r3,[r5,#0x0]
  str.w r0,[r10,r4,lsl #0x3]
  ldr.w r0,[r3,r4,lsl #0x3]
  ldr.w r1,[r6,r4,lsl #0x3]
  add r8,r3
  bl 0x1011e9f0
  ldr.w r3,[r9,r4,lsl #0x3]
  str.w r3,[r8,#0x4]
  adds r4,#0x1
  cmp r4,r7
  blt 0x100e85d4
  ldr r3,[0x100e8640]
  movs r0,#0x0
  str r7,[r3,#0x0]
  b 0x100e8582
  movs r4,#0x0
  add.w r9,r6,#0x4
  b 0x100e860a
