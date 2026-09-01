; FUN_10083e38 @ 0x10083e38 size=38
  push {r4,r5,lr}
  mov r3,r0
  movs r4,#0xe
  movs r0,#0x0
  ldr r2,[0x10083e60]
  ldrb r1,[r2,#0x1a]
  ldr r2,[r2,#0x20]
  cmp r1,r0
  bgt 0x10083e50
  mov.w r0,#0xffffffff
  pop {r4,r5,pc}
  mul r5,r4,r0
  ldrb r5,[r2,r5]
  cmp r5,r3
  beq 0x10083e4e
  adds r0,#0x1
  b 0x10083e46
