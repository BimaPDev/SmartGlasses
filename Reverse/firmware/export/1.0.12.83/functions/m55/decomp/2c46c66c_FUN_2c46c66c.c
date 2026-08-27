/* FUN_2c46c66c @ 0x2c46c66c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46c66c(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_18;
  int iStack_14;
  uint local_c;
  
  local_c = *_LAB_2c46c6f4;
  if (param_1 != (byte *)0x0) {
    param_2 = (uint)*param_1;
    local_18 = *(uint *)(param_1 + 0x18);
    iStack_14 = *(int *)(param_1 + 0x1c);
    if (param_2 == 6) {
      uVar2 = FUN_2c46bc74(*(undefined4 *)(param_1 + 0x18),&local_18);
      param_2 = (uint)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 == 0) {
LAB_2c46c6bc:
        param_2 = (iStack_14 + 1) - (uint)(local_18 < _LAB_2c46c6f8);
        if ((int)param_2 < 0 ==
            (SBORROW4(iStack_14,-1) != SBORROW4(iStack_14 + 1,(uint)(local_18 < _LAB_2c46c6f8)))) {
          param_2 = iStack_14 - (uint)(local_18 < 0x7fffffff);
          uVar1 = 0x7fffffff;
          if (iStack_14 < (int)(uint)(local_18 < 0x7fffffff)) {
            uVar1 = local_18;
          }
        }
        else {
          uVar1 = 0x80000000;
        }
        goto LAB_2c46c698;
      }
    }
    else {
      if (param_2 == 2) {
        uVar1 = VectorFloatToSigned(*(undefined8 *)(param_1 + 0x18),3);
        goto LAB_2c46c698;
      }
      if (param_2 == 3) goto LAB_2c46c6bc;
      if (param_2 == 1) {
        uVar1 = *(uint *)(param_1 + 0x18);
        goto LAB_2c46c698;
      }
    }
  }
  uVar1 = 0;
LAB_2c46c698:
  if ((*_LAB_2c46c6f4 ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,param_2,*_LAB_2c46c6f4 ^ local_c,0);
  }
  return;
}

