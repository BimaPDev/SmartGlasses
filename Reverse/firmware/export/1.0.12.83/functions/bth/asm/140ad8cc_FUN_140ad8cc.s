; FUN_140ad8cc @ 0x140ad8cc size=34
  push {r4,lr}
  ldr r4,[0x140ad8f0]
  ldr r2,[r4,#0x0]
  cbz r2,0x140ad8d8
  movs r0,#0x0
  pop {r4,pc}
  ldr r1,[0x140ad8f4]
  ldr r3,[0x140ad8f8]
  strb r2,[r1,#0x0]
  ldr r0,[0x140ad8fc]
  mov r1,r2
  str r2,[r3,#0x0]
  bl 0x140e52f8
  str r0,[r4,#0x0]
  movs r0,#0x0
  pop {r4,pc}
