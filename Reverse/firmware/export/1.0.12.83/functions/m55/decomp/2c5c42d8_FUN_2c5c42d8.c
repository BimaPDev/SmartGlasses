/* FUN_2c5c42d8 @ 0x2c5c42d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c42d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iStack_18;
  uint uStack_14;
  
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_2c66b624(uVar6,_LAB_2c5c4334);
  if (((iVar1 == 0) || (iVar1 = FUN_2c66b624(uVar6,_LAB_2c5c4338), iVar1 == 0)) ||
     (iVar1 = FUN_2c66c5e0(uVar6,_LAB_2c5c433c), iVar1 != 0)) {
    iVar1 = 0x9009;
  }
  else {
    iVar1 = FUN_2c66b624(uVar6,_LAB_2c5c4340);
    if ((iVar1 == 0) || (iVar1 = FUN_2c66b624(uVar6,_LAB_2c5c4344), iVar1 == 0)) {
      iVar1 = 0x9010;
    }
    else {
      iVar1 = 0x9006;
    }
  }
  uStack_14 = *DAT_2c5e344c;
  iStack_18 = 0;
  uVar7 = registry_pick_table(*DAT_2c5e3448,&iStack_18);
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  iVar2 = (int)uVar7;
  uVar6 = 0;
  if (iVar2 != 0) {
    if (iStack_18 == 0) {
      uVar6 = 0;
    }
    else {
      iVar5 = 0;
      iVar4 = iVar2;
      do {
        iVar3 = *(int *)(iVar2 + iVar5 * 8);
        if (iVar3 == iVar1) {
          uVar6 = *(undefined4 *)(iVar4 + 4);
          goto LAB_2c5e342a;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 8;
      } while (iStack_18 != iVar5);
      uVar6 = 0;
    }
  }
LAB_2c5e342a:
  if ((*DAT_2c5e344c ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar6,iVar3,*DAT_2c5e344c ^ uStack_14,0);
}

