/* FUN_2c5f960c @ 0x2c5f960c */

int FUN_2c5f960c(int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  char *pcVar15;
  
  uVar1 = *(ushort *)(param_2 + 0x36);
  if ((uVar1 & 0x20) != 0) {
    return param_2;
  }
  uVar3 = FUN_2c5f6770();
  iVar4 = FUN_2c5f1424(DAT_2c5f9920,param_3,param_4,uVar3);
  if (iVar4 == 0) {
    return param_2;
  }
  iVar4 = FUN_2c5f6770(param_1);
  iVar5 = FUN_2c5f6770(param_1);
  puVar6 = (ushort *)FUN_2c5f944c(param_1,param_3 + iVar4,param_4 - iVar5);
  if (puVar6 == (ushort *)0x0) {
    return param_2;
  }
  iVar4 = FUN_2c5f544c(param_1);
  if (iVar4 != 0) {
    uVar3 = FUN_2c66c4ec();
    puVar7 = (ushort *)FUN_2c5f944c(param_1,iVar4,uVar3);
    if (puVar7 != (ushort *)0x0) {
      if (*puVar7 == *puVar6) {
        iVar5 = FUN_2c5f9d94(param_2,0xb);
        if (iVar5 != 0) {
          iVar5 = *(int *)(puVar7 + 2);
          if (iVar5 != 0) {
            uVar3 = FUN_2c5f9cf0(8,*param_1);
            iVar5 = FUN_2c5f93c8(*param_1,iVar4,iVar5);
            FUN_2c5f6c14();
            FUN_2c5f5450(param_1,*(undefined4 *)(iVar5 + 4));
            FUN_2c5f6a50(iVar5);
            (**(code **)(*param_1 + 8))(iVar5);
            iVar5 = FUN_2c5f9e5c(param_2,uVar3);
            if (iVar5 == 0) {
              (**(code **)(*param_1 + 8))(uVar3);
            }
          }
          puVar8 = (ushort *)(**(code **)*param_1)(1,0x10);
          *(ushort **)(param_2 + 0x38) = puVar8;
          if (*(short *)(param_2 + 0x34) == 0xb) {
            *puVar8 = *puVar7;
          }
          iVar5 = (**(code **)*param_1)(*puVar6,1);
          uVar13 = *puVar6;
          if (uVar13 != 0) {
            uVar12 = 0;
            do {
              uVar10 = (uint)uVar12;
              iVar11 = *(int *)(*(int *)(puVar6 + 4) + uVar10 * 0x10);
              pcVar15 = *(char **)(iVar11 + 4);
              cVar2 = pcVar15[*(int *)(iVar11 + 0xc) + -1];
              if (*pcVar15 == ':') {
                if (cVar2 == ':') {
                  *(undefined1 *)(iVar5 + uVar10) = 99;
                  uVar13 = *puVar6;
                }
                else {
                  *(undefined1 *)(iVar5 + uVar10) = 0x6c;
                  uVar13 = *puVar6;
                }
              }
              else if (cVar2 == ':') {
                *(undefined1 *)(iVar5 + uVar10) = 0x72;
                uVar13 = *puVar6;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar13);
          }
          if (*(short *)(param_2 + 0x34) == 0xb) {
            *(int *)(*(int *)(param_2 + 0x38) + 4) = iVar5;
          }
          iVar5 = thunk_FUN_2c5f583c(param_1,param_2,0xc,*(undefined4 *)(param_2 + 0x28));
          iVar4 = FUN_2c66c4ec(iVar4);
          *(int *)(iVar5 + 0x30) = iVar4 + *(int *)(param_2 + 0x28) + -2;
          uVar3 = *(undefined4 *)(param_2 + 0x24);
          *(undefined4 *)(iVar5 + 0x2c) = uVar3;
          *(undefined4 *)(iVar5 + 0x24) = uVar3;
          puVar9 = (undefined1 *)(**(code **)*param_1)(1);
          *(undefined1 **)(iVar5 + 0x38) = puVar9;
          *puVar9 = 1;
          iVar4 = FUN_2c5f9dd0(param_2);
          uVar3 = FUN_2c5f13d8(*(undefined4 *)(iVar4 + 0x48));
          *(undefined4 *)(param_2 + 0x48) = uVar3;
          uVar3 = FUN_2c5f1414(uVar3,*puVar7);
          *(undefined4 *)(iVar5 + 0x48) = uVar3;
          uVar10 = 0;
          if (*puVar7 != 0) {
            uVar10 = uVar1 & 0x20;
            do {
              iVar11 = *(int *)(puVar7 + 4);
              iVar14 = iVar11 + uVar10 * 0x10;
              iVar4 = thunk_FUN_2c5f583c(param_1,iVar5,0xd,
                                         *(int *)(iVar14 + 4) + *(int *)(param_2 + 0x28));
              uVar3 = *(undefined4 *)(param_2 + 0x24);
              *(undefined4 *)(iVar4 + 0x2c) = uVar3;
              *(undefined4 *)(iVar4 + 0x24) = uVar3;
              *(int *)(iVar4 + 0x30) = *(int *)(param_2 + 0x28) + *(int *)(iVar14 + 8);
              FUN_2c5f5450(param_1,*(undefined4 *)(*(int *)(iVar11 + uVar10 * 0x10) + 4));
              if (*(short *)(iVar4 + 0x34) == 0xd) {
                *(uint *)(iVar4 + 0x38) = uVar10;
              }
              uVar10 = uVar10 + 1 & 0xffff;
              *(int *)(iVar4 + 0x20) = param_1[0x18];
              uVar3 = FUN_2c5f6ba8(param_1 + 0x15);
              *(undefined4 *)(iVar4 + 0x1c) = uVar3;
            } while (uVar10 < *puVar7);
          }
          if (*(short *)(param_2 + 0x34) == 0xb) {
            *(int *)(*(int *)(param_2 + 0x38) + 8) = *(int *)(*(int *)(param_2 + 0x38) + 8) + 1;
            *(uint *)(*(int *)(param_2 + 0x38) + 0xc) =
                 uVar10 + *(int *)(*(int *)(param_2 + 0x38) + 0xc);
          }
          iVar4 = FUN_2c66c4ec(param_3);
          iVar11 = FUN_2c5f676c(param_1);
          FUN_2c5f6778(param_1,param_3,(iVar4 + -1) - iVar11,0);
          iVar4 = *param_1;
          FUN_2c5f9384(iVar4,puVar7);
          (**(code **)(iVar4 + 8))(puVar7);
          iVar4 = *param_1;
          FUN_2c5f9384(iVar4,puVar6);
          (**(code **)(iVar4 + 8))(puVar6);
          FUN_2c5f545c(*param_1,iVar5,param_1[1],param_1[0x19]);
          return param_2;
        }
        iVar4 = *param_1;
        FUN_2c5f9384(iVar4,puVar7);
        (**(code **)(iVar4 + 8))(puVar7);
        iVar4 = *param_1;
        FUN_2c5f9384(iVar4,puVar6);
        (**(code **)(iVar4 + 8))(puVar6);
        return param_2;
      }
      iVar4 = *param_1;
      FUN_2c5f9384(iVar4,puVar6);
      (**(code **)(iVar4 + 8))(puVar6);
      iVar4 = *param_1;
      FUN_2c5f9384(iVar4,puVar7);
      (**(code **)(iVar4 + 8))(puVar7);
      goto LAB_2c5f96ae;
    }
  }
  iVar4 = *param_1;
  FUN_2c5f9384(iVar4,puVar6);
  (**(code **)(iVar4 + 8))(puVar6);
LAB_2c5f96ae:
  *(ushort *)(param_2 + 0x36) = *(ushort *)(param_2 + 0x36) | 0x20;
  return param_2;
}

