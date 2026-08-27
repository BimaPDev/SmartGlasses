/* FUN_14033b6c @ 0x14033b6c */

undefined4 FUN_14033b6c(uint param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_140e5848();
  piVar1 = DAT_14033c1c;
  iVar3 = *DAT_14033c1c;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
    *piVar1 = iVar3 + 1;
    if ((param_1 != 0xffff) && ((param_1 & 0xff) < 4)) goto LAB_14033b94;
    uVar6 = 0;
  }
  else {
    if (param_1 == 0xffff) {
      uVar6 = 0;
      goto LAB_14033ba6;
    }
    *DAT_14033c1c = iVar3 + 1;
    if (3 < (param_1 & 0xff)) {
      uVar6 = 0;
      *piVar1 = iVar3;
      goto LAB_14033ba6;
    }
LAB_14033b94:
    iVar4 = *DAT_14033c20;
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      *param_2 = *(undefined1 *)(iVar4 + (param_1 & 0xff) * 2);
      uVar6 = 1;
      param_2[1] = *(undefined1 *)(iVar4 + (param_1 & 0xff) * 2 + 1);
    }
  }
  *piVar1 = iVar3;
  if (iVar3 == 0) {
    FUN_1402e5f8();
  }
LAB_14033ba6:
  iVar3 = FUN_140e5848();
  uVar5 = (iVar3 - iVar2) * 1000;
  if (uVar5 < 0x1f50) {
    return uVar6;
  }
  FUN_1402a6e8(4,0x454,DAT_14033c30,DAT_14033c2c,DAT_14033c28,DAT_14033c24,uVar5 >> 4);
  return uVar6;
}

