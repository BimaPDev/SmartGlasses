; FUN_140d2fc0 @ 0x140d2fc0 size=68
  push {r4,r5,r6,r7,r8,lr}
  mov r5,r0
  ldr r0,[0x140d3004]
  bl 0x140c03c0
  mov r4,r0
  ldr r3,[r5,#0x0]
  ldr r7,[r3,#0xc]
  ldr.w r8,[r7,r0,lsl #0x2]
  cmp.w r8,#0x0
  bne 0x140d2ffc
  movs r0,#0x70
  bl 0x140bff34
  mov r6,r0
  mov r1,r8
  bl 0x140d2514
  mov r1,r5
  mov r0,r6
  bl 0x140d2e78
  mov r2,r4
  mov r1,r6
  ldr r0,[r5,#0x0]
  bl 0x140c054c
  ldr.w r0,[r7,r4,lsl #0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
