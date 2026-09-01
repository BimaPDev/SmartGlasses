; FUN_10133d42 @ 0x10133d42 size=26
  push {r3,lr}
  bl 0x100ca22c
  mov r3,r0
  cbz r0,0x10133d58
  ldrb r2,[r0,#0xd]
  cmp r2,#0x6
  beq 0x10133d58
  bl 0x100ca13c
  movs r3,#0x0
  mov r0,r3
  pop {r3,pc}
