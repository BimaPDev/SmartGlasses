; FUN_2c64fbf6 @ 0x2c64fbf6 size=14
  ldr r3,[r0,#0x18]
  push {r4,lr}
  mov r4,r0
  cbz r3,0x2c64fc00
  blx r3
  mov r0,r4
  pop {r4,pc}
