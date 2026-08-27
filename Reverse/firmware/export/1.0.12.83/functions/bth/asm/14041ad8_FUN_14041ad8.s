; FUN_14041ad8 @ 0x14041ad8 size=80
  movs r3,#0x0
  push {r4,r5,lr}
  mov r2,r3
  mov r5,r0
  ldr r4,[0x14041b28]
  ldrb.w r12,[r0,#0x0]
  sub sp,#0xc
  b 0x14041af4
  adds r3,#0x1
  cmp r3,#0x1a
  beq 0x14041b14
  ldrb.w r2,[r4,r3,lsl #0x3]
  cmp r12,r2
  bne 0x14041aea
  ldr r2,[0x14041b28]
  mov r0,r5
  add.w r3,r2,r3, lsl #0x3
  ldr r3,[r3,#0x4]
  str r1,[sp,#0x4]
  blx r3
  ldr r3,[0x14041b2c]
  ldr r1,[sp,#0x4]
  ldr r3,[r3,#0x0]
  cbz r3,0x14041b14
  mov r0,r5
  blx r3
  ldr r1,[sp,#0x4]
  ldr r3,[0x14041b30]
  ldr r3,[r3,#0x0]
  cbz r3,0x14041b24
  mov r0,r5
  add sp,#0xc
  pop.w {r4,r5,lr}
  bx r3
  add sp,#0xc
  pop {r4,r5,pc}
