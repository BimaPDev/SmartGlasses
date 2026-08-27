; FUN_1408ad70 @ 0x1408ad70 size=36
  cbz r0,0x1408ad90
  push {r4,lr}
  mov r4,r0
  ldr.w r0,[r0,#-0xc]
  cbz r0,0x1408ad8c
  bl 0x1408a798
  cbz r0,0x1408ad8c
  ldr.w r3,[r4,#-0xc]
  cbz r3,0x1408ad8c
  ldrb r0,[r3,#0x11]
  pop {r4,pc}
  movs r0,#0xff
  pop {r4,pc}
  movs r0,#0xff
  bx lr
