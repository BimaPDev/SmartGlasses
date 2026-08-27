; FUN_2c545528 @ 0x2c545528 size=42
  push {r3,r4,r5,lr}
  ldrh r3,[r1,#0x26]
  cmp r3,#0x4
  bne 0x2c54554c
  ldr r5,[r0,#0x4]
  mov r4,r1
  ldr.w r3,[r5,#0x114]
  mov r0,r5
  ldr r1,[r3,#0x10]
  bl 0x2c54800c
  mov r1,r4
  mov r0,r5
  bl 0x2c547648
  movs r0,#0x0
  pop {r3,r4,r5,pc}
  mov.w r0,#0xffffffff
  pop {r3,r4,r5,pc}
