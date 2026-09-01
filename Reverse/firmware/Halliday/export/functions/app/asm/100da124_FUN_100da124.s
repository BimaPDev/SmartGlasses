; FUN_100da124 @ 0x100da124 size=38
  push {r4,r5,r6,lr}
  mov r5,r0
  mov r4,r1
  bl 0x10136516
  cmp r5,r0
  bne 0x100da148
  ldr r3,[0x100da14c]
  ldr r3,[r3,#0x0]
  ldr r5,[r3,#0x0]
  bl 0x10131c1c
  mov r2,r4
  mov r3,r5
  pop.w {r4,r5,r6,lr}
  movs r1,#0x5
  bx r3
  pop {r4,r5,r6,pc}
