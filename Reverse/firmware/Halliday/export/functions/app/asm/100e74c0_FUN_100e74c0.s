; FUN_100e74c0 @ 0x100e74c0 size=20
  push {r4,lr}
  mov r4,r0
  bl 0x100bbd70
  ldr r3,[0x100e74d4]
  strb r4,[r3,#0x0]
  bl 0x100bbd80
  movs r0,#0x0
  pop {r4,pc}
