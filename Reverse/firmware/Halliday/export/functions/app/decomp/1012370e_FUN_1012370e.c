/* FUN_1012370e @ 0x1012370e */

uint FUN_1012370e(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *extraout_r2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *local_2c [2];
  
  uVar1 = FUN_101225c6(param_1,local_2c);
  uVar8 = uVar1;
  if ((uVar1 != 0) || (uVar8 = (uint)*(byte *)(param_1 + 0x31), uVar1 = uVar8, uVar8 != 0))
  goto LAB_101238e8;
  if ((*local_2c[0] != '\x04') && (param_4 != 0)) {
    param_3 = 0xffffffff;
    param_4 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  bVar9 = param_4 <= uVar1;
  if (uVar1 == param_4) {
    bVar9 = param_3 <= *(uint *)(param_1 + 0x10);
  }
  if ((!bVar9) && (-1 < (int)((uint)*(byte *)(param_1 + 0x30) << 0x1e))) {
    param_3 = *(uint *)(param_1 + 0x10);
    param_4 = uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_3 != 0 || param_4 != 0) {
    uVar1 = (uint)*(ushort *)(local_2c[0] + 10);
    uVar5 = uVar1 * 0x200;
    if (iVar2 == 0 && iVar3 == 0) {
LAB_10123856:
      iVar4 = *(int *)(param_1 + 8);
      if (iVar4 == 0) {
        iVar4 = FUN_10122b90(param_1);
        if (iVar4 == 1) {
          uVar1 = 2;
        }
        else {
          if (iVar4 != -1) {
            *(int *)(param_1 + 8) = iVar4;
            goto LAB_10123880;
          }
          uVar1 = 1;
        }
        *(char *)(param_1 + 0x31) = (char)uVar1;
        uVar8 = uVar1;
        goto LAB_101238e8;
      }
LAB_10123880:
      *(int *)(param_1 + 0x40) = iVar4;
    }
    else {
      iVar3 = iVar3 + -1 + (uint)(iVar2 != 0);
      uVar10 = FUN_10004238(param_3 - 1,(param_4 - 1) + (uint)(param_3 != 0),uVar5,0);
      uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar11 = FUN_10004238(iVar2 - 1U,iVar3,uVar5,0);
      uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
      bVar9 = uVar7 <= uVar6;
      if (uVar6 == uVar7) {
        bVar9 = (uint)uVar11 <= (uint)uVar10;
      }
      if (!bVar9) goto LAB_10123856;
      iVar4 = *(int *)(param_1 + 0x40);
      uVar6 = uVar1 * -0x200 & iVar2 - 1U;
      *(uint *)(param_1 + 0x38) = uVar6;
      *(int *)(param_1 + 0x3c) = iVar3;
      bVar9 = param_3 < uVar6;
      param_3 = param_3 - uVar6;
      param_4 = (param_4 - iVar3) - (uint)bVar9;
    }
    if (iVar4 != 0) {
      do {
        bVar9 = param_4 == 0;
        if (param_4 == 0) {
          bVar9 = param_3 <= uVar5;
        }
        if (bVar9) {
LAB_10123824:
          uVar1 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar1 + param_3;
          *(uint *)(param_1 + 0x3c) =
               param_4 + *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar1,param_3);
          if ((param_3 & 0x1ff) == 0) break;
          iVar2 = FUN_101222f0(local_2c[0]);
          if (iVar2 == 0) {
            *(undefined1 *)(param_1 + 0x31) = 2;
            local_2c[0] = extraout_r2;
            uVar1 = 2;
            uVar8 = 2;
            goto LAB_101238e8;
          }
          iVar2 = iVar2 + (param_3 >> 9 | param_4 << 0x17);
          goto LAB_1012377a;
        }
        bVar9 = param_3 < uVar5;
        param_3 = param_3 + uVar1 * -0x200;
        param_4 = param_4 - bVar9;
        uVar7 = uVar5 + *(uint *)(param_1 + 0x38);
        uVar6 = *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar5,*(uint *)(param_1 + 0x38));
        *(uint *)(param_1 + 0x38) = uVar7;
        *(uint *)(param_1 + 0x3c) = uVar6;
        if ((int)((uint)*(byte *)(param_1 + 0x30) << 0x1e) < 0) {
          bVar9 = uVar6 <= *(uint *)(param_1 + 0x14);
          if (*(uint *)(param_1 + 0x14) == uVar6) {
            bVar9 = uVar7 <= *(uint *)(param_1 + 0x10);
          }
          if (bVar9) {
            uVar6 = FUN_1012270e(param_1);
          }
          else {
            *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x40;
            *(uint *)(param_1 + 0x10) = uVar7;
            *(uint *)(param_1 + 0x14) = uVar6;
            uVar6 = FUN_10122b90(param_1);
          }
          if (uVar6 == 0) {
            param_3 = 0;
            param_4 = 0;
            goto LAB_10123824;
          }
        }
        else {
          uVar6 = FUN_1012270e(param_1);
        }
        if (uVar6 == 0xffffffff) {
          uVar1 = 1;
          goto LAB_101238e2;
        }
        if ((uVar6 < 2) || (*(uint *)(local_2c[0] + 0x34) <= uVar6)) goto LAB_101238fe;
        *(uint *)(param_1 + 0x40) = uVar6;
      } while( true );
    }
  }
  iVar2 = 0;
LAB_1012377a:
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar5 = *(uint *)(param_1 + 0x38);
  uVar6 = *(uint *)(param_1 + 0x3c);
  bVar9 = uVar6 <= uVar1;
  if (uVar1 == uVar6) {
    bVar9 = uVar5 <= *(uint *)(param_1 + 0x10);
  }
  if (!bVar9) {
    uVar1 = (uint)*(byte *)(param_1 + 0x30);
  }
  if (!bVar9) {
    *(byte *)(param_1 + 0x30) = (byte)uVar1 | 0x40;
    *(uint *)(param_1 + 0x10) = uVar5;
    *(uint *)(param_1 + 0x14) = uVar6;
  }
  if (((uVar5 & 0x1ff) != 0) && (*(int *)(param_1 + 0x44) != iVar2)) {
    *(int *)(param_1 + 0x44) = iVar2;
  }
  uVar1 = 0;
LAB_101238e8:
  FUN_10122b7a(local_2c[0],uVar1);
  return uVar8;
LAB_101238fe:
  uVar1 = 2;
LAB_101238e2:
  *(char *)(param_1 + 0x31) = (char)uVar1;
  uVar8 = uVar1;
  goto LAB_101238e8;
}

