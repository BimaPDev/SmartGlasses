/* registry_lookup @ 0x2c5e33f0 */

void registry_lookup(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_18;
  uint local_14;
  
  local_14 = *DAT_2c5e344c;
  local_18 = 0;
  uVar6 = registry_pick_table(*DAT_2c5e3448,&local_18,param_3,0);
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  iVar1 = (int)uVar6;
  uVar2 = 0;
  if (iVar1 != 0) {
    if (local_18 == 0) {
      uVar2 = 0;
    }
    else {
      iVar5 = 0;
      iVar4 = iVar1;
      do {
        iVar3 = *(int *)(iVar1 + iVar5 * 8);
        if (iVar3 == param_1) {
          uVar2 = *(undefined4 *)(iVar4 + 4);
          goto LAB_2c5e342a;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 8;
      } while (local_18 != iVar5);
      uVar2 = 0;
    }
  }
LAB_2c5e342a:
  if ((*DAT_2c5e344c ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,iVar3,*DAT_2c5e344c ^ local_14,0);
}

