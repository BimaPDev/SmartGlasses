/* FUN_2c4f1120 @ 0x2c4f1120 */

void FUN_2c4f1120(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_34 [8];
  uint local_2c;
  
  local_2c = *DAT_2c4f11c0;
  uVar2 = param_2;
  if (param_7 != 0) {
    uVar4 = 0;
    do {
      uVar3 = param_7 - uVar4;
      iVar1 = param_5 + uVar4;
      if (7 < uVar3) {
        uVar3 = 8;
      }
      if ((*(uint *)(*(int *)(param_1 + 0x68) + 0x20) <= param_4) ||
         (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < uVar3 + iVar1)) {
        lVar5 = CONCAT44(iVar1,0xffffffac);
        goto LAB_2c4f119a;
      }
      lVar5 = FUN_2c4f0eb4(param_1,0,param_2,param_3 - uVar4,param_4,iVar1,auStack_34,uVar3);
      if ((int)lVar5 != 0) goto LAB_2c4f119a;
      uVar6 = FUN_2c66960c(auStack_34,param_6 + uVar4,uVar3);
      uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        if ((int)uVar6 < 0) {
          lVar5 = CONCAT44(uVar2,1);
        }
        else {
          lVar5 = CONCAT44(uVar2,2);
        }
        goto LAB_2c4f119a;
      }
      uVar4 = uVar4 + uVar3;
    } while (uVar4 < param_7);
  }
  lVar5 = (ulonglong)uVar2 << 0x20;
LAB_2c4f119a:
  if ((*DAT_2c4f11c0 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),*DAT_2c4f11c0 ^ local_2c,0);
}

