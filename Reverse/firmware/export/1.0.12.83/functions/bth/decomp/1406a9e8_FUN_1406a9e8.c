/* FUN_1406a9e8 @ 0x1406a9e8 */

void FUN_1406a9e8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  undefined1 uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ushort local_42;
  int local_40;
  ushort *local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 auStack_30 [20];
  int local_1c;
  
  local_1c = *DAT_1406aca0;
  switch(param_3) {
  case 3:
  case 8:
    goto switchD_1406aa06_caseD_3;
  case 4:
    if (param_4 != 0) break;
LAB_1406aa8e:
    if (*(short *)(param_2 + 0x2a) != 0) {
      uVar4 = (uint)*(ushort *)(param_2 + 0x24);
      do {
        param_4 = FUN_140664f0(uVar4,&local_40,&local_3c);
        if ((param_4 != 0) || (param_4 = FUN_140666e0(param_1,0,local_40,local_3c), param_4 != 0))
        goto LAB_1406abaa;
        if ((*local_3c >> 0xe != 0) || ((3 < local_3c[1] - 0x2800 && (local_3c[1] != 0x2900)))) {
          piVar6 = (int *)FUN_14066108(*(undefined1 *)(local_40 + 0xb));
          *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(local_40 + 0xb);
          uVar10 = *(ushort *)(param_2 + 0x2a);
          if (*(char *)(param_2 + 0x2c) == ' ') {
            if (uVar10 < 3) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 - 2;
            }
          }
          if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_1406ad68,0x161,DAT_1406ad64);
          }
          if ((*(short *)(param_2 + 0x26) == 0) || (-1 < (short)local_3c[2])) {
            *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xdf;
            (**(code **)(*piVar6 + 4))
                      (param_1,*(undefined1 *)(local_40 + 0xb),*(undefined2 *)(param_2 + 0x14),
                       *(undefined2 *)(param_2 + 0x24),*(short *)(param_2 + 0x26),uVar10);
            goto LAB_1406ac58;
          }
LAB_1406ad46:
          param_4 = 7;
          goto LAB_1406abaa;
        }
        param_4 = FUN_140667b8(*(undefined2 *)(param_2 + 0x24),local_40,local_3c,auStack_30,
                               &local_42);
        if (param_4 != 0) goto LAB_1406abaa;
        if ((uint)local_42 < (uint)*(ushort *)(param_2 + 0x26)) goto LAB_1406ad46;
        uVar10 = *(ushort *)(param_2 + 0x2a);
        if (*(char *)(param_2 + 0x2c) == ' ') {
          iVar8 = 2;
        }
        else {
          iVar8 = 0;
        }
        uVar4 = iVar8 + (uint)local_42;
        if (uVar10 <= uVar4) {
          uVar4 = (uint)uVar10;
        }
        local_38 = *(ushort **)(param_2 + 0x20);
        sVar1 = (short)uVar4;
        uVar11 = uVar4 & 0xffff;
        if (((local_38 == (ushort *)0x0) || (local_38[4] < 2)) || (local_38[4] < uVar11)) {
          iVar8 = FUN_14073468(&local_38,7,0,0x16);
          if (iVar8 == 0) {
            FUN_140739f0(param_2 + 0x1c,local_38);
            *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) - sVar1;
            *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) + sVar1;
            if (*(char *)(param_2 + 0x2c) == ' ') {
              puVar5 = (undefined1 *)0x0;
              if (local_38 != (ushort *)0x0) goto LAB_1406ac72;
              goto LAB_1406ac7c;
            }
            if (local_38 != (ushort *)0x0) goto LAB_1406aab4;
            iVar8 = 0;
            uVar12 = uVar11;
            goto LAB_1406aabe;
          }
          param_4 = 0x4b;
          goto LAB_1406abaa;
        }
        *(ushort *)(param_2 + 0x2a) = uVar10 - sVar1;
        *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) + sVar1;
        if (*(char *)(param_2 + 0x2c) == ' ') {
LAB_1406ac72:
          puVar5 = (undefined1 *)((int)local_38 + (uint)local_38[2] + (uint)local_38[3] + 0x30);
LAB_1406ac7c:
          *puVar5 = (char)local_42;
          puVar5[1] = (char)(local_42 >> 8);
          if (uVar4 < 2) {
            uVar12 = 0;
            FUN_1407373c(local_38,uVar11);
            uVar4 = 0;
            uVar11 = uVar12;
            if (local_38 != (ushort *)0x0) goto LAB_1406aab4;
            iVar8 = 0;
          }
          else {
            FUN_1407373c(local_38,2);
            uVar4 = uVar11 - 2 & 0xffff;
            uVar11 = uVar4;
            if (local_38 != (ushort *)0x0) goto LAB_1406aab4;
            iVar8 = 0;
            uVar12 = uVar4;
          }
        }
        else {
LAB_1406aab4:
          iVar8 = (int)local_38 + (uint)local_38[3] + (uint)local_38[2] + 0x30;
          uVar12 = uVar11;
        }
