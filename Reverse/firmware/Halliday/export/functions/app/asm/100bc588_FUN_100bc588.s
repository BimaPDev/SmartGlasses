; FUN_100bc588 @ 0x100bc588 size=34
  push {r4,lr}
  ldr r4,[0x100bc5ac]
  bl 0x10131468
  ldr r2,[r4,#0xc]
  cbz r2,0x100bc59c
  subs r0,r0,r2
  cmp.w r0,#0x258
  bcc 0x100bc5a6
  bl 0x10131468
  str r0,[r4,#0xc]
  movs r0,#0x1
  pop {r4,pc}
  movs r0,#0x0
  b 0x100bc5a4
