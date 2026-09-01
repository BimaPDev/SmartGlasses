; FUN_100f405c @ 0x100f405c size=14
  ldr r3,[0x100f406c]
  ldrh r0,[r3,#0xc]
  ldrh r3,[r3,#0x8]
  adds r0,#0x1
  subs r0,r0,r3
  sxth r0,r0
  bx lr
