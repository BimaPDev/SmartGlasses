/* FUN_2c13583c @ 0x2c13583c */

void FUN_2c13583c(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_ac [128];
  uint local_2c;
  
  local_2c = *DAT_2c135930;
  if (*DAT_2c13592c == '\0') {
    uVar1 = (param_1 & 0x7f) >> 4;
    uVar4 = param_2;
    if (uVar1 <= *DAT_2c135934) {
      uVar4 = (param_1 & 0x3fff) >> 7;
      if ((uVar1 == 0) ||
         ((1 << ((param_1 & 0x7fff) >> 7 & 0x1f) &
          *(uint *)(DAT_2c135938 + ((param_1 & 0x3fff) >> 0xc) * 4)) != 0)) {
        if ((int)(param_1 << 0xf) < 0) goto LAB_2c1358d4;
        iVar2 = FUN_2c135678(uVar1,uVar4,auStack_ac,0x7d);
        uVar6 = 0x7d - iVar2;
        puVar5 = auStack_ac + iVar2;
        uVar3 = FUN_2c142878(puVar5,uVar6,param_2,param_3);
        uVar1 = uVar6;
        if ((int)uVar3 < 0) goto LAB_2c1358f2;
        goto LAB_2c1358ae;
      }
    }
  }
  else {
LAB_2c1358d4:
    puVar5 = auStack_ac;
    uVar1 = 0x7d;
    uVar6 = 0x7d;
    uVar3 = FUN_2c142878(puVar5,0x7d,param_2,param_3);
    iVar2 = 0;
    if ((int)uVar3 < 0) {
LAB_2c1358f2:
      uVar3 = 0;
      uVar4 = 0;
      if (-1 < (int)(param_1 << 0x10)) goto LAB_2c1358c0;
LAB_2c1358fa:
      uVar4 = iVar2 + uVar4;
    }
    else {
LAB_2c1358ae:
      if (uVar1 <= uVar3) {
        uVar3 = uVar1;
        if (uVar1 == 0) {
          uVar3 = 1;
        }
        uVar3 = uVar3 - 1;
      }
      uVar4 = uVar3;
      uVar6 = uVar1;
      if ((int)(param_1 << 0x10) < 0) goto LAB_2c1358fa;
LAB_2c1358c0:
      if (uVar6 < uVar3 + 1) {
        uVar4 = uVar3;
        if (uVar6 == 0) goto LAB_2c1358fa;
        uVar4 = 0x7d;
        uVar3 = 0x7c - iVar2;
      }
      else {
        uVar4 = uVar3 + 1 + iVar2;
      }
      puVar5[uVar3] = 10;
    }
    if (*DAT_2c13593c != '\0') {
      lVar7 = FUN_2c1351d0(auStack_ac,uVar4);
      goto LAB_2c13590c;
    }
  }
  lVar7 = (ulonglong)uVar4 << 0x20;
LAB_2c13590c:
  if ((*DAT_2c135930 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),*DAT_2c135930 ^ local_2c,0);
}

