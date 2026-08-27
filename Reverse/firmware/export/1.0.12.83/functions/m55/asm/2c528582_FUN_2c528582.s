; FUN_2c528582 @ 0x2c528582 size=40
  push {r4,lr}
  ldrb.w r3,[r1,#0x45]
  sub sp,#0x8
  mov r4,r1
  cbnz r3,0x2c528594
  movs r0,#0x1
  add sp,#0x8
  pop {r4,pc}
  ldrh r0,[r1,#0x3a]
  movw r2,#0x312
  ldr r1,[0x2c5285c8]
  ldr r3,[0x2c5285cc]
  strd r1,r0,[sp,#0x0]
  ldr r1,[0x2c5285d0]
  movs r0,#0x4
  bl 0x2c62c82c
