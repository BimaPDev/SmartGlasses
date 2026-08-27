/* FUN_2c62b23c @ 0x2c62b23c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62b23c(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iStack_18;
  uint uStack_14;
  
  piVar4 = &iStack_18;
  uStack_14 = *_LAB_2c62b350;
  iStack_18 = 0;
  if (param_2 == (int *)0x0) {
    iVar5 = 1;
    iVar7 = 0;
    pcVar8 = param_1;
  }
  else {
    iVar7 = *param_2;
    iVar5 = iVar7 + 1;
    piVar4 = param_2;
    pcVar8 = param_1 + iVar7;
  }
  uVar6 = (uint)*pcVar8;
  if ((int)uVar6 < 0) {
    if ((uVar6 & 0xe0) == 0xc0) {
      *piVar4 = iVar5;
      cVar1 = param_1[iVar5];
      if (((int)cVar1 & 0xc0U) == 0x80) {
        *piVar4 = iVar7 + 2;
        uVar6 = ((int)cVar1 & 0x3fU) + (uVar6 & 0x1f) * 0x40;
        goto LAB_2c62b264;
      }
    }
    else if ((uVar6 & 0xf0) == 0xe0) {
      *piVar4 = iVar5;
      cVar1 = param_1[iVar5];
      if (((int)cVar1 & 0xc0U) == 0x80) {
        *piVar4 = iVar7 + 2;
        cVar2 = param_1[iVar7 + 2];
        if (((int)cVar2 & 0xc0U) == 0x80) {
          *piVar4 = iVar7 + 3;
          uVar6 = ((int)cVar1 & 0x3fU) * 0x40 + ((int)cVar2 & 0x3fU) + (uVar6 & 0xf) * 0x1000;
          goto LAB_2c62b264;
        }
      }
    }
    else {
      if ((uVar6 & 0xf8) != 0xf0) {
        uVar6 = 0;
        *piVar4 = iVar5;
        goto LAB_2c62b264;
      }
      *piVar4 = iVar5;
      cVar1 = param_1[iVar5];
      if (((int)cVar1 & 0xc0U) == 0x80) {
        *piVar4 = iVar7 + 2;
        cVar2 = param_1[iVar7 + 2];
        if (((int)cVar2 & 0xc0U) == 0x80) {
          *piVar4 = iVar7 + 3;
          cVar3 = param_1[iVar7 + 3];
          if (((int)cVar3 & 0xc0U) == 0x80) {
            *piVar4 = iVar7 + 4;
            uVar6 = (((int)cVar1 & 0x3fU) << 0xc | (uVar6 & 7) << 0x12) +
                    ((int)cVar2 & 0x3fU) * 0x40 + ((int)cVar3 & 0x3fU);
            goto LAB_2c62b264;
          }
        }
      }
    }
    uVar6 = 0;
  }
  else {
    *piVar4 = iVar5;
  }
LAB_2c62b264:
  if ((*_LAB_2c62b350 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar6,piVar4,*_LAB_2c62b350 ^ uStack_14,0);
}

