; FUN_1407a318 @ 0x1407a318 size=32
  push {r4,r5,r6,lr}
  mov r4,r0
  ldr.w r5,[r4],#0x4
  str r2,[r5,#0x7c]
  mov r0,r4
  ldr.w r6,[r5,#0x80]
  bl 0x140862b4
  mov r3,r4
  mov r1,r5
  movs r2,#0x19
  blx r6
  movs r0,#0x0
  pop {r4,r5,r6,pc}
