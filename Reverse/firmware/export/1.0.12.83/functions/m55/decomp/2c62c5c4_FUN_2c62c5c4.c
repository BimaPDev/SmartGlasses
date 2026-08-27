/* FUN_2c62c5c4 @ 0x2c62c5c4 */

uint FUN_2c62c5c4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_60 [32];
  undefined4 local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_1c;
  
  local_1c = *DAT_2c62c674;
  uVar8 = 0;
  if (param_1[1] != 0) {
    uVar8 = 0;
    iVar4 = *param_1;
    uVar7 = 0;
    do {
      iVar6 = uVar7 * 0x48;
      iVar2 = FUN_2c62e7e8(iVar4 + uVar7 * 0x48);
      if (iVar2 == -1) {
        uVar3 = param_1[1];
        uVar8 = 0xffffffff;
        break;
      }
      iVar4 = *param_1;
      uVar7 = uVar7 + 1;
      uVar3 = param_1[1];
      uVar5 = *(int *)(iVar4 + iVar6 + 0x44) + iVar2;
      if (uVar8 < uVar5) {
        uVar8 = uVar5;
      }
    } while (uVar7 < uVar3);
    iVar4 = param_1[2];
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        iVar2 = *param_1 + uVar7 * 0x48;
        FUN_2c674668(auStack_60,iVar2,0x44);
        uVar1 = local_38;
        local_30 = *(int *)(iVar2 + 0x44);
        if ((char)iVar4 == '\0') {
          local_30 = -local_30;
        }
        else {
          local_38 = local_40;
          local_30 = local_30 - (uVar8 - local_34);
          local_40 = uVar1;
        }
        uVar7 = uVar7 + 1;
        FUN_2c62e8ec(auStack_60);
      } while (uVar7 < (uint)param_1[1]);
    }
  }
  if (*DAT_2c62c674 == local_1c) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

