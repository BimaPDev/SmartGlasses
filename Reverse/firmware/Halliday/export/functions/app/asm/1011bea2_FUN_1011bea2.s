; FUN_1011bea2 @ 0x1011bea2 size=26
  cmp r1,#0x1
  mov r3,r0
  bhi 0x1011beb8
  adds r3,#0x8
  lda r3,[r3]
  asr.w r1,r3,r1
  and r0,r1,#0x1
  bx lr
  movs r0,#0x0
  bx lr
