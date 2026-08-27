/* FUN_140337e0 @ 0x140337e0 */

undefined4 FUN_140337e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_14032d34();
  piVar1 = DAT_14033854;
  iVar4 = *DAT_14033854;
  if (iVar4 == 0) {
    FUN_1402e55c();
    iVar4 = *piVar1;
  }
  *piVar1 = iVar4 + 1;
  if ((((iVar2 != 0xff) && (9 < param_3)) && (*DAT_14033858 != 0)) &&
     (iVar2 = *(int *)((short)iVar2 * 4 + *DAT_14033858), iVar2 != 0)) {
    if (iVar2 != -0x40) {
      FUN_140e5278(param_2,iVar2 + 0x40,param_3);
      uVar3 = 0;
      goto LAB_14033824;
    }
  }
  FUN_140e5658(param_2,0,param_3);
  uVar3 = 0xffffffff;
LAB_14033824:
  *piVar1 = iVar4;
  if (iVar4 != 0) {
    return uVar3;
  }
  FUN_1402e5f8();
  return uVar3;
}

