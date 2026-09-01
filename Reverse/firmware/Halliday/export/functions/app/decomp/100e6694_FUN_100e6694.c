/* FUN_100e6694 @ 0x100e6694 */

undefined1 FUN_100e6694(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = DAT_100e670c;
  if (param_1 == 0) {
    return 0;
  }
  FUN_100e6120(0xffffffff,0xffffffff,param_3,param_4,param_4);
  if ((param_1 != *piVar1) && (param_1 != piVar1[0x87])) {
    iVar3 = 0;
    if (*piVar1 != 0) {
      if (piVar1[0x87] != 0) goto LAB_100e66fc;
      iVar3 = 1;
    }
    piVar4 = piVar1 + iVar3 * 0x87;
    FUN_1011ea48(piVar4,0);
    *(byte *)(piVar4 + 3) = (byte)iVar3 | 0x80;
    piVar4[5] = param_2;
    *(undefined1 *)((int)piVar4 + 0xd) = 1;
    piVar1[iVar3 * 0x87] = param_1;
    FUN_10138b22(piVar4);
    iVar3 = FUN_100c41fc(param_1,DAT_100e6710);
    if (iVar3 == 0) {
      uVar2 = (undefined1)piVar4[3];
      goto LAB_100e6702;
    }
    FUN_10138b18(piVar4);
  }
LAB_100e66fc:
  uVar2 = 0;
LAB_100e6702:
  FUN_100e6114();
  return uVar2;
}

