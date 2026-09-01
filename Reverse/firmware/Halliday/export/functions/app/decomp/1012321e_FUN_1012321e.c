/* FUN_1012321e @ 0x1012321e */

uint FUN_1012321e(int param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_2c [2];
  
  *param_4 = 0;
  uVar1 = FUN_101225c6(param_1,local_2c);
  if ((uVar1 == 0) && (uVar1 = (uint)*(byte *)(param_1 + 0x31), uVar1 == 0)) {
    uVar1 = *(byte *)(param_1 + 0x30) & 1;
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      FUN_10122b7a(local_2c[0],7);
      uVar1 = 7;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x10) - *(uint *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x3c) ==
          (uint)(*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x38)) && uVar4 < param_3) {
        param_3 = uVar4;
      }
      for (; param_3 != 0; param_3 = param_3 - uVar4) {
        uVar4 = *(uint *)(param_1 + 0x38);
        if ((uVar4 & 0x1ff) == 0) {
          uVar5 = *(ushort *)(local_2c[0] + 10) - 1 &
                  (uVar4 >> 9 | *(int *)(param_1 + 0x3c) << 0x17);
          if (uVar5 == 0) {
            if (uVar4 == 0 && *(int *)(param_1 + 0x3c) == 0) {
              uVar4 = *(uint *)(param_1 + 8);
            }
            else {
              uVar4 = FUN_1012270e(param_1,*(undefined4 *)(param_1 + 0x40));
            }
            if (uVar4 < 2) {
              uVar1 = 2;
              uVar4 = 2;
              *(undefined1 *)(param_1 + 0x31) = 2;
              goto LAB_101232da;
            }
            if (uVar4 != 0xffffffff) {
              *(uint *)(param_1 + 0x40) = uVar4;
              goto LAB_101232f8;
            }
            goto LAB_101232ee;
          }
LAB_101232f8:
          iVar3 = local_2c[0];
          iVar2 = FUN_101222f0(local_2c[0],*(undefined4 *)(param_1 + 0x40));
          if (iVar2 == 0) {
            uVar4 = 2;
            *(undefined1 *)(param_1 + 0x31) = 2;
            local_2c[0] = iVar3;
            uVar1 = uVar4;
            goto LAB_101232da;
          }
          iVar2 = uVar5 + iVar2;
          if (param_3 < 0x200) {
            *(int *)(param_1 + 0x44) = iVar2;
            goto LAB_10123388;
          }
          uVar4 = param_3 >> 9;
          if ((uint)*(ushort *)(iVar3 + 10) < uVar5 + (param_3 >> 9)) {
            uVar4 = *(ushort *)(iVar3 + 10) - uVar5;
          }
          iVar3 = FUN_100862e0(*(undefined1 *)(iVar3 + 1),param_2,iVar2,uVar4);
          if (iVar3 != 0) goto LAB_101232ee;
          if ((*(char *)(local_2c[0] + 3) != '\0') &&
             (uVar5 = *(int *)(local_2c[0] + 0x4c) - iVar2, uVar5 < uVar4)) {
            FUN_10122580(param_2 + uVar5 * 0x200,local_2c[0] + 0x50,0x200);
          }
          uVar4 = uVar4 << 9;
        }
        else {
LAB_10123388:
          uVar4 = 0x200 - (*(uint *)(param_1 + 0x38) & 0x1ff);
          if (param_3 <= uVar4) {
            uVar4 = param_3;
          }
          iVar3 = FUN_10122662(local_2c[0],*(undefined4 *)(param_1 + 0x44));
          if (iVar3 != 0) {
LAB_101232ee:
            uVar4 = 1;
            *(undefined1 *)(param_1 + 0x31) = 1;
LAB_101232da:
            FUN_10122b7a(local_2c[0],uVar4);
            return uVar1;
          }
          FUN_10122580(param_2,local_2c[0] + 0x50 + (*(uint *)(param_1 + 0x38) & 0x1ff),uVar4);
        }
        uVar5 = *(uint *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = uVar5 + uVar4;
        *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar5,uVar4);
        param_2 = param_2 + uVar4;
        *param_4 = *param_4 + uVar4;
      }
      FUN_10122b7a(local_2c[0],0);
      uVar1 = 0;
    }
  }
  else {
    FUN_10122b7a(local_2c[0],uVar1);
  }
  return uVar1;
}

