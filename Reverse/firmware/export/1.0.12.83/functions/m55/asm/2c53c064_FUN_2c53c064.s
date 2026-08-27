; FUN_2c53c064 @ 0x2c53c064 size=34
  push {r3,lr}
  ldr r3,[r0,#0x4]
  cbz r3,0x2c53c082
  ldr r3,[r0,#0x8]
  cbz r3,0x2c53c082
  ldr r0,[r0,#0xc]
  cbz r0,0x2c53c080
  movs r1,#0x1
  mov r0,r3
  bl 0x2c606b94
  eor r0,r0,#0x1
  uxtb r0,r0
  pop {r3,pc}
  mov r0,r3
  pop {r3,pc}
