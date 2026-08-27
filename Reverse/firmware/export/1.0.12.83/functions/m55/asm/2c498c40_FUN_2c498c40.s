; FUN_2c498c40 @ 0x2c498c40 size=18
  push {r3,lr}
  ldr r3,[0x2c498c54]
  mov.w r1,#0xffffffff
  ldr r0,[r3,#0x38]
  bl 0x2c644044
  movs r0,#0x0
  pop {r3,pc}
