; FUN_2c4e66a8 @ 0x2c4e66a8 size=44
  cmp r0,#0x2
  ble 0x2c4e66bc
  ldr r3,[0x2c4e66d4]
  subs r0,#0x3
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x2c4e66ce
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x0]
  bx r3
  mov r3,r1
  mov r1,r2
  push {r4,lr}
  mov r4,r2
  mov r0,r3
  bl 0x2c674158
  mov r0,r4
  pop {r4,pc}
  mov.w r0,#0xffffffff
  bx lr
