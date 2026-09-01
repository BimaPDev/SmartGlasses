; FUN_101256b2 @ 0x101256b2 size=48
  ldrb.w r2,[r0,#0x2a]
  push {r3,lr}
  orr r2,r2,#0x1
  strb.w r2,[r0,#0x2a]
  bl 0x10126fa2
  ldrb.w r2,[r0,#0x2a]
  orr r2,r2,#0x4
  strb.w r2,[r0,#0x2a]
  bl 0x1008af34
  ldr r0,[r0,#0x4]
  cbz r0,0x101256e0
  pop.w {r3,lr}
  b.w 0x1012b32c
  pop {r3,pc}
