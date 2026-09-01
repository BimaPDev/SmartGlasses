/* FUN_1012691c @ 0x1012691c */

undefined4 FUN_1012691c(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_2c [2];
  
  uVar4 = FUN_100949c0(param_3);
LAB_10126934:
  if (param_1 != (int *)0x0) {
    uVar5 = FUN_1012b284(param_3);
    uVar2 = *(ushort *)(param_1 + 10);
    bVar1 = *(byte *)((int)param_1 + 0x2a);
    uVar10 = 1 << (uVar5 & 0xff) & 0xff;
    for (uVar5 = 0; uVar5 < (*(ushort *)((int)param_1 + 0x2a) & 0x3ff) >> 4; uVar5 = uVar5 + 1) {
      iVar7 = param_1[3] + uVar5 * 8;
      if ((*(byte *)(iVar7 + 7) & 2) == 0) break;
      if (((-1 < (int)((uint)bVar1 << 0x1c)) && (param_2 == (*(uint *)(iVar7 + 4) & 0xff0000))) &&
         (iVar7 = *(int *)(param_1[3] + uVar5 * 8), (uVar10 & *(byte *)(iVar7 + 6)) != 0)) {
        iVar7 = FUN_1012b1e4(iVar7,param_3,local_2c);
        if (iVar7 == 1) {
          return local_2c[0];
        }
        if (iVar7 == 2) goto LAB_101269ca;
      }
    }
    uVar11 = 0xffffffff;
    for (; uVar5 < (*(ushort *)((int)param_1 + 0x2a) & 0x3ff) >> 4; uVar5 = uVar5 + 1) {
      iVar7 = *(int *)(param_1[3] + uVar5 * 8);
      if ((uVar10 & *(byte *)(iVar7 + 6)) != 0) {
        uVar8 = *(uint *)(param_1[3] + uVar5 * 8 + 4);
        if (((param_2 == (uVar8 & 0xff0000)) &&
            (uVar9 = uVar8 & 0xffff, (uVar8 & 0xffffff & ~(uint)uVar2 & 0xffff) == 0)) &&
           ((int)uVar11 < (int)uVar9)) {
          iVar7 = FUN_1012b1e4(iVar7,param_3,local_2c);
          if (iVar7 == 1) {
            uVar11 = uVar9;
            if (uVar2 == uVar9) {
              return local_2c[0];
            }
          }
          else if (iVar7 == 2) goto LAB_101269ca;
        }
      }
    }
    if (uVar11 != 0xffffffff) {
      return local_2c[0];
    }
    if ((uVar4 & 1) != 0) {
      if (param_2 != 0) goto LAB_10126a44;
      goto LAB_10126a36;
    }
  }
LAB_10126936:
  if ((param_2 == 0) && ((param_3 == 1 || (param_3 == 4)))) {
    for (param_1 = (int *)*param_1; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
      if (param_3 == 1) {
        iVar7 = param_1[5];
      }
      else {
        iVar7 = param_1[6];
      }
      if (iVar7 != 0) {
        puVar3 = param_1 + 5;
        if (param_3 != 1) {
          puVar3 = param_1 + 6;
        }
        return *puVar3;
      }
    }
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_10094720(param_3);
  }
  return uVar6;
LAB_101269ca:
  if ((uVar4 & 1) == 0) goto LAB_10126936;
LAB_10126a36:
  param_1 = (int *)FUN_10126fae(param_1);
  goto LAB_10126934;
LAB_10126a44:
  param_2 = 0;
  goto LAB_10126934;
}

