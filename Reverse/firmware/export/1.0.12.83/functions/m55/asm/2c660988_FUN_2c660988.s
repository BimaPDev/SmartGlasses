; FUN_2c660988 @ 0x2c660988 size=70
  push {r4,r5,r6,r7,r8,lr}
  mov r5,r1
  ldr r0,[0x2c6609d0]
  bl 0x2c64cf04
  mov r4,r0
  ldr r3,[r5,#0x0]
  ldr r7,[r3,#0xc]
  ldr.w r8,[r7,r0,lsl #0x2]
  cmp.w r8,#0x0
  bne 0x2c6609c6
  mov.w r0,#0x128
  bl 0x2c64ca5c
  mov r6,r0
  mov r1,r8
  bl 0x2c65f7f8
  mov r1,r5
  mov r0,r6
  bl 0x2c660284
  mov r2,r4
  mov r1,r6
  ldr r0,[r5,#0x0]
  bl 0x2c64d090
  ldr.w r0,[r7,r4,lsl #0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
