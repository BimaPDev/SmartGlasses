; FUN_2c4b37de @ 0x2c4b37de size=80
  push {r4,r5,r6,lr}
  bhi 0x2c4b3824
  ldr r3,[0x2c4b3830]
  ldr.w r4,[r3,r2,lsl #0x2]
  cbz r1,0x2c4b382a
  add r1,r0
  subs r2,r0,#0x1
  ldr r6,[0x2c4b3834]
  movs r0,#0x0
  subs r1,#0x1
  rsbs r5,r4
  b 0x2c4b37fc
  cmp r2,r1
  beq 0x2c4b3822
  ldrb.w r12,[r2,#0x1]!
  adds r3,r4,r0
  add.w lr,r0,#0x1
  cmp.w r12,#0x11
  and.w r3,r3,r5
  bhi 0x2c4b381c
  ldr.w r0,[r6,r12,lsl #0x2]
  cmp r0,#0x0
  mla r0,r0,r4,r3
  bgt 0x2c4b37f8
  cmp r2,r1
  mov r0,lr
  bne 0x2c4b37fc
  pop {r4,r5,r6,pc}
  movs r4,#0x4
  cmp r1,#0x0
  bne 0x2c4b37ea
  mov r0,r1
  pop {r4,r5,r6,pc}
