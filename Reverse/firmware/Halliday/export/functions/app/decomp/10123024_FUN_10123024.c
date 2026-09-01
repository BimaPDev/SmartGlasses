/* FUN_10123024 @ 0x10123024 */

int FUN_10123024(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                byte param_5)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 local_7c [2];
  char *local_74;
  char *local_70;
  byte local_6a;
  byte local_69;
  undefined4 local_68;
  uint local_60;
  undefined4 local_34;
  undefined4 local_24;
  
  if (param_1 == (undefined4 *)0x0) {
    return 9;
  }
  uVar8 = param_5 & 0x3f;
  local_7c[0] = param_2;
  iVar3 = FUN_10084bcc(local_7c,&local_74,uVar8);
  if (iVar3 == 0) {
    local_70 = local_74;
    iVar4 = thunk_FUN_1013cfe2(0x460);
    if (iVar4 == 0) {
      FUN_10122b7a(local_74,0x11);
      return 0x11;
    }
    *(int *)(local_74 + 0xc) = iVar4;
    *(int *)(local_74 + 0x10) = iVar4 + 0x200;
    local_68 = param_3;
    local_24 = param_4;
    iVar3 = FUN_10122840(&local_70,param_4);
    if (((iVar3 == 0) && (iVar3 = FUN_100844c0(&local_70), iVar3 == 0)) &&
       (iVar3 = FUN_1008432c(&local_70,(param_5 & 0x3e) != 0), iVar3 == 0)) {
      if ((int)((uint)local_6a << 0x1b) < 0) {
        iVar3 = 4;
      }
      else if (((param_5 & 2) == 0) || (-1 < (int)((uint)local_6a << 0x1f))) {
        if ((param_5 & 8) != 0) {
          uVar8 = uVar8 | 0x40;
        }
        param_1[0x12] = *(undefined4 *)(local_74 + 0x4c);
        param_1[0x13] = local_34;
        iVar3 = FUN_10084388(&local_70,(uVar8 & 0xfe) != 0);
        pcVar2 = local_74;
        param_1[10] = iVar3;
        if (iVar3 == 0) {
LAB_101230ea:
          iVar3 = 2;
        }
        else {
          if (*local_74 == '\x04') {
            iVar3 = *(int *)(local_74 + 0x10);
            uVar5 = FUN_1012227a(iVar3 + 0x34);
            param_1[2] = uVar5;
            uVar12 = FUN_1012228a(iVar3 + 0x38);
            *(undefined8 *)(param_1 + 4) = uVar12;
            *(byte *)((int)param_1 + 7) = *(byte *)(iVar3 + 0x21) & 2;
            param_1[7] = local_68;
            param_1[8] = local_60 & 0xffffff00 | (uint)local_69;
            param_1[9] = local_24;
          }
          else {
            uVar12 = FUN_10122592(*local_74,local_34);
            param_1[2] = (int)uVar12;
            uVar5 = FUN_1012227a((int)((ulonglong)uVar12 >> 0x20) + 0x1c);
            param_1[4] = uVar5;
            param_1[5] = 0;
          }
          *(undefined2 *)(param_1 + 1) = *(undefined2 *)(pcVar2 + 6);
          *(undefined1 *)((int)param_1 + 0x31) = 0;
          param_1[0x11] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          *param_1 = pcVar2;
          *(char *)(param_1 + 0xc) = (char)uVar8;
          if ((int)(uVar8 << 0x1a) < 0) {
            uVar8 = param_1[4];
            iVar9 = param_1[5];
            if (uVar8 != 0 || iVar9 != 0) {
              uVar1 = *(ushort *)(pcVar2 + 10);
              param_1[0xe] = uVar8;
              param_1[0xf] = iVar9;
              uVar7 = param_1[2];
              uVar10 = (uint)uVar1 * 0x200;
              do {
                bVar11 = iVar9 == 0;
                if (iVar9 == 0) {
                  bVar11 = uVar8 <= uVar10;
                }
                if (bVar11) {
                  iVar3 = 0;
                  goto LAB_101231a2;
                }
                uVar7 = FUN_1012270e(param_1);
                bVar11 = uVar8 < uVar10;
                uVar8 = uVar8 + (uint)uVar1 * -0x200;
                iVar9 = iVar9 - (uint)bVar11;
                if (uVar7 < 2) {
                  iVar3 = 2;
                  goto LAB_101231a2;
                }
              } while (uVar7 != 0xffffffff);
              iVar3 = 1;
LAB_101231a2:
              param_1[0x10] = uVar7;
              if (iVar3 == 0) {
                if ((uVar8 & 0x1ff) == 0) goto LAB_10123160;
                iVar6 = FUN_101222f0(local_74);
                if (iVar6 == 0) goto LAB_101230ea;
                param_1[0x11] = iVar6 + (uVar8 >> 9 | iVar9 << 0x17);
              }
              goto LAB_101230ec;
            }
          }
LAB_10123160:
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 7;
      }
    }
LAB_101230ec:
    thunk_FUN_1013cfd4(iVar4);
    if (iVar3 == 0) goto LAB_101230f8;
  }
  *param_1 = 0;
LAB_101230f8:
  FUN_10122b7a(local_74,iVar3);
  return iVar3;
}

