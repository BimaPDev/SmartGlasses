; lvgl_async  entry=0x2c63f0d8  file=0x62f0d8
; text_base=0x2c010000  insns=22  returns=0
; service_loop unconditional_tail_back_edge  0x2c63f10c b -> 0x2c63f108

0x2c63f0d8  00b5          push {lr}
0x2c63f0da  0d4c          ldr r4, [pc, #0x34]
0x2c63f0dc  83b0          sub sp, #0xc
0x2c63f0de  0d4a          ldr r2, [pc, #0x34]
0x2c63f0e0  4c21          movs r1, #0x4c
0x2c63f0e2  0d4b          ldr r3, [pc, #0x34]
0x2c63f0e4  0420          movs r0, #4
0x2c63f0e6  0094          str r4, [sp]
0x2c63f0e8  44f04efe      bl #0x2c683d88
0x2c63f0ec  0b4b          ldr r3, [pc, #0x2c]
0x2c63f0ee  0c4c          ldr r4, [pc, #0x30]
0x2c63f0f0  4ff0ff31      mov.w r1, #-1
0x2c63f0f4  1868          ldr r0, [r3]
0x2c63f0f6  18f05df8      bl #0x2c6571b4
0x2c63f0fa  074b          ldr r3, [pc, #0x1c]
0x2c63f0fc  054a          ldr r2, [pc, #0x14]
0x2c63f0fe  5021          movs r1, #0x50
0x2c63f100  0420          movs r0, #4
0x2c63f102  0094          str r4, [sp]
0x2c63f104  44f040fe      bl #0x2c683d88
0x2c63f108  fff75eff      bl #0x2c63efc8
0x2c63f10c  fce7          b #0x2c63f108
