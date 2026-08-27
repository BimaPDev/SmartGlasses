; FUN_2c517420 @ 0x2c517420 size=36
  push {r3,r4,r5,lr}
  mov r4,r0
  movs r5,#0x0
  ldr.w r0,[r0,#0xb0]
  strb.w r5,[r4,#0xbe]
  cbz r0,0x2c517438
  bl 0x2c62bea8
  str.w r5,[r4,#0xb0]
  ldr r1,[0x2c517444]
  mov r0,r4
  bl 0x2c62e838
  mov r0,r4
  pop {r3,r4,r5,pc}
