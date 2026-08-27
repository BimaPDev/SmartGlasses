; FUN_2c4e6674 @ 0x2c4e6674 size=46
  push {r4,r5,r6,lr}
  mov r4,r0
  bl 0x2c4e67ec
  ldr r3,[0x2c4e66a4]
  movs r2,#0x0
  subs r4,#0x3
  ldr.w r5,[r3,r4,lsl #0x2]
  str.w r2,[r3,r4,lsl #0x2]
  bl 0x2c4e6800
  cbz r5,0x2c4e669c
  ldr r3,[r5,#0x0]
  mov r0,r5
  ldr r3,[r3,#0x4]
  pop.w {r4,r5,r6,lr}
  bx r3
  mov.w r0,#0xffffffff
  pop {r4,r5,r6,pc}
