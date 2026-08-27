; FUN_2c5285d4 @ 0x2c5285d4 size=24
  push {r3,lr}
  ldr r0,[r0,#0xc]
  cbz r0,0x2c5285e0
  movs r1,#0x0
  bl 0x2c5283f4
  ldr r3,[0x2c5285ec]
  ldr r2,[r3,#0x0]
  ldr r2,[r2,#0x10]
  cbnz r2,0x2c5285ea
  str r2,[r3,#0x0]
  pop {r3,pc}
