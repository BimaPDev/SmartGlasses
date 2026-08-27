; FUN_2c4e4b5a @ 0x2c4e4b5a size=24
  push {r3,r4,r5,lr}
  ldr r3,[r0,#0x0]
  mov r4,r0
  ldr r3,[r3,#0x24]
  blx r3
  ldr r3,[r4,#0x0]
  mov r5,r0
  mov r0,r4
  ldr r3,[r3,#0x20]
  blx r3
  subs r0,r5,r0
  pop {r3,r4,r5,pc}
