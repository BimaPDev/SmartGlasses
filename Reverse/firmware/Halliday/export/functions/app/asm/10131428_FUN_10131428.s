; FUN_10131428 @ 0x10131428 size=42
  push {r4,lr}
  mov r4,r0
  bl 0x100a735c
  cbz r4,0x1013143e
  cmp r4,r0
  itte cc
  lsl.cc r4,r4,#0x7
  udiv.cc r4,r4,r0
  mov.cs r4,#0x7f
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x101369c8
  mov r2,r0
  movs r1,#0x2d
  movs r0,#0xcb
  b.w 0x100d4440
