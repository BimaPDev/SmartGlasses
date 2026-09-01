; FUN_100f4070 @ 0x100f4070 size=14
  ldr r3,[0x100f4080]
  ldrh r0,[r3,#0xe]
  ldrh r3,[r3,#0xa]
  adds r0,#0x1
  subs r0,r0,r3
  sxth r0,r0
  bx lr
