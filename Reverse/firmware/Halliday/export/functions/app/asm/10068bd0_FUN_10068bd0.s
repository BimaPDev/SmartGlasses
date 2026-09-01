; FUN_10068bd0 @ 0x10068bd0 size=26
  ldr r1,[0x10068bec]
  push {r4,lr}
  ldr r4,[r1,#0x0]
  adds r2,r0,r4
  cmp.w r2,#0x800
  itett cc
  ldr.cc r0,[0x10068bf0]
  mov.cs.w r0,#0xffffffff
  add.cc r0,r0,r4
  str.cc r2,[r1,#0x0]
  pop {r4,pc}
