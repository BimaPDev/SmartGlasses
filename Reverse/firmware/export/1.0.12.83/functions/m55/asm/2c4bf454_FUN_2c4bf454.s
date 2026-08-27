; FUN_2c4bf454 @ 0x2c4bf454 size=46
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x2c4bf484]
  bl 0x2c6740f8
  cbnz r0,0x2c4bf47c
  ldr r3,[0x2c4bf488]
  movs r1,#0x41
  ldr r2,[0x2c4bf48c]
  str.w r0,[r3,#0x1c8]
  str.w r1,[r3,#0x1f8]
  str.w r4,[r3,#0xf4]
  str.w r2,[r3,#0x180]
  str.w r0,[r3,#0x224]
  pop {r4,pc}
  mov.w r0,#0xffffffff
  pop {r4,pc}
