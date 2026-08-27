/* FUN_2c4f148c @ 0x2c4f148c */

int FUN_2c4f148c(int param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_31;
  uint local_30;
  int local_2c;
  
  uVar4 = param_3;
  if ((int)(param_3 << 0x16) >> 0x16 == -1) {
    uVar4 = param_3 + 1;
  }
  local_2c = *DAT_2c4f1578;
  uVar4 = uVar4 & 0x3ff;
  if (*(uint *)(param_2 + 0x14) < *(int *)(param_2 + 4) + 4 + uVar4) {
    iVar2 = -0x1c;
  }
  else {
    uVar3 = *(uint *)(param_2 + 8) ^ param_3 & 0x7fffffff;
    local_30 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
    iVar1 = FUN_2c4f1344(param_1,param_2,&local_30,4);
    iVar2 = iVar1;
    if (iVar1 == 0) {
      if ((int)param_3 < 0) {
        if (uVar4 != 0) {
          uVar3 = 0;
          do {
            if ((*(uint *)(*(int *)(param_1 + 0x68) + 0x20) <= *param_4) ||
               (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < param_4[1] + uVar3 + 1)) {
              iVar2 = -0x54;
              goto LAB_2c4f153a;
            }
            iVar2 = FUN_2c4f0eb4(param_1,0,param_1,uVar4 - uVar3,*param_4,param_4[1] + uVar3,
                                 &uStack_31,1);
            if ((iVar2 != 0) || (iVar2 = FUN_2c4f1344(param_1,param_2,&uStack_31,1), iVar2 != 0))
            goto LAB_2c4f153a;
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar4);
        }
      }
      else {
        iVar2 = FUN_2c4f1344(param_1,param_2,param_4,uVar4);
        if (iVar2 != 0) goto LAB_2c4f153a;
      }
      *(uint *)(param_2 + 8) = param_3 & 0x7fffffff;
      iVar2 = iVar1;
    }
  }
LAB_2c4f153a:
  if (*DAT_2c4f1578 == local_2c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

