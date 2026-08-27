; FUN_2c098da0 @ 0x2c098da0 size=28
  subs r5,#0xc8
  pop {r3,r6,r7}
  movs r0,#0x94
  str r4,[sp,#0x180]
  subs r5,#0xc8
  cmp r5,#0xf3
  subs r5,#0xc8
  str r6,[r6,#0x10]
  cdp2 p2,0x0,cr0,cr0,cr2,0x0
  asrs r4,r0,#0x18
  movs r2,#0xfd
  push {r4,r6,lr}
  b 0x2c0987e6
