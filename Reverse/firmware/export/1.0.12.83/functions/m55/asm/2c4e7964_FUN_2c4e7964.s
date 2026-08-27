; FUN_2c4e7964 @ 0x2c4e7964 size=28
  push {r4,lr}
  bl 0x2c4e9354
  ldr r4,[r0,#0x58]
  bl 0x2c4e9354
  ldr.w r3,[r0,#0xc8]
  blx r3
  mov r1,r0
  ldr r0,[0x2c4e7980]
  blx r4
  ldr r0,[0x2c4e7984]
  pop {r4,pc}
