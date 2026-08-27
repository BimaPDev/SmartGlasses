; FUN_2c514d9c @ 0x2c514d9c size=32
  push {r4,lr}
  ldr r3,[r0,#0x0]
  sub sp,#0x8
  mov r4,r0
  ldr r3,[r3,#0xc]
  blx r3
  ldr r1,[0x2c514e00]
  ldr r3,[0x2c514e04]
  movw r2,#0x4d5
  strd r1,r0,[sp,#0x0]
  ldr r1,[0x2c514e08]
  movs r0,#0x4
  bl 0x2c62c82c
