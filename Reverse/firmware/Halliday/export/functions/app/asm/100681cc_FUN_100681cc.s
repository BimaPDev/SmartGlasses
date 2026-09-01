; FUN_100681cc @ 0x100681cc size=50
  ldr r3,[0x10068200]
  ldr.w r2,[r3,#0x88]
  bic r2,r2,#0xf00000
  str.w r2,[r3,#0x88]
  ldr.w r2,[r3,#0x88]
  orr r2,r2,#0x500000
  str.w r2,[r3,#0x88]
  mov.w r2,#0xc0000000
  str.w r2,[r3,#0x234]
  dsb #0xf
  isb #0xf
  movs r3,#0x0
  vmsr fpscr,r3
  bx lr
