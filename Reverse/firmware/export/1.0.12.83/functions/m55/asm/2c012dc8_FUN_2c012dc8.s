; FUN_2c012dc8 @ 0x2c012dc8 size=28
  push {r3,lr}
  ldr r3,[0x2c012de4]
  ldrb r3,[r3,#0x0]
  subs r3,#0x1
  cmp r3,#0x1
  bls 0x2c012de0
  mov r1,r0
  movs r0,#0x51
  bl 0x2c008f74
  movs r0,#0x0
  pop {r3,pc}
  movs r0,#0x1
  pop {r3,pc}
