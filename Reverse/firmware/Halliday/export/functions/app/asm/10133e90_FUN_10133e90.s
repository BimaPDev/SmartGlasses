; FUN_10133e90 @ 0x10133e90 size=36
  push {r3,lr}
  mov r3,r0
  adds r0,#0x64
  bl 0x10133e76
  cbz r0,0x10133eb2
  ldr r2,[r3,#0x68]
  cbnz r2,0x10133ea6
  ldr.w r2,[r3,#0x84]
  cbz r2,0x10133eb2
  add.w r0,r3,#0x88
  pop.w {r3,lr}
  b.w 0x101144f8
  pop {r3,pc}
