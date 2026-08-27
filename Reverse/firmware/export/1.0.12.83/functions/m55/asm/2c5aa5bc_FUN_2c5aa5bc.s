; FUN_2c5aa5bc @ 0x2c5aa5bc size=24
  push {r4,lr}
  ldr r4,[r0,#0xc]
  cbz r4,0x2c5aa5d2
  mov r0,r4
  bl 0x2c5aa568
  ldr r0,[r4,#0x8]
  pop.w {r4,lr}
  b.w 0x2c62be40
  pop {r4,pc}
