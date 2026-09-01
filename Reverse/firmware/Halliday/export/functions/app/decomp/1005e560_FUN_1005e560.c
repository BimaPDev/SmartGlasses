/* FUN_1005e560 @ 0x1005e560 */

void FUN_1005e560(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_10112e84(PTR_s_lcd_panel_101652f7_0x14_1005e62c);
  piVar2 = *(int **)(iVar1 + 0x10);
  if (piVar2[0xcb] != 0) {
    iVar3 = *piVar2;
    pcVar4 = *(code **)(*(int *)(iVar3 + 0x3c) + 0x24);
    if ((pcVar4 == (code *)0x0) ||
       (iVar1 = (*pcVar4)(iVar1,(short)piVar2[0xd6],*(undefined2 *)((int)piVar2 + 0x35a),
                          (short)piVar2[0xd7],*(undefined2 *)((int)piVar2 + 0x35e)), iVar1 == 0)) {
      *(byte *)((int)piVar2 + 0x31d) =
           *(byte *)((int)piVar2 + 0x31d) & 0xfb |
           (0x167 < (uint)*(ushort *)((int)piVar2 + 0x35a) + (uint)*(ushort *)((int)piVar2 + 0x35e))
           << 2;
      (**(code **)(*(int *)(piVar2[1] + 8) + 0x10))(piVar2[1],2,0);
      iVar1 = (**(code **)(*(int *)(piVar2[1] + 8) + 0x20))
                        (piVar2[1],*(undefined4 *)(iVar3 + 0x4c),0xffffffff,piVar2 + 0xcc,
                         piVar2[0xcb]);
      if (iVar1 != 0) {
        FUN_100a5b78(DAT_1005e644 | ((int)PTR_DAT_1005e634 - (int)PTR_DAT_1005e630) * 0x20 & 0xff00U
                     ,DAT_1005e63c,DAT_1005e648);
        *(undefined1 *)((int)piVar2 + 0x31e) = 0;
      }
    }
    else {
      FUN_100a5b78(DAT_1005e638 | ((int)PTR_DAT_1005e634 - (int)PTR_DAT_1005e630) * 0x20 & 0xff00U,
                   DAT_1005e63c,DAT_1005e640,(short)piVar2[0xd6],
                   *(undefined2 *)((int)piVar2 + 0x35a),(short)piVar2[0xd7],
                   *(undefined2 *)((int)piVar2 + 0x35e));
    }
  }
  return;
}

