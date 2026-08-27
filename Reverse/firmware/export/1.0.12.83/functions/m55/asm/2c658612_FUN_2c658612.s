; FUN_2c658612 @ 0x2c658612 size=56
  push {r3,r4,r5,r6,r7,lr}
  mov r5,r0
  mov r6,r1
  mov r7,r2
  movs r4,#0x0
  cmp r4,r7
  beq 0x2c658632
  ldr r0,[r5,#0x20]
  bl 0x2c668f04
  adds r3,r0,#0x1
  beq 0x2c658632
  str.w r0,[r6,r4,lsl #0x2]
  adds r4,#0x1
  b 0x2c65861c
  cbz r4,0x2c658644
  add.w r3,r4,#0x40000000
  subs r3,#0x1
  ldr.w r3,[r6,r3,lsl #0x2]
  mov r0,r4
  str r3,[r5,#0x24]
  pop {r3,r4,r5,r6,r7,pc}
  mov.w r3,#0xffffffff
  b 0x2c65863e
