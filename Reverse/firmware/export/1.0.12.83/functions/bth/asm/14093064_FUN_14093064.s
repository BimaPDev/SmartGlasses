; FUN_14093064 @ 0x14093064 size=26
  push {r3,lr}
  ldr r3,[0x14093084]
  ldr r2,[r3,#0x4]
  cmp r2,r0
  bne 0x14093072
  ldrb r0,[r3,#0x1]
  pop {r3,pc}
  mov r3,lr
  ldr r2,[0x14093088]
  ldr r1,[0x1409308c]
  movs r0,#0x42
  bl 0x1402a64c
