; FUN_1012d884 @ 0x1012d884 size=44
  push {r3,r4,r5,lr}
  mov r4,r0
  bl 0x10067f20
  cmp r4,#0x18
  beq 0x1012d8ae
  ldrb.w r3,[r4,#-0x18]
  lsls r3,r3,#0x1f
  bmi 0x1012d8ae
  sub.w r5,r4,#0x14
  ldr.w r3,[r5],#0x4
  cbz r3,0x1012d8aa
  blx r3
  cbz r0,0x1012d8aa
  bl 0x100a1b34
  cmp r5,r4
  bne 0x1012d89c
  pop {r3,r4,r5,pc}
