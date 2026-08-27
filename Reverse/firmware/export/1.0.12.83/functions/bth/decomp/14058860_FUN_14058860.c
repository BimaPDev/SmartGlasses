/* FUN_14058860 @ 0x14058860 */

undefined4 FUN_14058860(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_14058964;
  if (30000 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1405896c,0x188,DAT_14058968,param_4);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1405896c,0x189,DAT_14058968,param_4);
  }
  if ((2 < *(byte *)(param_1 + 1)) ||
     (*(int *)(DAT_14058964 + (uint)*(byte *)(param_1 + 1) * 4) == 0)) {
    return 0x43;
  }
  if (30000 < param_2) {
    return 0x40;
  }
  uVar3 = FUN_140e5848();
  uVar3 = param_2 + (uVar3 >> 4);
  if (*param_1 != -1) {
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 0x10;
    FUN_140587d4(param_1);
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) & 0xef;
  }
  param_1[1] = *(ushort *)(param_1 + 1) & 0xffff3fff | uVar3 * 0x10000;
  uVar2 = DAT_14058970;
  if (*(int **)(iVar1 + 0x44) == (int *)0x0) {
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 1;
  }
  else if (param_2 < *(ushort *)(iVar1 + 0x4c)) {
    piVar5 = (int *)0x0;
    piVar6 = *(int **)(iVar1 + 0x44);
    do {
      piVar4 = (int *)*piVar6;
      if ((int)(((uVar3 & 0xffff) - (uint)*(ushort *)((int)piVar6 + 6)) * 0x10000) < 0) {
        if (piVar5 == (int *)0x0) {
          *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 1;
          FUN_14073a28(uVar2,param_1);
          goto LAB_14058908;
        }
        if (piVar4 != (int *)0x0) {
          FUN_14073bb0(DAT_14058970,piVar5,param_1);
          goto LAB_14058908;
        }
        break;
      }
      piVar5 = piVar6;
      piVar6 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  uVar2 = DAT_14058970;
  *(short *)(iVar1 + 0x4c) = (short)param_2;
  FUN_140739f0(uVar2,param_1);
LAB_14058908:
  if ((*(byte *)(iVar1 + 0x4e) & 9) == 1) {
    FUN_14058610();
    return 0;
  }
  return 0;
}

