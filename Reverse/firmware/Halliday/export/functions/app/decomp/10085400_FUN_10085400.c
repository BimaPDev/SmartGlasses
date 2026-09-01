/* FUN_10085400 @ 0x10085400 */

int FUN_10085400(undefined4 *param_1,undefined4 param_2,uint param_3)

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
  undefined4 local_84 [2];
  char *local_7c;
  char *local_78;
  byte local_72;
  byte local_71;
  undefined4 local_70;
  uint local_68;
  int local_3c;
  char local_2d;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    return 9;
  }
  uVar8 = param_3 & 0x3f;
  local_84[0] = param_2;
  iVar3 = FUN_10084bcc(local_84,&local_7c,uVar8);
  if (iVar3 == 0) {
    local_78 = local_7c;
    iVar4 = thunk_FUN_1013cfe2(0x460);
    if (iVar4 == 0) {
      FUN_10122b7a(local_7c,0x11);
      return 0x11;
    }
    *(int *)(local_7c + 0xc) = iVar4;
    *(int *)(local_7c + 0x10) = iVar4 + 0x200;
    iVar3 = FUN_10084fcc(&local_78,local_84[0]);
    if (iVar3 == 0) {
      if (local_2d < '\0') {
        iVar3 = 6;
      }
      else {
        iVar3 = FUN_1008432c(&local_78,(param_3 & 0x3e) != 0);
      }
    }
    if ((param_3 & 0x1c) == 0) {
      if (iVar3 == 0) {
        if (-1 < (int)((uint)local_72 << 0x1b)) {
          if ((-1 < (int)(param_3 << 0x1e)) || (-1 < (int)((uint)local_72 << 0x1f)))
          goto LAB_100855b8;
          goto LAB_10085668;
        }
        iVar3 = 4;
      }
    }
    else if (iVar3 == 0) {
      if ((local_72 & 0x11) == 0) {
        if ((int)(param_3 << 0x1d) < 0) {
          iVar3 = 8;
        }
        else if ((int)(param_3 << 0x1c) < 0) {
LAB_100854a8:
          pcVar2 = local_7c;
          if (*local_7c == '\x04') {
            iVar3 = *(int *)(local_7c + 0x10);
            *param_1 = local_7c;
            uVar5 = FUN_1012227a(iVar3 + 0x34);
            param_1[2] = uVar5;
            uVar12 = FUN_1012228a(iVar3 + 0x38);
            *(undefined8 *)(param_1 + 4) = uVar12;
            *(byte *)((int)param_1 + 7) = *(byte *)(iVar3 + 0x21) & 2;
            *(undefined1 *)(iVar3 + 10) = 0x21;
            *(undefined1 *)(iVar3 + 8) = 0;
            *(undefined1 *)(iVar3 + 9) = 0;
            *(undefined1 *)(iVar3 + 0xb) = 0x48;
            *(undefined1 *)(*(int *)(pcVar2 + 0x10) + 0x14) = 0;
            iVar3 = *(int *)(pcVar2 + 0x10);
            *(undefined1 *)(iVar3 + 0xf) = 0x48;
            *(undefined1 *)(iVar3 + 0xc) = 0;
            *(undefined1 *)(iVar3 + 0xd) = 0;
            *(undefined1 *)(iVar3 + 0xe) = 0x21;
            *(undefined1 *)(*(int *)(pcVar2 + 0x10) + 0x15) = 0;
            *(undefined1 *)(*(int *)(pcVar2 + 0x10) + 4) = 0x20;
            iVar3 = *(int *)(pcVar2 + 0x10);
            *(undefined1 *)(iVar3 + 0x34) = 0;
            *(undefined1 *)(iVar3 + 0x35) = 0;
            *(undefined1 *)(iVar3 + 0x36) = 0;
            *(undefined1 *)(iVar3 + 0x37) = 0;
            iVar3 = *(int *)(pcVar2 + 0x10);
            *(undefined1 *)(iVar3 + 0x38) = 0;
            *(undefined1 *)(iVar3 + 0x39) = 0;
            *(undefined1 *)(iVar3 + 0x3a) = 0;
            *(undefined1 *)(iVar3 + 0x3b) = 0;
            *(undefined1 *)(iVar3 + 0x3c) = 0;
            *(undefined1 *)(iVar3 + 0x3d) = 0;
            *(undefined1 *)(iVar3 + 0x3e) = 0;
            *(undefined1 *)(iVar3 + 0x3f) = 0;
            iVar3 = *(int *)(pcVar2 + 0x10);
            *(undefined1 *)(iVar3 + 0x28) = 0;
            *(undefined1 *)(iVar3 + 0x29) = 0;
            *(undefined1 *)(iVar3 + 0x2a) = 0;
            *(undefined1 *)(iVar3 + 0x2b) = 0;
            *(undefined1 *)(iVar3 + 0x2c) = 0;
            *(undefined1 *)(iVar3 + 0x2d) = 0;
            *(undefined1 *)(iVar3 + 0x2e) = 0;
            *(undefined1 *)(iVar3 + 0x2f) = 0;
            *(undefined1 *)(*(int *)(pcVar2 + 0x10) + 0x21) = 1;
            iVar3 = FUN_10122f62(&local_78);
            if (iVar3 == 0) {
              if (param_1[2] != 0) {
                iVar3 = FUN_101229d4(param_1,param_1[2],0);
                *(int *)(local_7c + 0x18) = param_1[2] + -1;
LAB_1008557a:
                if (iVar3 != 0) goto LAB_1008557c;
              }
              goto LAB_100855b8;
            }
          }
          else {
            *(undefined1 *)(local_3c + 0x11) = 0x48;
            *(undefined1 *)(local_3c + 0xe) = 0;
            *(undefined1 *)(local_3c + 0xf) = 0;
            *(undefined1 *)(local_3c + 0x10) = 0x21;
            *(undefined1 *)(local_3c + 0x19) = 0x48;
            *(undefined1 *)(local_3c + 0x16) = 0;
            *(undefined1 *)(local_3c + 0x17) = 0;
            *(undefined1 *)(local_3c + 0x18) = 0x21;
            *(undefined1 *)(local_3c + 0xb) = 0x20;
            uVar12 = FUN_10122592(*local_7c,local_3c);
            iVar9 = (int)uVar12;
            FUN_101225ae(pcVar2,(int)((ulonglong)uVar12 >> 0x20),0);
            *(undefined1 *)(local_3c + 0x1c) = 0;
            *(undefined1 *)(local_3c + 0x1d) = 0;
            *(undefined1 *)(local_3c + 0x1e) = 0;
            *(undefined1 *)(local_3c + 0x1f) = 0;
            local_7c[3] = '\x01';
            if (iVar9 == 0) goto LAB_100855b8;
            uVar5 = *(undefined4 *)(local_7c + 0x4c);
            iVar3 = FUN_101229d4(&local_78,iVar9,0);
            if (iVar3 == 0) {
              iVar3 = FUN_10122662(local_7c,uVar5);
              *(int *)(local_7c + 0x18) = iVar9 + -1;
              goto LAB_1008557a;
            }
          }
        }
        else {
LAB_100855b8:
          if ((int)(uVar8 << 0x1c) < 0) {
            uVar8 = uVar8 | 0x40;
          }
          param_1[0x12] = *(undefined4 *)(local_7c + 0x4c);
          param_1[0x13] = local_3c;
          iVar3 = FUN_10084388(&local_78,(uVar8 & 0xfe) != 0);
          pcVar2 = local_7c;
          param_1[10] = iVar3;
          if (iVar3 == 0) {
LAB_100855e0:
            iVar3 = 2;
          }
          else {
            if (*local_7c == '\x04') {
              iVar3 = *(int *)(local_7c + 0x10);
              uVar5 = FUN_1012227a(iVar3 + 0x34);
              param_1[2] = uVar5;
              uVar12 = FUN_1012228a(iVar3 + 0x38);
              *(undefined8 *)(param_1 + 4) = uVar12;
              *(byte *)((int)param_1 + 7) = *(byte *)(iVar3 + 0x21) & 2;
              param_1[7] = local_70;
              param_1[8] = local_68 & 0xffffff00 | (uint)local_71;
              param_1[9] = local_2c;
            }
            else {
              uVar12 = FUN_10122592(*local_7c,local_3c);
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
                    goto LAB_1008570c;
                  }
                  uVar7 = FUN_1012270e(param_1);
                  bVar11 = uVar8 < uVar10;
                  uVar8 = uVar8 + (uint)uVar1 * -0x200;
                  iVar9 = iVar9 - (uint)bVar11;
                  if (uVar7 < 2) {
                    iVar3 = 2;
                    goto LAB_1008570c;
                  }
                } while (uVar7 != 0xffffffff);
                iVar3 = 1;
LAB_1008570c:
                param_1[0x10] = uVar7;
                if (iVar3 == 0) {
                  if ((uVar8 & 0x1ff) == 0) goto LAB_100856ca;
                  iVar6 = FUN_101222f0(local_7c);
                  if (iVar6 == 0) goto LAB_100855e0;
                  param_1[0x11] = iVar6 + (uVar8 >> 9 | iVar9 << 0x17);
                }
                goto LAB_1008557c;
              }
            }
LAB_100856ca:
            iVar3 = 0;
          }
        }
      }
      else {
LAB_10085668:
        iVar3 = 7;
      }
    }
    else if (iVar3 == 4) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 * 0x10 + DAT_10085768) == 0) {
          iVar3 = FUN_100847dc(&local_78);
          if (iVar3 != 0) goto LAB_1008557c;
          uVar8 = uVar8 | 8;
          goto LAB_100854a8;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x10);
      iVar3 = 0x12;
    }
LAB_1008557c:
    thunk_FUN_1013cfd4(iVar4);
    if (iVar3 == 0) goto LAB_10085588;
  }
  *param_1 = 0;
LAB_10085588:
  FUN_10122b7a(local_7c,iVar3);
  return iVar3;
}

