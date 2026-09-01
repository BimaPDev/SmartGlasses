; FUN_100d380c @ 0x100d380c size=40
  push {r3,lr}
  ldr r2,[0x100d3834]
  ldr r3,[0x100d3838]
  ldr r0,[0x100d383c]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldr r2,[0x100d3840]
  ldr r1,[0x100d3844]
  bl 0x100a5b78
  ldr r3,[0x100d3848]
  ldr r0,[r3,#0x0]
  pop.w {r3,lr}
  adds r0,#0x3c
  b.w 0x10116598
