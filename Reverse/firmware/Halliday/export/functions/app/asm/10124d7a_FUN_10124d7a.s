; FUN_10124d7a @ 0x10124d7a size=54
  push {r4,r5,r6,lr}
  mov r5,r0
  movs r0,#0x0
  bl 0x10092f64
  mov r2,r0
  cbz r0,0x10124dae
  movs r4,#0x0
  ldr r6,[r0,#0x24]
  b 0x10124da4
  ldr r3,[r2,#0xc]
  ldr.w r0,[r3,r4,lsl #0x2]
  cmp r0,r5
  beq 0x10124dac
  mov r1,r5
  adds r0,#0x8
  bl 0x10124944
  cbnz r0,0x10124dae
  adds r4,#0x1
  cmp r6,r4
  bne 0x10124d8e
  mov r0,r2
  b 0x10124d80
  movs r0,#0x1
  pop {r4,r5,r6,pc}
