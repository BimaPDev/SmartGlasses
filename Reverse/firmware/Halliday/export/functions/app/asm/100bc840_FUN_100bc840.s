; FUN_100bc840 @ 0x100bc840 size=38
  push {r4,lr}
  mov r4,r0
  bl 0x10131468
  ldr r3,[0x100bc868]
  cbz r4,0x100bc85a
  pop.w {r4,lr}
  str r0,[r3,#0x0]
  movs r1,#0x1
  ldr r0,[0x100bc86c]
  b.w 0x101314e8
  ldr r2,[r3,#0x0]
  subs r2,r0,r2
  cmp.w r2,#0x258
  bhi 0x100bc84c
  pop {r4,pc}
