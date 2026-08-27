; FUN_2c60381c @ 0x2c60381c size=54
  push {r4,r5,r6,lr}
  mov r6,r0
  movs r0,#0x0
  bl 0x2c62a4ec
  mov r5,r0
  cbz r0,0x2c603850
  ldr r3,[r5,#0x28]
  cbz r3,0x2c603844
  movs r4,#0x0
  ldr r3,[r5,#0xc]
  mov r0,r6
  ldr.w r1,[r3,r4,lsl #0x2]
  adds r4,#0x1
  bl 0x2c6037b0
  ldr r3,[r5,#0x28]
  cmp r3,r4
  bhi 0x2c603830
  mov r0,r5
  bl 0x2c62a4ec
  mov r5,r0
  cmp r0,#0x0
  bne 0x2c60382a
  pop {r4,r5,r6,pc}
