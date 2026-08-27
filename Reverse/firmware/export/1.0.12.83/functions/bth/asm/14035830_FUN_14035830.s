; FUN_14035830 @ 0x14035830 size=24
  ldr r2,[0x14035848]
  ldr r1,[0x1403584c]
  ldrh r3,[r2,#0x0]
  ubfx r0,r0,#0x0,#0x9
  and r3,r3,#0xfe00
  orrs r0,r3
  strh r0,[r2,#0x0]
  strh r0,[r1,#0x0]
  b.w 0x14030824
