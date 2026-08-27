; FUN_140315b0 @ 0x140315b0 size=32
  push {r3,lr}
  ldr r3,[0x140315d0]
  ldrb r3,[r3,#0x0]
  cbz r3,0x140315c0
  pop.w {r3,lr}
  b.w 0x140313b0
  bl 0x1403666c
  pop.w {r3,lr}
  mov.w r0,#0x320
  b.w 0x140e5398
