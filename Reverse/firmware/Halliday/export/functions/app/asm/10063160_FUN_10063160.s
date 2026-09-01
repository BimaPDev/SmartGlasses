; FUN_10063160 @ 0x10063160 size=48
  push {r3,lr}
  movs r0,#0xf
  bl 0x10055b54
  movs r0,#0x1
  bl 0x100630e4
  movs r1,#0x1
  mov r0,r1
  bl 0x10056ca4
  movs r0,#0xf
  bl 0x10055b98
  mov.w r2,#0x8000000
  ldr r3,[0x10063190]
  movs r0,#0x3b
  str.w r2,[r3,#0x184]
  pop.w {r3,lr}
  b.w 0x10068114
