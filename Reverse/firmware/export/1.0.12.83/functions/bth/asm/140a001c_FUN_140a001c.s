; FUN_140a001c @ 0x140a001c size=44
  push {r4,r5,lr}
  ldr r5,[0x140a0048]
  sub sp,#0xc
  ldr r3,[r5,#0x0]
  cbz r3,0x140a0044
  mov r4,r0
  bl 0x140a047c
  ldr r3,[r5,#0x0]
  str r0,[sp,#0x4]
  str.w r4,[r3,#0x130]
  bl 0x140a0ebc
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x140a04dc
  add sp,#0xc
  pop {r4,r5,pc}
