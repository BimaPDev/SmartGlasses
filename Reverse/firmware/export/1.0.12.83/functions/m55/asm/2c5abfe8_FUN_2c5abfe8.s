; FUN_2c5abfe8 @ 0x2c5abfe8 size=40
  push {r4,r5,lr}
  sub sp,#0xc
  mov r4,r1
  bl 0x2c621080
  mov r5,r0
  cbz r0,0x2c5ac01e
  ldr r1,[r4,#0x0]
  movs r0,#0x4
  ldr r2,[0x2c5ac090]
  ldr r3,[0x2c5ac094]
  strd r2,r1,[sp,#0x0]
  movw r2,#0x242
  ldr r1,[0x2c5ac098]
  bl 0x2c62c82c
  add sp,#0xc
  pop {r4,r5,pc}
