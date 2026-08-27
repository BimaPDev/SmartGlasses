; FUN_2c658558 @ 0x2c658558 size=36
  push {r3,r4,r5,r6,r7,lr}
  mov r5,r0
  mov r6,r1
  mov r7,r2
  movs r4,#0x0
  cmp r4,r7
  beq 0x2c658578
  ldr r1,[r5,#0x20]
  ldr.w r0,[r6,r4,lsl #0x2]
  bl 0x2c66ae2c
  adds r0,#0x1
  beq 0x2c658578
  adds r4,#0x1
  b 0x2c658562
  mov r0,r4
  pop {r3,r4,r5,r6,r7,pc}
