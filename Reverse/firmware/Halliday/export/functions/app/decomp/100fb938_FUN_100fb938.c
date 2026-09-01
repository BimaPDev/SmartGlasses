/* FUN_100fb938 @ 0x100fb938 */

int FUN_100fb938(short *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_4c;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  if (param_2 == (int *)0x0) {
    return 6;
  }
  if (param_1 == (short *)0x0) {
    iVar8 = 0x14;
  }
  else {
    iVar8 = (int)param_1[1];
    if ((iVar8 == 0) || (*param_1 < 1)) {
      iVar8 = 0;
      param_2[2] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[1] = 0;
    }
    else {
      iVar10 = 0x7fffffff;
      local_4c = 0x7fffffff;
      local_30 = DAT_100fba54;
      iStack_2c = DAT_100fba54;
      if (0 < iVar8) {
        uVar4 = 0;
        iVar6 = DAT_100fba54;
        iVar7 = DAT_100fba54;
        iVar9 = iVar10;
        local_34 = iVar10;
        piVar3 = *(int **)(param_1 + 2);
        do {
          iVar5 = *piVar3;
          iVar2 = piVar3[1];
          pbVar1 = (byte *)(*(int *)(param_1 + 4) + uVar4);
          if (iVar5 <= iVar10) {
            iVar10 = iVar5;
          }
          if (iVar6 < iVar5) {
            iVar6 = iVar5;
          }
          if (iVar2 <= iVar9) {
            iVar9 = iVar2;
          }
          if (iVar7 < iVar2) {
            iVar7 = iVar2;
          }
          uVar4 = uVar4 + 1 & 0xffff;
          if ((*pbVar1 & 3) == 1) {
            if (iVar5 <= local_4c) {
              local_4c = iVar5;
            }
            if (local_30 < iVar5) {
              local_30 = iVar5;
            }
            if (iVar2 <= local_34) {
              local_34 = iVar2;
            }
            if (iStack_2c < iVar2) {
              iStack_2c = iVar2;
            }
          }
          piVar3 = piVar3 + 2;
        } while ((int)uVar4 < iVar8);
        if ((((iVar10 < local_4c) || (local_30 < iVar6)) || (iVar9 < local_34)) ||
           (iVar10 = local_34, iStack_2c < iVar7)) {
          local_38 = local_4c;
          iVar8 = FUN_100fa228(param_1,DAT_100fba50,auStack_40);
          if (iVar8 != 0) {
            return iVar8;
          }
          *param_2 = local_38;
          param_2[1] = local_34;
          param_2[2] = local_30;
          param_2[3] = iStack_2c;
          return 0;
        }
      }
      param_2[2] = local_30;
      param_2[3] = iStack_2c;
      *param_2 = local_4c;
      param_2[1] = iVar10;
      iVar8 = 0;
    }
  }
  return iVar8;
}

