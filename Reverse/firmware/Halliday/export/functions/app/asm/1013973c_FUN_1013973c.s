; FUN_1013973c @ 0x1013973c size=38
  push {r3,r4,r5,lr}
  mov r5,r1
  ldr r3,[r0,#0x0]
  mov r4,r0
  ldrb r2,[r3,#0x1e]
  bfc r2,#0x1,#0x1
  strb r2,[r3,#0x1e]
  ldr r0,[r0,#0x4]
  bl 0x1012b32c
  cbz r5,0x1013975e
  mov r0,r4
  bl 0x10086bac
  bl 0x10125af4
  movs r0,#0x0
  pop {r3,r4,r5,pc}
