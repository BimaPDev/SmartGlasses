; FUN_140dc530 @ 0x140dc530 size=34
  mov r3,r0
  push {r4,r5,r6,lr}
  mov r6,r3
  ldrb.w r4,[r3],#0x1
  cbz r4,0x140dc54e
  subs r2,r1,#0x1
  b 0x140dc544
  cmp r5,r4
  beq 0x140dc54e
  ldrb.w r5,[r2,#0x1]!
  cmp r5,#0x0
  bne 0x140dc540
  b 0x140dc534
  subs r0,r6,r0
  pop {r4,r5,r6,pc}
