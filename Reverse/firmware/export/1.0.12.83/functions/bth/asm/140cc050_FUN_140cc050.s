; FUN_140cc050 @ 0x140cc050 size=40
  ldr r3,[r0,#0x0]
  ldr.w r3,[r3,#-0xc]
  cmp r1,r3
  push {r4,lr}
  bls 0x140cc066
  mov r2,r1
  ldr r0,[0x140cc078]
  ldr r1,[0x140cc07c]
  bl 0x140cb80c
  subs r4,r3,r1
  movs r3,#0x0
  cmp r2,r4
  it cs
  mov.cs r2,r4
  pop.w {r4,lr}
  b.w 0x140c4024
