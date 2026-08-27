; FUN_2c620f0c @ 0x2c620f0c size=42
  push {r3,r4,r5,r6,r7,lr}
  mov r7,r0
  mov r6,r1
  mov r5,r2
  bl 0x2c628c58
  ldr r0,[0x2c620f38]
  bl 0x2c62c968
  mov r4,r0
  cbz r0,0x2c620f32
  movs r1,#0x14
  bl 0x2c62c3b0
  movs r3,#0x0
  str r5,[r4,#0x8]
  strb r3,[r4,#0x10]
  strd r7,r6,[r4,#0x0]
  mov r0,r4
  pop {r3,r4,r5,r6,r7,pc}