LAB_1406aabe:
        FUN_140e5278(iVar8,auStack_30,uVar4);
        FUN_1407373c(local_38,uVar12);
        if (*(int *)(param_2 + 0x18) == 0) break;
        uVar4 = FUN_1406a9b8(param_2);
        *(short *)(param_2 + 0x24) = (short)uVar4;
      } while (*(short *)(param_2 + 0x2a) != 0);
    }
LAB_1406abe0:
    local_3c = (ushort *)0x0;
    local_3c = (ushort *)FUN_14073a58(param_2 + 0x1c);
    if (local_3c == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1406ad68,0x196,DAT_1406ad64);
    }
    if (local_3c[4] < (ushort)(*(short *)(param_2 + 0x28) - local_3c[2])) {
      iVar8 = FUN_140737d0(local_3c,&local_38,7);
      if (iVar8 == 0) {
        FUN_140735a8(local_3c);
        local_3c = local_38;
        goto LAB_1406ac02;
      }
      bVar2 = false;
      uVar9 = 0x11;
      goto LAB_1406abb0;
    }
LAB_1406ac02:
    iVar8 = *(int *)(param_2 + 0x1c);
    local_38 = (ushort *)CONCAT31(local_38._1_3_,*(char *)(param_2 + 0x2c) + '\x01');
    while (iVar8 != 0) {
      iVar8 = FUN_14073a58(param_2 + 0x1c);
      if (iVar8 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined2 *)(iVar8 + 4);
      }
      puVar7 = local_3c;
      if (local_3c != (ushort *)0x0) {
        puVar7 = (ushort *)((int)local_3c + (uint)local_3c[3] + (uint)local_3c[2] + 0x30);
      }
      FUN_14073968(iVar8,puVar7,uVar3);
      FUN_1407373c(local_3c,uVar3);
      FUN_140735a8(iVar8);
      iVar8 = *(int *)(param_2 + 0x1c);
    }
    bVar2 = false;
    goto LAB_1406aa18;
  default:
    if (param_4 == 0) goto LAB_1406abe0;
    break;
  case 6:
    if (param_4 == 0) {
      if (*(int *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_1406a9b8(param_2);
        *(undefined2 *)(param_2 + 0x24) = uVar3;
        goto LAB_1406aa8e;
      }
      goto LAB_1406abe0;
    }
  }
LAB_1406abaa:
  uVar9 = (undefined1)param_4;
  bVar2 = true;
  local_3c = (ushort *)0x0;
LAB_1406abb0:
  iVar8 = FUN_14073468(&local_3c,7,0);
  if (iVar8 == 0) {
    local_38._1_3_ = (uint3)*(byte *)(param_2 + 0x2c);
    local_38 = (ushort *)CONCAT31(local_38._1_3_,1);
    local_38 = (ushort *)CONCAT22(*(undefined2 *)(param_2 + 0x24),(undefined2)local_38);
    local_34 = uVar9;
  }
LAB_1406aa18:
  if (local_3c != (ushort *)0x0) {
    iVar8 = FUN_1406d0c0(param_1,param_2,&local_38,local_3c,0);
    FUN_140735a8(local_3c);
    if ((iVar8 == 0) && (!bVar2)) {
LAB_1406ac58:
      if (*DAT_1406aca0 == local_1c) {
        return;
      }
      goto LAB_1406ad60;
    }
  }
switchD_1406aa06_caseD_3:
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_140735a8();
  }
  iVar8 = *(int *)(param_2 + 0x1c);
  while (iVar8 != 0) {
    FUN_14073a58(param_2 + 0x1c);
    FUN_140735a8();
    iVar8 = *(int *)(param_2 + 0x1c);
  }
  if (*DAT_1406aca0 == local_1c) {
    FUN_1406cf54(param_1,param_2,1);
    return;
  }
LAB_1406ad60:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

