/* FUN_2c4f221c @ 0x2c4f221c */

void FUN_2c4f221c(int param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6,
                 uint param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_38;
  uint local_30;
  uint local_2c;
  
  local_2c = *DAT_2c4f23d0;
  local_30 = param_2[4];
  uVar4 = param_2[3];
  if ((*(uint *)(param_1 + 0x3c) >> 0x14 & 0x700) == 0) {
LAB_2c4f238e:
    local_38 = (param_3 & 0xfffff) >> 10;
  }
  else {
    if (((*(uint *)(param_1 + 0x40) != *param_2) &&
        (*(uint *)(param_1 + 0x40) != param_2[1] && *(uint *)(param_1 + 0x44) != param_2[1])) &&
       (*param_2 != *(uint *)(param_1 + 0x44))) goto LAB_2c4f238e;
    local_38 = (param_3 & 0xfffff) >> 10;
    if (local_38 != 0) {
      iVar6 = DAT_2c4f23d4;
      if ((param_4 & 0xfffff) >> 10 < (*(uint *)(param_1 + 0x3c) & 0xfffff) >> 10) {
        iVar6 = 0;
      }
      goto LAB_2c4f229c;
    }
  }
  iVar6 = 0;
LAB_2c4f229c:
  do {
    uVar3 = local_30;
    iVar5 = (int)(uVar3 << 0x16) >> 0x16;
    uVar2 = uVar3;
    if (iVar5 == -1) {
      uVar2 = uVar3 + 1;
    }
    uVar1 = (uVar2 & 0x3ff) + 8;
    local_30 = uVar3;
    if (uVar4 < uVar1) goto LAB_2c4f23ac;
    uVar4 = uVar4 + (-4 - (uVar2 & 0x3ff));
    uVar2 = *param_2;
    if ((*(uint *)(*(int *)(param_1 + 0x68) + 0x20) <= uVar2) ||
       (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < uVar4 + 4)) goto LAB_2c4f23b2;
    uVar7 = FUN_2c4f0eb4(param_1,0,param_1,4,uVar2,uVar4,&local_30,4);
    if ((int)uVar7 != 0) goto LAB_2c4f2346;
    local_30 = ((local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8
                | local_30 >> 0x18) ^ uVar3) & 0x7fffffff;
    if (local_38 == 0) {
LAB_2c4f2300:
      uVar2 = param_4 - iVar6;
    }
    else {
      uVar2 = param_4 - iVar6;
      if (((uVar3 >> 0x14 & 0x700) == 0x400) && ((uVar3 & 0xfffff) >> 10 <= (uVar2 & 0xfffff) >> 10)
         ) {
        uVar1 = uVar2 & 0xffc00 | 0x40100000;
        if (uVar1 != uVar3) {
          iVar6 = iVar6 + (char)(uVar3 >> 0x14) * 0x400;
          goto LAB_2c4f2300;
        }
        goto LAB_2c4f23ac;
      }
    }
  } while (((uVar2 ^ uVar3) & param_3) != 0);
  uVar1 = 0;
  if (iVar5 == -1) {
LAB_2c4f23ac:
    uVar7 = CONCAT44(uVar1,0xfffffffe);
  }
  else {
    uVar1 = uVar3 & 0x3ff;
    if (param_7 <= (uVar3 & 0x3ff)) {
      uVar1 = param_7;
    }
    iVar5 = uVar4 + param_5 + 4;
    uVar2 = 0;
    if ((*param_2 < *(uint *)(*(int *)(param_1 + 0x68) + 0x20)) &&
       (iVar5 + uVar1 <= *(uint *)(*(int *)(param_1 + 0x68) + 0x1c))) {
      uVar7 = FUN_2c4f0eb4(param_1,0,param_1,uVar1,*param_2,iVar5,param_6,uVar1);
      if ((int)uVar7 == 0) {
        FUN_2c674268(param_6 + uVar1,0,param_7 - uVar1);
        uVar7 = CONCAT44(extraout_r1,iVar6 + uVar3);
      }
    }
    else {
LAB_2c4f23b2:
      uVar7 = CONCAT44(uVar2,0xffffffac);
    }
  }
LAB_2c4f2346:
  if ((*DAT_2c4f23d0 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),*DAT_2c4f23d0 ^ local_2c,0);
}

