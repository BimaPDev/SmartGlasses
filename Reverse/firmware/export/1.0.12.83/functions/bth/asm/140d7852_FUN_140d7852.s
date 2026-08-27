; FUN_140d7852 @ 0x140d7852 size=50
  mov r3,r1
  mov r1,r2
  cmp r3,#0x1
  push {r4}
  mov r4,r0
  bne 0x140d7866
  str r2,[r4,#0x0]
  pop.w r4
  bx lr
  cmp r3,#0x0
  beq 0x140d7860
  mov r2,r3
  pop.w r4
  b.w 0x140df884
  movs r3,#0x0
  cmp r3,r2
  bne 0x140df88c
  bx lr
  str.w r1,[r0,r3,lsl #0x2]
  adds r3,#0x1
  b 0x140df886
