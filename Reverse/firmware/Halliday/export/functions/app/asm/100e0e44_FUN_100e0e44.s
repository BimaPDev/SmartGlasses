; FUN_100e0e44 @ 0x100e0e44 size=30
  push {r4,lr}
  ldr r4,[0x100e0e64]
  movs r2,#0xc0
  ldr r1,[r4,#0x0]
  ldr r0,[0x100e0e68]
  bl 0x10131934
  ldr r1,[r4,#0x0]
  movs r2,#0x8
  pop.w {r4,lr}
  ldr r0,[0x100e0e6c]
  adds r1,#0xc0
  b.w 0x10131934
