; FUN_2c629a42 @ 0x2c629a42 size=36
  push {r4,lr}
  ldr r4,[r0,#0x10]
  mov r0,r4
  bl 0x2c62992c
  cbz r0,0x2c629a62
  ldrb r2,[r4,#0x13]
  lsls r3,r0,#0x4
  ldr r1,[r4,#0x4]
  tst r2,#0xc0
  bne 0x2c629a62
  ldr r0,[r4,#0x0]
  ldr r3,[r1,r3]
  add r0,r3
  pop {r4,pc}
  movs r0,#0x0
  pop {r4,pc}
