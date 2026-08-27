/* FUN_2c637ab8 @ 0x2c637ab8 */

void FUN_2c637ab8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_20;
  uint local_1c;
  
  iVar5 = 0;
  local_1c = *DAT_2c637b34;
  uVar7 = (*(code *)*DAT_2c637b30)(param_1,param_2,0);
  puVar1 = DAT_2c637b38;
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar2 = (int)uVar7;
  local_20 = 0;
  if (iVar2 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
LAB_2c637ae8:
    do {
      uVar7 = (*(code *)*puVar1)(param_1,&local_20);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar3 = (uint)uVar7;
      if (uVar3 < 0x80) {
        iVar6 = iVar6 + 1;
      }
      else {
        if (uVar3 < 0x800) {
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 2;
          if (iVar2 == iVar5) break;
          goto LAB_2c637ae8;
        }
        if (uVar3 < 0x10000) {
          iVar6 = iVar6 + 3;
        }
        else {
          iVar6 = iVar6 + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
    iVar6 = iVar6 + 1;
  }
  if ((*DAT_2c637b34 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar6,uVar4,*DAT_2c637b34 ^ local_1c,0);
}

