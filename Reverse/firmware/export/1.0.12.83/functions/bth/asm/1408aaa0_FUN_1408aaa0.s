; FUN_1408aaa0 @ 0x1408aaa0 size=32
  push {r3,lr}
  ldr r3,[0x1408aac0]
  ldrb r1,[r3,#0x0]
  cbnz r1,0x1408aabc
  movs r2,#0x30
  mov r0,r3
  bl 0x140e5658
  movs r1,#0x1
  add.w r2,r0,#0x8
  strd r2,r2,[r0,#0x8]
  strb r1,[r0,#0x0]
  movs r0,#0x0
  pop {r3,pc}
