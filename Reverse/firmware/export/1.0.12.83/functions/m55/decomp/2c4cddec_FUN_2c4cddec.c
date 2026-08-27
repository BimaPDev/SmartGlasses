/* FUN_2c4cddec @ 0x2c4cddec */

void FUN_2c4cddec(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint local_4c [5];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  
  local_1c = *DAT_2c4cdef4;
  if ((param_3 < 0xf) && (param_2 != 0x300)) {
    param_1[3] = param_3;
    param_1[4] = param_4;
    uVar2 = param_2;
LAB_2c4cde0e:
    if (param_2 < 0x301) {
      if (param_2 == 0x1e0) {
        iVar5 = 4;
      }
      else {
        if (param_2 != 0x200) goto LAB_2c4cdeec;
        iVar5 = 3;
      }
    }
    else if (param_2 == 0x3c0) {
      iVar5 = 1;
    }
    else {
      if (param_2 != 0x400) {
LAB_2c4cdeec:
        uVar1 = 0x2003;
        goto LAB_2c4cde50;
      }
      iVar5 = 0;
    }
  }
  else {
    local_4c[0] = *DAT_2c4cdefc;
    local_4c[1] = DAT_2c4cdefc[1];
    local_4c[2] = DAT_2c4cdefc[2];
    local_4c[3] = DAT_2c4cdefc[3];
    local_4c[4] = DAT_2c4cdefc[4];
    uStack_38 = DAT_2c4cdefc[5];
    uStack_34 = DAT_2c4cdefc[6];
    uStack_30 = DAT_2c4cdefc[7];
    local_2c = DAT_2c4cdefc[8];
    uStack_28 = DAT_2c4cdefc[9];
    uStack_24 = DAT_2c4cdefc[10];
    uStack_20 = DAT_2c4cdefc[0xb];
    uVar1 = param_4;
    if (param_2 == 0x300) {
      uVar1 = (uint)((ulonglong)DAT_2c4cdf00 * (ulonglong)(param_4 << 2) >> 0x21);
    }
    iVar5 = 1;
    puVar7 = local_4c;
    do {
      uVar2 = *puVar7;
      param_3 = iVar5 - 1;
      if ((uVar1 < uVar2) && (puVar7[1] <= uVar1)) goto LAB_2c4cdebc;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 != 0xc);
    param_3 = 0xb;
LAB_2c4cdebc:
    param_1[3] = param_3;
    param_1[4] = param_4;
    if (param_2 != 0x300) goto LAB_2c4cde0e;
    iVar5 = 2;
  }
  iVar5 = iVar5 * 0xc0 + param_3 * 0xc;
  iVar6 = DAT_2c4cdef8 + iVar5;
  iVar3 = *(int *)(DAT_2c4cdef8 + iVar5);
  iVar5 = *(int *)(iVar6 + 4);
  uVar2 = (uint)*(byte *)(iVar6 + 8);
  *param_1 = iVar3;
  param_1[1] = iVar5;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar6 + 8);
  if ((uVar2 == 0) || (uVar1 = (uint)(iVar3 == 0), iVar3 == 0)) {
    uVar1 = 0x2003;
    param_1[4] = 0;
  }
LAB_2c4cde50:
  uVar4 = *DAT_2c4cdef4 ^ local_1c;
  if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,uVar2,uVar4,0);
  }
  return;
}

