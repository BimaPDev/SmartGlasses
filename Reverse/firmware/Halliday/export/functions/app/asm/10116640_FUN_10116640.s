; FUN_10116640 @ 0x10116640 size=36
  ldr r3,[0x10116664]
  push {r4,lr}
  ldr r2,[r3,#0x8]
  ldr.w r3,[r2,#0xa8]!
  cmp r3,r2
  beq 0x1011665e
  cbz r3,0x1011665e
  ldr r4,[r3,#0x10]
  bl 0x1013ce56
  subs r0,r4,r0
  bic.w r0,r0,r0, asr #0x1f
  pop {r4,pc}
  mov.w r0,#0xffffffff
  b 0x1011665c
