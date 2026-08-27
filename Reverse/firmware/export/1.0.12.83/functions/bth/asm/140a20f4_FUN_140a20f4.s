; FUN_140a20f4 @ 0x140a20f4 size=30
  push {r4,lr}
  ldr r4,[0x140a2114]
  ldr r0,[r4,#0x0]
  bl 0x140e50f8
  cmp r0,#0x5
  bhi 0x140a2104
  pop {r4,pc}
  ldr r0,[r4,#0x0]
  movs r2,#0x0
  pop.w {r4,lr}
  movs r1,#0xff
  b.w 0x140e50b8
