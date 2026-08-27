/* FUN_14073468 @ 0x14073468 */

undefined4 FUN_14073468(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  
  uVar4 = (uint)(ushort)(param_3 + param_4 + param_2);
  if (uVar4 < 0x21) {
    iVar1 = FUN_14073a58(DAT_14073578);
    uVar5 = 0xf8;
    uVar3 = 0x20;
LAB_140734d0:
    if (iVar1 != 0) {
      param_4 = (short)uVar3 - (param_2 + param_3);
      goto LAB_140734de;
    }
  }
  else {
    if (uVar4 < 0x41) {
      iVar1 = FUN_14073a58(DAT_14073574);
      uVar5 = 0xf9;
      uVar3 = 0x40;
      goto LAB_140734d0;
    }
    if (uVar4 < 0x81) {
      iVar1 = FUN_14073a58(DAT_14073580);
      uVar5 = 0xfa;
      uVar3 = 0x80;
      goto LAB_140734d0;
    }
    if (uVar4 < 0x201) {
      iVar1 = FUN_14073a58(DAT_14073584);
      uVar5 = 0xfb;
      uVar3 = 0x200;
      goto LAB_140734d0;
    }
    if (uVar4 < 0x401) {
      iVar1 = FUN_14073a58(DAT_1407357c);
      uVar5 = 0xfc;
      uVar3 = 0x400;
      goto LAB_140734d0;
    }
  }
  iVar1 = FUN_14073eec(uVar4 + 0x38,2);
  if ((iVar1 == 0) || (iVar2 = FUN_14073fdc(uVar4 + 0x38,2), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_14073570,0x16a,DAT_1407356c,2,0);
  }
  iVar1 = iVar2 + 4;
  FUN_140739f0(DAT_14073588,iVar2);
  uVar5 = 0xfe;
  uVar3 = uVar4;
LAB_140734de:
  FUN_140e5658(iVar1,0,uVar3 + 0x34);
  *(short *)(iVar1 + 4) = param_3;
  *(short *)(iVar1 + 6) = param_2;
  *(short *)(iVar1 + 8) = param_4;
  *(undefined1 *)(iVar1 + 10) = uVar5;
  *(undefined1 *)(iVar1 + 0xb) = 1;
  *(undefined2 *)(iVar1 + 0x2c) = 0xa5;
  *param_1 = iVar1;
  return 0;
}

