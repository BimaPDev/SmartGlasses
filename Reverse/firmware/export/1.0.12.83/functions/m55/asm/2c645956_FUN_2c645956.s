; FUN_2c645956 @ 0x2c645956 size=26
  push {r4,lr}
  ldr r4,[r3,#0x14]
  cbz r4,0x2c645966
  ldr r0,[r4,#0x28]
  bl 0x2c643ab0
  ldr r0,[r4,#0x28]
  pop {r4,pc}
  mov r0,r4
  bl 0x2c643ab0
  mov r0,r4
  pop {r4,pc}
