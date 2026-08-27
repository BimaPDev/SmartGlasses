; FUN_2c13aa30 @ 0x2c13aa30 size=60
  push {r4,r5,r6,lr}
  mov r5,r1
  cbz r1,0x2c13aa68
  mov r4,r0
  ldr r6,[0x2c13aa70]
  mov.w r1,#0xffffffff
  ldr r0,[r6,#0x0]
  bl 0x2c13f29c
  ldr r3,[0x2c13aa74]
  add.w r4,r4,r4, lsl #0x1
  lsls r1,r4,#0x2
  add.w r4,r3,r4, lsl #0x2
  ldrb r2,[r4,#0x4]
  cbz r2,0x2c13aa5e
  ldr r3,[r3,r1]
  ldr r3,[r3,#0x10]
  cbz r3,0x2c13aa5e
  mov r0,r5
  blx r3
  ldr r0,[r6,#0x0]
  bl 0x2c13f2d8
  movs r0,#0x1
  pop {r4,r5,r6,pc}
  mov r0,r1
  pop {r4,r5,r6,pc}
