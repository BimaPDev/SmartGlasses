; FUN_2c650e74 @ 0x2c650e74 size=40
  ldr r3,[r0,#0x0]
  push {r0,r1,r4,lr}
  mov r4,r0
  sub.w r0,r3,#0xc
  ldr.w r3,[r3,#-0x4]
  cmp r3,#0x0
  ble 0x2c650e94
  add r1,sp,#0x4
  bl 0x2c650e44
  ldr r3,[0x2c650e9c]
  str r3,[r4,#0x0]
  add sp,#0x8
  pop {r4,pc}
  movs r1,#0x0
  bl 0x2c650d4c
  b 0x2c650e90
