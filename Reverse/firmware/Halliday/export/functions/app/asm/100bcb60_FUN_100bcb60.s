; FUN_100bcb60 @ 0x100bcb60 size=26
  push {r3,lr}
  ldr r3,[0x100bcb7c]
  ldrb r3,[r3,#0x0]
  cbnz r3,0x100bcb6c
  ldr r0,[0x100bcb80]
  pop {r3,pc}
  ldr r0,[0x100bcb84]
  bl 0x1011ea10
  cmp r0,#0x0
  beq 0x100bcb68
  ldr r0,[0x100bcb84]
  b 0x100bcb6a
