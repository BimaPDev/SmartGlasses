; FUN_10133792 @ 0x10133792 size=28
  push {r4,lr}
  mov r4,r0
  ldr.w r0,[r0,#0x90]
  bl 0x100ca13c
  movs r3,#0x0
  mov r0,r4
  str.w r3,[r4,#0x90]
  pop.w {r4,lr}
  b.w 0x100ca13c
