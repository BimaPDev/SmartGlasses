; FUN_14058974 @ 0x14058974 size=34
  cbz r0,0x14058992
  cmp r2,#0x3
  bhi 0x14058992
  push {r4}
  mov r3,r0
  mov.w r4,#0xffffffff
  orr.w r1,r1,r2, lsl #0x8
  strd r4,r1,[r3,#0x0]
  movs r0,#0x0
  pop.w r4
  bx lr
  movs r0,#0x40
  bx lr
