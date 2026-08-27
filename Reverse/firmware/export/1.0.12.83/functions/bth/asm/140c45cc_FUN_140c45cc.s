; FUN_140c45cc @ 0x140c45cc size=54
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r0
  mov r8,r2
  mov r7,r1
  ldr r2,[0x140c4604]
  mov r1,r3
  mov r6,r3
  bl 0x140c4514
  ldr r1,[r4,#0x0]
  ldr.w r5,[r1,#-0xc]
  subs r4,r5,r6
  cmp r4,r8
  it cs
  mov.cs r4,r8
  cbz r4,0x140c45fc
  mov r2,r4
  add.w r1,r1,r6, lsl #0x2
  mov r0,r7
  bl 0x140c456c
  mov r0,r4
  pop.w {r4,r5,r6,r7,r8,pc}
