; FUN_2c5cb620 @ 0x2c5cb620 size=50
  push {r4,r5,lr}
  sub sp,#0xc
  bl 0x2c5c685c
  bl 0x2c5c6b7c
  subs r0,#0x1
  uxtb r0,r0
  cmp r0,#0x3
  bhi 0x2c5cb688
  ldr r3,[0x2c5cb68c]
  ldr.w r4,[r3,r0,lsl #0x2]
  ldr r0,[0x2c5cb690]
  mov.w r2,#0x2c0
  ldr r3,[0x2c5cb694]
  ldr r1,[0x2c5cb698]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
  movs r4,#0x0
  b 0x2c5cb63a
