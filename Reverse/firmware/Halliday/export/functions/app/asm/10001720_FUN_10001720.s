; FUN_10001720 @ 0x10001720 size=38
  push {r3,lr}
  mov.w r3,#0x188
  ldr r3,[r3,#0x1c]
  ldr r3,[r3,#0x2c]
  cbz r0,0x1000173c
  ldr r0,[0x10001748]
  movs r1,#0xb9
  blx r3
  movs r0,#0x5
  pop.w {r3,lr}
  b.w 0x100007c0
  ldr r0,[0x10001748]
  movs r1,#0xab
  blx r3
  movs r0,#0x28
  b 0x10001734
