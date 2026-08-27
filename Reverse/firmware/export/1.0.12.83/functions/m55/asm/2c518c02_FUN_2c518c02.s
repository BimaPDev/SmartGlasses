; FUN_2c518c02 @ 0x2c518c02 size=36
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0xc
  mov r0,r1
  bl 0x2c5e8fb4
  ldr r3,[r4,#0x30]
  cbz r3,0x2c518c4c
  ldr r0,[0x2c518c54]
  movs r2,#0x48
  ldr r1,[0x2c518c58]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c518c5c]
  bl 0x2c62c82c
  add sp,#0xc
  pop {r4,r5,pc}
