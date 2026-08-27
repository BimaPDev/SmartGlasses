; FUN_1403ae64 @ 0x1403ae64 size=38
  ldr r3,[0x1403ae8c]
  ldr r0,[r3,#0x78]
  cbz r0,0x1403ae72
  mov.w r1,#0xffffffff
  b.w 0x140e5148
  push {r4,lr}
  ldr r4,[0x1403ae90]
  sub sp,#0x8
  movs r1,#0x2c
  ldr r3,[0x1403ae94]
  ldr r2,[0x1403ae98]
  str r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x1402a6e8
  add sp,#0x8
  pop {r4,pc}
