; FUN_2c5c8040 @ 0x2c5c8040 size=42
  push {r4,r5,lr}
  sub sp,#0xc
  mov r5,r0
  bl 0x2c5c685c
  bl 0x2c5c6b9c
  cbz r0,0x2c5c8054
  add sp,#0xc
  pop {r4,r5,pc}
  mov r4,r0
  ldr r0,[0x2c5c807c]
  movw r2,#0x26d
  ldr r1,[0x2c5c8080]
  ldr r3,[0x2c5c8084]
  strd r0,r5,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
