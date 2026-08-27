; FUN_2c5edec8 @ 0x2c5edec8 size=40
  push {r3,r4,r5,lr}
  ldr r5,[0x2c5edef0]
  mov r4,r0
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x0]
  bl 0x2c644044
  ldr r3,[0x2c5edef4]
  ldr.w r0,[r3,#0x3a8]
  cbz r0,0x2c5edee6
  mov r1,r4
  bl 0x2c5eef94
  ldr r0,[r5,#0x0]
  pop.w {r3,r4,r5,lr}
  b.w 0x2c644080
