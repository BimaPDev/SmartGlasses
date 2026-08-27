/* FUN_2c670ec4 @ 0x2c670ec4 */

int FUN_2c670ec4(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  uint uVar5;
  uint uVar6;
  uint local_28;
  int *local_24;
  int *piStack_20;
  
  local_28 = param_3;
  local_24 = param_4;
  piStack_20 = param_5;
  iVar1 = FUN_2c6706e0(param_3,1);
  if (iVar1 != 0) {
    uVar6 = (param_2 & 0x7fffffff) >> 0x14;
    local_24 = (int *)(param_2 & 0xfffff);
    if (uVar6 != 0) {
      local_24 = (int *)((uint)local_24 | 0x100000);
    }
    if (param_1 == 0) {
      iVar3 = FUN_2c670908(&local_24);
      iVar4 = 1;
      uVar2 = iVar3 + 0x20;
      *(int **)(iVar1 + 0x14) = local_24;
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    else {
      local_28 = param_1;
      uVar2 = FUN_2c670908(&local_28);
      if (uVar2 == 0) {
        *(uint *)(iVar1 + 0x14) = local_28;
      }
      else {
        uVar5 = (int)local_24 << (0x20 - uVar2 & 0xff);
        local_24 = (int *)((uint)local_24 >> (uVar2 & 0xff));
        *(uint *)(iVar1 + 0x14) = uVar5 | local_28;
      }
      *(int **)(iVar1 + 0x18) = local_24;
      if (local_24 == (int *)0x0) {
        iVar4 = 1;
      }
      else {
        iVar4 = 2;
      }
      *(int *)(iVar1 + 0x10) = iVar4;
    }
    if (uVar6 == 0) {
      *param_4 = uVar2 - 0x432;
      iVar3 = FUN_2c6708c8(*(undefined4 *)(iVar1 + iVar4 * 4 + 0x10));
      iVar3 = extraout_r2 * 0x20 - iVar3;
    }
    else {
      iVar3 = 0x35 - uVar2;
      *param_4 = (uVar6 - 0x433) + uVar2;
    }
    *param_5 = iVar3;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c668484(DAT_2c670f78,0x30a,0,DAT_2c670f74);
}

