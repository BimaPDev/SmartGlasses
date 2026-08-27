; FUN_140d7c4c @ 0x140d7c4c size=52
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  mov r7,r0
  mov r9,r2
  mov r8,r1
  ldr r2,[0x140d7c80]
  mov r1,r3
  mov r6,r3
  bl 0x140d77d4
  ldr r5,[r7,#0x4]
  subs r4,r5,r6
  cmp r4,r9
  it cs
  mov.cs r4,r9
  cbz r4,0x140d7c7a
  ldr r1,[r7,#0x0]
  mov r2,r4
  mov r0,r8
  add.w r1,r1,r6, lsl #0x2
  bl 0x140d7822
  mov r0,r4
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
