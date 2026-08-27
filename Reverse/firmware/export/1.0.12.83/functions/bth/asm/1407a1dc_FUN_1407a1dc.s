; FUN_1407a1dc @ 0x1407a1dc size=36
  push {r4,lr}
  movs r1,#0x2
  movs r0,#0x17
  ldr r3,[0x1407a204]
  ldr r2,[0x1407a208]
  bl 0x1408aac4
  cmp r0,#0x1
  it ne
  mov.ne r4,#0x0
  beq 0x1407a1f6
  mov r0,r4
  pop {r4,pc}
  mov r4,r0
  ldr r1,[0x1407a20c]
  movs r0,#0x40
  bl 0x1402a64c
