; FUN_100ca37c @ 0x100ca37c size=58
  push {r4,lr}
  bl 0x100ca324
  mov r4,r0
  cbz r0,0x100ca3b4
  ldr r2,[0x100ca3b8]
  ldr r3,[0x100ca3bc]
  ldr r0,[0x100ca3c0]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldrb r3,[r4,#0xd]
  ldr r1,[0x100ca3c4]
  cmp r3,#0x8
  itet ls
  ldr.ls r2,[0x100ca3c8]
  ldr.hi r3,[0x100ca3cc]
  ldr.ls.w r3,[r2,r3,lsl #0x2]
  ldr r2,[0x100ca3d0]
  bl 0x100a5b78
  mov r0,r4
  bl 0x100ca13c
  movs r0,#0x1
  pop {r4,pc}
