/* FUN_2c46c002 @ 0x2c46c002 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c46c002(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r4;
  int iVar8;
  undefined4 unaff_r5;
  byte *pbVar9;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint uVar10;
  undefined4 unaff_lr;
  bool bVar11;
  
  uVar3 = _LAB_2c46c184;
  piVar2 = _LAB_2c46c180;
  pbVar9 = (byte *)(param_2 + -1);
  iVar8 = 1;
  iVar6 = 0;
  do {
    pbVar9 = pbVar9 + 1;
    bVar1 = *pbVar9;
    iVar4 = (int)(char)bVar1;
    iVar7 = iVar8 + -1;
    uVar10 = (uint)bVar1;
    iVar5 = iVar4;
    if (iVar4 < 0x30) {
      if (7 < iVar4) {
        iVar5 = iVar4 + -8;
        switch(iVar4) {
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x22:
        case 0x2f:
          if (0 < iVar7 - iVar6) goto LAB_2c46c0e4;
          if (uVar10 == 8) goto LAB_2c46c0f2;
LAB_2c46c0a8:
          if (uVar10 == 10) {
            iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c168,2);
            iVar6 = iVar8;
          }
          else if (uVar10 == 0xd) {
            iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c16c,2);
            iVar6 = iVar8;
          }
          else if (uVar10 == 9) {
            iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c170,2);
            iVar6 = iVar8;
          }
          else if (uVar10 == 0xc) {
            iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c174,2);
            iVar6 = iVar8;
          }
          else if (uVar10 == 0x22) {
            iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c178,2);
            iVar6 = iVar8;
          }
          else {
            if (uVar10 == 0x5c) goto LAB_2c46c150;
            iVar6 = iVar8;
            if (uVar10 == 0x2f) {
              iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c160,2);
            }
          }
          goto LAB_2c46c090;
        }
      }
LAB_2c46c062:
      if (uVar10 < 0x20) {
        if (0 < iVar7 - iVar6) {
          FUN_2c46a48c(param_1,iVar6 + param_2);
        }
        iVar5 = func_0x2c46a548(param_1,uVar3,(int)*(char *)(*piVar2 + (uint)(bVar1 >> 4)),
                                (int)*(char *)(*piVar2 + (uVar10 & 0xf)));
        iVar6 = iVar8;
      }
    }
    else {
      if (iVar4 != 0x5c) goto LAB_2c46c062;
      if (iVar7 - iVar6 < 1) {
LAB_2c46c150:
        iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c17c,2);
        iVar6 = iVar8;
      }
      else {
LAB_2c46c0e4:
        iVar5 = FUN_2c46a48c(param_1,iVar6 + param_2);
        if (uVar10 != 8) goto LAB_2c46c0a8;
LAB_2c46c0f2:
        iVar5 = FUN_2c46a48c(param_1,_LAB_2c46c164,2);
        iVar6 = iVar8;
      }
    }
LAB_2c46c090:
    bVar11 = param_3 == iVar8;
    iVar8 = iVar8 + 1;
    if (bVar11) {
      param_3 = param_3 - iVar6;
      if (param_3 < 1) {
        return iVar5;
      }
      iVar4 = param_1[1];
      iVar5 = param_1[2];
      iVar8 = iVar4 + param_3;
      if (iVar8 < iVar5) {
        iVar8 = *param_1;
      }
      else {
        iVar7 = iVar5 << 1;
        if (iVar5 * 2 <= iVar8 + 8) {
          iVar7 = iVar8 + 9;
        }
        iVar8 = FUN_2c66b218(*param_1,iVar7,iVar5,iVar8 + 8,param_4,unaff_r4,unaff_r5,unaff_r6,
                             unaff_r7,unaff_lr);
        if (iVar8 == 0) {
          return -1;
        }
        iVar4 = param_1[1];
        param_1[2] = iVar7;
        *param_1 = iVar8;
      }
      FUN_2c674668(iVar8 + iVar4,iVar6 + param_2,param_3);
      iVar6 = param_1[1];
      param_1[1] = iVar6 + param_3;
      *(undefined1 *)(*param_1 + iVar6 + param_3) = 0;
      return param_3;
    }
  } while( true );
}

