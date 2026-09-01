; FUN_1005d1b8 @ 0x1005d1b8 size=32
  push {r3,r4,r5,lr}
  ldr r5,[0x1005d1d8]
  mov r4,r1
  ldrb r3,[r5,#0x18]
  cbnz r3,0x1005d1ca
  bl 0x100539a4
  mov r0,r4
  pop {r3,r4,r5,pc}
  bl 0x1005cf54
  mov r4,r0
  mov r0,r5
  bl 0x1011b9ae
  b 0x1005d1c6
