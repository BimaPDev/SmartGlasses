; FUN_2c64585a @ 0x2c64585a size=40
  push {r4,lr}
  cbz r0,0x2c645874
  ldrb r2,[r0,#0x0]
  cmp r2,#0xf1
  bne 0x2c645874
  ldrb r4,[r0,#0x1]
  and r4,r4,#0xf
  mov r1,r4
  bl 0x2c643a5c
  mov r0,r4
  pop {r4,pc}
  mov.w r1,#0xffffffff
  mov r0,r3
  mov r4,r1
  bl 0x2c643a5c
  b 0x2c645870
