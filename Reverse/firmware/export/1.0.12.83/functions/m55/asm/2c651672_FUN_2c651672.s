; FUN_2c651672 @ 0x2c651672 size=36
  push {r4,lr}
  mov r4,r0
  beq 0x2c651694
  ldr.w r3,[r3,#-0x4]
  cmp r3,#0x0
  ble 0x2c65168a
  movs r3,#0x0
  mov r2,r3
  mov r1,r3
  bl 0x2c6515d4
  ldr r3,[r4,#0x0]
  mov.w r2,#0xffffffff
  str.w r2,[r3,#-0x4]
  pop {r4,pc}
