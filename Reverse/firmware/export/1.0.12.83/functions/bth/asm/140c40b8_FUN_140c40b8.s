; FUN_140c40b8 @ 0x140c40b8 size=42
  ldr r3,[r0,#0x0]
  ldr r2,[0x140c40e4]
  cmp r3,r2
  push {r4,lr}
  mov r4,r0
  beq 0x140c40e0
  ldr.w r3,[r3,#-0x4]
  cmp r3,#0x0
  ble 0x140c40d6
  movs r3,#0x0
  mov r2,r3
  mov r1,r3
  bl 0x140c4024
  ldr r3,[r4,#0x0]
  mov.w r2,#0xffffffff
  str.w r2,[r3,#-0x4]
  pop {r4,pc}
