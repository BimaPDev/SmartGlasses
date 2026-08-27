; FUN_140c0378 @ 0x140c0378 size=22
  ldr r3,[0x140c0390]
  push {r4,lr}
  ldr r3,[r3,#0x0]
  mov r4,r0
  ldr r0,[r0,#0x0]
  cmp r0,r3
  beq 0x140c038a
  bl 0x140c035a
  mov r0,r4
  pop {r4,pc}
