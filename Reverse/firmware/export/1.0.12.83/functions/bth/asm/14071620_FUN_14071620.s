; FUN_14071620 @ 0x14071620 size=70
  cmp r0,#0x1
  bhi 0x1407165e
  ldr r3,[0x14071668]
  adds r0,#0x6
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x14071664
  ldrb.w r3,[r0,#0x3c]
  cmp r3,r1
  bls 0x1407165e
  adds r1,#0x10
  ldr.w r3,[r0,r1,lsl #0x2]
  cbz r3,0x14071662
  ldrh r2,[r3,#0x12]
  ldrh r0,[r3,#0x1a]
  lsls r2,r2,#0x18
  bmi 0x14071664
  ldrh r2,[r3,#0x24]
  ldrh r3,[r3,#0x1e]
  mul r3,r2,r3
  cmp r3,#0x2
  it gt
  sub.gt r3,#0x2
  cmp r0,r3
  it cs
  mov.cs r0,r3
  uxth r0,r0
  bx lr
  movs r0,#0x0
  bx lr
  mov r0,r3
  bx lr
