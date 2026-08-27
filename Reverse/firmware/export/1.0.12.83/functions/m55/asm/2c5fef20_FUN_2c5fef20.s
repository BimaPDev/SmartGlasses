; FUN_2c5fef20 @ 0x2c5fef20 size=38
  push {r4,lr}
  mov r4,r1
  cbz r0,0x2c5fef3c
  cmp r4,#0x0
  ldr.w r3,[r0,#0x15c]
  ite ne
  mov.ne r2,#0x1
  mov.eq.w r2,#0xffffffff
  add r3,r2
  str.w r3,[r0,#0x15c]
  pop {r4,pc}
  bl 0x2c62a470
  cmp r0,#0x0
  bne 0x2c5fef26
  pop {r4,pc}
