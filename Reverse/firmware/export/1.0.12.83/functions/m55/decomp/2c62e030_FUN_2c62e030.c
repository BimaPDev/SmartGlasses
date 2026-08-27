/* FUN_2c62e030 @ 0x2c62e030 */

void FUN_2c62e030(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined4 local_18;
  uint local_14;
  
  iVar1 = param_1[1];
  local_14 = *DAT_2c62e0f0;
  if (iVar1 == 0) {
    iVar1 = 0xb;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x18);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      iVar1 = 9;
    }
    else {
      if (*(short *)(iVar1 + 2) == 0) {
        if (local_14 == *DAT_2c62e0f0) goto LAB_2c62e082;
        goto LAB_2c62e0ec;
      }
      if (param_3 == 1) {
        *(uint *)(param_1[2] + 8) = param_2 + *(int *)(param_1[2] + 8);
LAB_2c62e096:
        puVar2 = (uint *)param_1[2];
        param_3 = puVar2[2];
        param_2 = *puVar2;
        if ((param_3 < param_2) || (puVar2[1] < param_3)) {
          iVar1 = param_1[1];
          param_2 = *DAT_2c62e0f0 ^ local_14;
          if (param_2 == 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x18);
            param_2 = param_3;
            param_3 = 0;
LAB_2c62e082:
                    /* WARNING: Could not recover jumptable at 0x2c62e08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(iVar1,*param_1,param_2,param_3);
            return;
          }
          goto LAB_2c62e0ec;
        }
      }
      else {
        if (param_3 == 2) {
          uVar3 = (*UNRECOVERED_JUMPTABLE)(iVar1,*param_1,param_2,2);
          param_2 = (uint)((ulonglong)uVar3 >> 0x20);
          iVar1 = (int)uVar3;
          if (iVar1 == 0) {
            uVar3 = (**(code **)(param_1[1] + 0x1c))(param_1[1],*param_1,&local_18);
            param_2 = (uint)((ulonglong)uVar3 >> 0x20);
            iVar1 = (int)uVar3;
            if (iVar1 == 0) {
              *(undefined4 *)(param_1[2] + 8) = local_18;
            }
          }
          goto LAB_2c62e05a;
        }
        if (param_3 == 0) {
          *(uint *)(param_1[2] + 8) = param_2;
          goto LAB_2c62e096;
        }
      }
      iVar1 = 0;
    }
  }
LAB_2c62e05a:
  param_3 = *DAT_2c62e0f0 ^ local_14;
  if (param_3 == 0) {
    return;
  }
LAB_2c62e0ec:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar1,param_2,param_3,0);
}

