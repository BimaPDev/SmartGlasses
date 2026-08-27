; FUN_2c00961c @ 0x2c00961c size=30
  push {r4,r5,lr}
  mov r4,r1
  ldr r1,[0x2c00963c]
  sub sp,#0xc
  mov r5,r2
  mov r3,r0
  ldrb r2,[r1,#0xb]
  ldr r1,[r1,#0x4]
  movs r0,#0x0
  strd r4,r5,[sp,#0x0]
  bl 0x2c009128
  add sp,#0xc
  pop {r4,r5,pc}
