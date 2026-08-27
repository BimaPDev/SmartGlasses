/* FUN_2c47f554 @ 0x2c47f554 */

void FUN_2c47f554(undefined4 param_1,int param_2,int param_3,char *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 local_64 [16];
  int local_24;
  
  uVar10 = 0;
  iVar11 = *param_4 + -1;
  local_24 = *DAT_2c47f5ec;
  iVar4 = 0;
  iVar7 = 0;
LAB_2c47f57c:
  iVar8 = 0;
  iVar6 = 0;
  lVar3 = CONCAT44(iVar4,uVar10);
LAB_2c47f58a:
  uVar5 = (uint)((ulonglong)lVar3 >> 0x20);
  lVar1 = (ulonglong)*(uint *)(param_2 + iVar8) * (ulonglong)*(uint *)(param_3 + (iVar7 - iVar8));
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar2 = lVar1 + lVar3;
  uVar10 = (undefined4)((ulonglong)lVar2 >> 0x20);
  iVar4 = iVar6 + (uint)(CARRY4(uVar5,uVar9) ||
                        CARRY4(uVar5 + uVar9,(uint)CARRY4((uint)lVar3,(uint)lVar1)));
  iVar8 = iVar8 + 4;
  if (iVar8 <= iVar11 * 4) goto code_r0x2c47f5ae;
  goto LAB_2c47f5b2;
code_r0x2c47f5ae:
  iVar6 = iVar4;
  lVar3 = lVar2;
  if (iVar7 < iVar8) {
LAB_2c47f5b2:
    *(int *)((int)local_64 + iVar7) = (int)lVar2;
    iVar6 = 0;
    iVar7 = iVar7 + 4;
    if (iVar11 * 4 < iVar7) {
      if (iVar11 * 8 < iVar7) {
        *(undefined4 *)((int)local_64 + iVar7) = uVar10;
        (**(code **)(param_4 + 0xb0))(param_1,local_64);
        if (*DAT_2c47f5ec == local_24) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      iVar8 = iVar7 + iVar11 * -4;
      lVar3 = CONCAT44(iVar4,uVar10);
      goto LAB_2c47f58a;
    }
    goto LAB_2c47f57c;
  }
  goto LAB_2c47f58a;
}

