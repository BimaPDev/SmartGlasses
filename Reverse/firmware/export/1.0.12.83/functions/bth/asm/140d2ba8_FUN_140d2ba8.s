; FUN_140d2ba8 @ 0x140d2ba8 size=48
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x140d2bd8]
  bl 0x140c03c0
  ldr r3,[r4,#0x0]
  ldr r2,[r3,#0x8]
  cmp r2,r0
  bls 0x140d2bd4
  ldr r3,[r3,#0x4]
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x140d2bd2
  movs r3,#0x0
  ldr r2,[0x140d2bdc]
  ldr r1,[0x140d2be0]
  bl 0x140d7e50
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r4,pc}
  movs r0,#0x0
  b 0x140d2bd2
