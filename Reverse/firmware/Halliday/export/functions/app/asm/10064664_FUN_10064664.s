; FUN_10064664 @ 0x10064664 size=36
  ldr r3,[0x10064688]
  push {r4,lr}
  ldr r0,[r3,#0x0]
  cbnz r0,0x1006467a
  mov.w r1,#0x114
  ldr r3,[0x1006468c]
  ldr r2,[0x10064690]
  ldr r0,[0x10064694]
  bl 0x10117c88
  movs r3,#0x0
  pop.w {r4,lr}
  movs r2,#0x4
  mov r1,r3
  b.w 0x1011dc6e
