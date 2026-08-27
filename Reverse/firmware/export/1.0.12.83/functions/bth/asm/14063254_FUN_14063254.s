; FUN_14063254 @ 0x14063254 size=32
  push {r4,lr}
  mov r4,r0
  sub sp,#0x8
  cbnz r1,0x14063268
  ldr r0,[r0,#0x10]
  cbz r0,0x14063268
  str r1,[sp,#0x4]
  bl 0x140735a8
  ldr r1,[sp,#0x4]
  mov r0,r4
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x1405d838
