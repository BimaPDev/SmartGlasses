; FUN_140d24a4 @ 0x140d24a4 size=40
  ldr r3,[r0,#0x0]
  ldr.w r3,[r3,#-0xc]
  cmp r1,r3
  push {r4,lr}
  bls 0x140d24ba
  mov r2,r1
  ldr r0,[0x140d24cc]
  ldr r1,[0x140d24d0]
  bl 0x140cb80c
  subs r4,r3,r1
  movs r3,#0x0
  cmp r2,r4
  it cs
  mov.cs r2,r4
  pop.w {r4,lr}
  b.w 0x140c4024
