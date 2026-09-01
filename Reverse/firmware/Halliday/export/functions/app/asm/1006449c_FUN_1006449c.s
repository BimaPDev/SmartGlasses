; FUN_1006449c @ 0x1006449c size=40
  ldr r3,[0x100644c4]
  push {r0,r1,r4,lr}
  ldr r4,[r3,#0x0]
  cbnz r4,0x100644b0
  movs r1,#0xb4
  ldr r3,[0x100644c8]
  ldr r2,[0x100644cc]
  ldr r0,[0x100644d0]
  bl 0x10117c88
  strd r1,r1,[sp,#0x0]
  mov r3,sp
  mov r1,r0
  movs r2,#0x8c
  mov r0,r4
  bl 0x1011dc6e
  add sp,#0x8
  pop {r4,pc}
