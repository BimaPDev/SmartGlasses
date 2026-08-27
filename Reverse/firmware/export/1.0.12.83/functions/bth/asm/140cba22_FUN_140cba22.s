; FUN_140cba22 @ 0x140cba22 size=32
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r0,[r0,#0x18]
  cbz r0,0x140cba3c
  ldr r3,[r0,#0xc]
  subs r2,r3,#0x1
  str r2,[r0,#0xc]
  cbnz r3,0x140cba3c
  ldr r5,[r0,#0x0]
  bl 0x140d7e48
  mov r0,r5
  b 0x140cba28
  movs r3,#0x0
  str r3,[r4,#0x18]
  pop {r3,r4,r5,pc}
