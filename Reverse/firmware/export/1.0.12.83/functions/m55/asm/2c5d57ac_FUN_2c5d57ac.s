; FUN_2c5d57ac @ 0x2c5d57ac size=40
  push {r4,r5,lr}
  sub sp,#0xc
  mov r4,r1
  bl 0x2c621080
  mov r5,r0
  cbz r0,0x2c5d57e2
  ldr r1,[r4,#0x0]
  movs r0,#0x4
  ldr r2,[0x2c5d588c]
  ldr r3,[0x2c5d5890]
  strd r2,r1,[sp,#0x0]
  mov.w r2,#0x1aa
  ldr r1,[0x2c5d5894]
  bl 0x2c62c82c
  add sp,#0xc
  pop {r4,r5,pc}
