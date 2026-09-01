/* FUN_100a8180 @ 0x100a8180 */

void FUN_100a8180(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *in_stack_00000000;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  uint local_38;
  undefined4 local_34;
  uint local_30;
  
  uVar8 = (uint)in_stack_00000008;
  iVar2 = thunk_FUN_1013c70e();
  if (iVar2 == 0) {
    FUN_100a7a0c();
    iVar2 = *(int *)(param_1 + 0x1c);
    if ((iVar2 != 0) && (uVar8 == 0x10)) {
      bVar1 = *(byte *)(param_1 + 7);
      FUN_1011ea48(auStack_40,0,0x18);
      local_48 = *(undefined4 *)(param_1 + 0x48);
      local_44 = *(undefined4 *)(param_1 + 0x4c);
      local_38 = (uint)*(byte *)(param_1 + 0x21);
      uVar7 = in_stack_00000004 / (int)(uint)bVar1 & 0xffff;
      local_30 = uVar8;
      iVar2 = FUN_1012d608(iVar2);
      if ((0 < iVar2) || (0 < *(int *)(param_1 + 0x44))) {
        iVar2 = 5;
        while( true ) {
          while( true ) {
            uVar5 = *(uint *)(param_1 + 0x44);
            uVar3 = uVar7;
            if ((int)uVar5 <= (int)uVar7) {
              uVar3 = uVar5;
            }
            iVar10 = *(int *)(param_1 + 0x40) - uVar5;
            iVar4 = *(int *)(param_1 + 0x50) + iVar10 * 2;
            iVar10 = *(int *)(param_1 + 0x54) + iVar10 * 2;
            uVar5 = uVar3 & 0xffff;
            if (*(int *)(param_1 + 0x5c) == 0) {
              if (*(char *)(param_1 + 1) == '\x03') {
                iVar6 = 0;
                if (*(byte *)(param_1 + 2) < 2) {
                  for (; iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
                    in_stack_00000000[iVar6] =
                         in_stack_00000000[iVar6] / 2 +
                         ((int)*(short *)(iVar4 + iVar6 * 2) / 2) * 0x10000;
                  }
                }
                else {
                  piVar9 = in_stack_00000000;
                  for (iVar6 = 0; iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
                    *piVar9 = *piVar9 / 2 + ((int)*(short *)(iVar4 + iVar6 * 2) / 2) * 0x10000;
                    piVar9[1] = piVar9[1] / 2 + ((int)*(short *)(iVar10 + iVar6 * 2) / 2) * 0x10000;
                    piVar9 = piVar9 + 2;
                  }
                }
              }
              else {
                iVar6 = 0;
                if (*(byte *)(param_1 + 2) < 2) {
                  for (; iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
                    *(short *)((int)in_stack_00000000 + iVar6 * 2) =
                         *(short *)(iVar4 + iVar6 * 2) / 2 +
                         *(short *)((int)in_stack_00000000 + iVar6 * 2) / 2;
                  }
                  in_stack_00000000 = (int *)((int)in_stack_00000000 + uVar5 * 2);
                }
                else {
                  piVar9 = in_stack_00000000;
                  for (iVar6 = 0; iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
                    *(short *)piVar9 = *(short *)(iVar4 + iVar6 * 2) / 2 + (short)*piVar9 / 2;
                    *(short *)((int)piVar9 + 2) =
                         *(short *)(iVar10 + iVar6 * 2) / 2 + *(short *)((int)piVar9 + 2) / 2;
                    piVar9 = piVar9 + 1;
                  }
                  in_stack_00000000 = in_stack_00000000 + uVar5;
                }
              }
            }
            uVar7 = uVar7 - uVar5 & 0xffff;
            *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - (uVar3 & 0xffff);
            if (uVar7 == 0) goto LAB_100a827c;
            local_34 = 0;
            iVar4 = FUN_100af5dc(&local_48,*(undefined4 *)(param_1 + 0x1c),
                                 *(undefined4 *)(param_1 + 0x3c),0x7fffffff);
            if (iVar4 < 1) break;
            if (*(int *)(param_1 + 0x38) == 0) {
              *(int *)(param_1 + 0x40) = iVar4;
              *(int *)(param_1 + 0x44) = iVar4;
            }
          }
          iVar4 = FUN_1012d630(*(undefined4 *)(param_1 + 0x1c));
          if (iVar4 != 0) goto LAB_100a827c;
          iVar2 = iVar2 + -1;
          if (iVar2 < 1) break;
          FUN_1011dbc8(2);
        }
        FUN_100a5b78((DAT_100a8418 - DAT_100a841c) * 0x20 & 0xff00U | 0x910011,DAT_100a8424,
                     DAT_100a8420);
      }
    }
LAB_100a827c:
    FUN_100a7a24();
  }
  if ((((-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1e)) && (uVar8 == 2)) &&
      (-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1d))) &&
     (iVar2 = FUN_1012d608(*(undefined4 *)(param_1 + 0x18)),
     (int)(uint)*(ushort *)(param_1 + 0x10) <= iVar2)) {
    iVar2 = thunk_FUN_1013c70e();
    if (iVar2 == 0) {
      FUN_10114a38();
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(1,*(undefined4 *)(param_1 + 0x2c));
    }
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
    FUN_10064624(*(undefined4 *)(param_1 + 0x24));
    FUN_100a0654(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),
                 *(undefined2 *)(param_1 + 0x10));
    *(uint *)(param_1 + 0x60) = (uint)*(ushort *)(param_1 + 0x10) / (uint)*(byte *)(param_1 + 7);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 9) & 0x60) == 0x20)) {
      FUN_1012f50e(*(int *)(param_1 + 0x58),param_1 + 0x14);
    }
    if ((int)((uint)*(byte *)(param_1 + 5) << 0x1c) < 0) {
      FUN_100643d4();
    }
    else {
      FUN_10064404(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x14),
                   *(undefined2 *)(param_1 + 0x10));
    }
    iVar2 = thunk_FUN_1013c70e();
    if (iVar2 == 0) {
      FUN_101150e0();
    }
  }
  return;
}

