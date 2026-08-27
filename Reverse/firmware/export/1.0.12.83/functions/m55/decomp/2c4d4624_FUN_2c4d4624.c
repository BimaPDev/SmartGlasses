/* FUN_2c4d4624 @ 0x2c4d4624 */

int FUN_2c4d4624(uint *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                int param_7)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  
  if (param_1[9] == 0) {
    FUN_2c4d766c(param_1 + 2,param_1[1]);
  }
  else if (param_1[1] != 0) {
    FUN_2c4d7598(param_1 + 2,*param_1);
  }
  uVar14 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_2c4d76a8(param_1 + 2);
  if ((int)uVar2 < 9) {
    return 0x101;
  }
  if (param_3 != 7) {
    uVar11 = param_1[1];
    uVar7 = 1 - uVar11;
    if ((int)uVar7 < 1) {
      uVar7 = *param_1;
    }
    else {
      if (uVar7 != 0x20) {
        uVar14 = *param_1 << (uVar7 & 0xff);
      }
      uVar7 = FUN_2c4d74d4(param_1 + 2);
      *param_1 = uVar7;
      uVar11 = param_1[1] + 0x20;
    }
    param_1[1] = uVar11 - 1;
    uVar14 = (uVar14 | uVar7 >> (uVar11 - 1 & 0xff)) & *(uint *)(DAT_2c4d4850 + 4);
    uVar1 = (undefined1)uVar14;
    *(undefined1 *)(param_2 + 0x1c) = uVar1;
    if ((uVar14 & 0xff) == 0) {
      if (*(char *)(param_2 + 0x27) != '\0') {
LAB_2c4d4716:
        iVar16 = 1;
        uVar15 = 0;
        do {
          if (iVar16 == 1) {
            local_80 = *param_1;
            uStack_7c = param_1[1];
            uStack_78 = param_1[2];
            uStack_74 = param_1[3];
            local_70 = param_1[4];
            uStack_6c = param_1[5];
            uStack_68 = param_1[6];
            uStack_64 = param_1[7];
            local_60 = param_1[8];
            uStack_5c = param_1[9];
            uStack_58 = param_1[10];
            iVar3 = FUN_2c4d3d3c(param_1,param_2,param_4,param_5,param_6,1,uVar15);
            if (iVar3 != 0) goto LAB_2c4d4782;
            if ((*(char *)(param_5 + 0x113) != '\0') || (*(short *)(param_5 + 0x114) != 0)) {
              iVar3 = (**(code **)(param_4 + 8))(*(undefined4 *)(param_4 + 0xc),param_5);
              if (iVar3 != 0) {
                *(undefined1 *)(param_2 + 0x27) = 1;
                return 0x401;
              }
              uVar15 = 1;
            }
          }
          else {
            *param_1 = local_80;
            param_1[1] = uStack_7c;
            param_1[2] = uStack_78;
            param_1[3] = uStack_74;
            param_1[4] = local_70;
            param_1[5] = uStack_6c;
            param_1[6] = uStack_68;
            param_1[7] = uStack_64;
            param_1[8] = local_60;
            param_1[9] = uStack_5c;
            param_1[10] = uStack_58;
            iVar3 = FUN_2c4d3d3c(param_1,param_2,param_4,param_5,param_6,2,uVar15);
            if (iVar3 != 0) goto LAB_2c4d4782;
            if (iVar16 == 2) goto LAB_2c4d465c;
          }
          iVar16 = iVar16 + 1;
        } while( true );
      }
      uVar14 = *param_1;
      uVar4 = param_1[1];
      uVar8 = param_1[2];
      uVar12 = param_1[3];
      uVar7 = param_1[4];
      uVar5 = param_1[5];
      uVar9 = param_1[6];
      uVar13 = param_1[7];
      uVar11 = param_1[8];
      uVar6 = param_1[9];
      uVar10 = param_1[10];
      *(undefined1 *)(param_2 + 0x28) = uVar1;
      iVar3 = FUN_2c4d3d3c(param_1,param_2,param_4,param_5,param_6,1,0);
      if (iVar3 == 0) {
        *param_1 = uVar14;
        param_1[1] = uVar4;
        param_1[2] = uVar8;
        param_1[3] = uVar12;
        param_1[4] = uVar7;
        param_1[5] = uVar5;
        param_1[6] = uVar9;
        param_1[7] = uVar13;
        param_1[8] = uVar11;
        param_1[9] = uVar6;
        param_1[10] = uVar10;
        *(undefined1 *)(param_2 + 0x27) = 1;
        goto LAB_2c4d4716;
      }
      goto LAB_2c4d4782;
    }
  }
LAB_2c4d465c:
  if (*param_6 == 0) {
    *(undefined1 *)(param_2 + 0x27) = 1;
    return 0x102;
  }
  if (*(char *)(param_2 + 0x1e) != '\0') {
    *param_6 = 0;
    *(undefined1 *)(param_2 + 0x27) = 1;
    return 0x402;
  }
  iVar3 = FUN_2c4d4530(param_1,param_2);
  if (iVar3 == 0) {
    if (((param_7 == 0) && (*(int *)(param_2 + 4) != 0xff)) && (*(char *)(param_2 + 0x25) == '\0'))
    {
      if (uVar2 < *(int *)(param_2 + 4) * (int)*(char *)(param_5 + 0x108) * 0x20 + 0x18U) {
        return 0x101;
      }
      *(undefined1 *)(param_2 + 0x25) = 1;
    }
    return 0;
  }
  *param_6 = 0;
LAB_2c4d4782:
  *(undefined1 *)(param_2 + 0x27) = 1;
  return iVar3;
}

