/* FUN_2c539e7c @ 0x2c539e7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c539e7c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_64;
  int *piStack_60;
  int iStack_5c;
  int iStack_54;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  uStack_2c = *_LAB_2c53a154;
  iVar4 = param_3[2];
  iVar1 = *param_3;
  iVar13 = param_3[1];
  iVar2 = iVar1 + 0x1c;
  piVar3 = (int *)param_3[3];
  piStack_60 = piVar3;
  iStack_5c = iVar4;
  iStack_54 = iVar13;
  if (iVar4 == iVar2) {
    iVar2 = piVar3[1];
    piStack_60 = piVar3 + 1;
    iStack_5c = iVar2 + 0x1f8;
    iStack_54 = iVar2;
  }
  piVar5 = *(int **)(param_2 + 0x24);
  piVar10 = *(int **)(param_2 + 0x14);
  iVar6 = *(int *)(param_2 + 0x18);
  iStack_64 = *(int *)(param_2 + 0x1c);
  iVar7 = *(int *)(param_2 + 8);
  iVar12 = *(int *)(param_2 + 0x10);
  iVar11 = _LAB_2c53a158 * (iVar12 - iVar7 >> 2);
  uVar8 = _LAB_2c53a158 * (iVar1 - iVar13 >> 2) + (((int)piVar3 - (int)piVar10 >> 2) + -1) * 0x12 +
          iVar11;
  if (uVar8 < (uint)(_LAB_2c53a158 * (iVar6 - iStack_64 >> 2) +
                     (((int)piVar5 - (int)piVar10 >> 2) + -1) * 0x12 + iVar11) >> 1) {
    if (iVar7 != iVar1) {
      if (piVar10 == piVar3) {
        iStack_38 = iStack_54;
        iStack_34 = iStack_5c;
        piStack_30 = piStack_60;
        iStack_3c = iVar2;
        func_0x2c539c40(&iStack_4c,iVar7,iVar1,&iStack_3c);
      }
      else {
        iStack_48 = iStack_54;
        iStack_44 = iStack_5c;
        piStack_40 = piStack_60;
        iStack_4c = iVar2;
        func_0x2c539c40(&iStack_3c,iVar13,iVar1,&iStack_4c);
        iVar1 = iStack_4c;
        iVar2 = iStack_48;
        iVar4 = iStack_44;
        piVar5 = piStack_40;
        iStack_4c = iStack_3c;
        iStack_48 = iStack_38;
        iStack_44 = iStack_34;
        piStack_40 = piStack_30;
        while (piVar3 = piVar3 + -1, iStack_3c = iStack_4c, iStack_38 = iStack_48,
              iStack_34 = iStack_44, piStack_30 = piStack_40, piVar10 != piVar3) {
          func_0x2c539c40(&iStack_3c,*piVar3,*piVar3 + 0x1f8,&iStack_4c);
          iVar1 = iStack_4c;
          iVar2 = iStack_48;
          iVar4 = iStack_44;
          piVar5 = piStack_40;
          iStack_4c = iStack_3c;
          iStack_48 = iStack_38;
          iStack_44 = iStack_34;
          piStack_40 = piStack_30;
        }
        iStack_4c = iVar1;
        iStack_48 = iVar2;
        iStack_44 = iVar4;
        piStack_40 = piVar5;
        func_0x2c539c40(&iStack_4c,iVar7,iVar12,&iStack_3c);
      }
      iVar1 = *(int *)(param_2 + 8);
      iVar12 = *(int *)(param_2 + 0x10);
    }
    if (iVar1 == iVar12 + -0x1c) {
      FUN_2c525228();
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,*(undefined4 *)(param_2 + 0xc));
    }
    FUN_2c525228();
    iVar1 = *(int *)(param_2 + 8) + 0x1c;
    *(int *)(param_2 + 8) = iVar1;
  }
  else {
    if (iVar6 != iVar2) {
      if (piStack_60 == piVar5) {
        iStack_3c = iVar1;
        iStack_38 = iVar13;
        iStack_34 = iVar4;
        piStack_30 = piVar3;
        func_0x2c539d74(&iStack_4c,iVar2,iVar6,&iStack_3c);
      }
      else {
        iStack_4c = iVar1;
        iStack_48 = iVar13;
        iStack_44 = iVar4;
        piStack_40 = piVar3;
        func_0x2c539d74(&iStack_3c,iVar2,iStack_5c,&iStack_4c);
        iVar1 = iStack_4c;
        iVar2 = iStack_48;
        iVar4 = iStack_44;
        piVar3 = piStack_40;
        iStack_4c = iStack_3c;
        iStack_48 = iStack_38;
        iStack_44 = iStack_34;
        piStack_40 = piStack_30;
        while (piStack_60 = piStack_60 + 1, iStack_3c = iStack_4c, iStack_38 = iStack_48,
              iStack_34 = iStack_44, piStack_30 = piStack_40, piVar5 != piStack_60) {
          func_0x2c539d74(&iStack_3c,*piStack_60,*piStack_60 + 0x1f8,&iStack_4c);
          iVar1 = iStack_4c;
          iVar2 = iStack_48;
          iVar4 = iStack_44;
          piVar3 = piStack_40;
          iStack_4c = iStack_3c;
          iStack_48 = iStack_38;
          iStack_44 = iStack_34;
          piStack_40 = piStack_30;
        }
        iStack_4c = iVar1;
        iStack_48 = iVar2;
        iStack_44 = iVar4;
        piStack_40 = piVar3;
        func_0x2c539d74(&iStack_4c,iStack_64,iVar6,&iStack_3c);
      }
      iVar2 = *(int *)(param_2 + 0x18);
      iStack_64 = *(int *)(param_2 + 0x1c);
    }
    if (iVar2 == iStack_64) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    *(int *)(param_2 + 0x18) = iVar2 + -0x1c;
    FUN_2c525228();
    iVar1 = *(int *)(param_2 + 8);
  }
  iVar4 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar13 = *(int *)(param_2 + 0x14);
  uVar9 = _LAB_2c53a158 * (iVar1 - iVar4 >> 2) + uVar8;
  *param_1 = iVar1;
  param_1[3] = iVar13;
  param_1[1] = iVar4;
  param_1[2] = iVar2;
  if ((int)uVar9 < 0) {
    uVar8 = ~(uint)((ulonglong)_LAB_2c53a15c * (ulonglong)~uVar9 >> 0x22);
  }
  else {
    if ((int)uVar9 < 0x12) {
      *param_1 = iVar1 + uVar8 * 0x1c;
      goto LAB_2c539fe2;
    }
    iVar2 = (int)((longlong)(int)_LAB_2c53a15c * (longlong)(int)uVar9);
    uVar8 = (int)((longlong)(int)_LAB_2c53a15c * (longlong)(int)uVar9 >> 0x22) -
            ((int)uVar9 >> 0x1f);
  }
  param_1[3] = iVar13 + uVar8 * 4;
  iVar1 = *(int *)(iVar13 + uVar8 * 4);
  iVar4 = iVar1 + 0x1f8;
  param_1[1] = iVar1;
  param_1[2] = iVar4;
  *param_1 = iVar1 + (uVar9 + uVar8 * -0x12) * 0x1c;
LAB_2c539fe2:
  if ((*_LAB_2c53a154 ^ uStack_2c) == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar2,iVar4,*_LAB_2c53a154 ^ uStack_2c,0);
}

