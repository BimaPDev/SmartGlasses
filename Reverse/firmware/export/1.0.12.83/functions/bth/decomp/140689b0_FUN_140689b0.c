/* FUN_140689b0 @ 0x140689b0 */

void FUN_140689b0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  uint uVar9;
  code *local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  
  local_2c = *DAT_14068c74;
  iVar6 = *(int *)(DAT_14068c78 + (param_2 + 0x22) * 4);
  uVar9 = (uint)*(ushort *)(param_1 + 8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14068c80,0x256,DAT_14068c7c);
  }
  piVar7 = *(int **)(iVar6 + param_3 * 4);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14068c80,600,DAT_14068c7c);
  }
  *(ushort *)((int)piVar7 + 0xe) = *(ushort *)((int)piVar7 + 0xe) | 0x40;
  iVar6 = FUN_14073a58(piVar7);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14068c80,0x25e,DAT_14068c7c);
  }
  if (uVar9 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 10);
    if (-1 < (int)(uVar4 << 0x1f)) {
      if (uVar4 == 0x1e) {
        if ((int)((uint)*(ushort *)((int)piVar7 + 0xe) << 0x11) < 0) {
          iVar1 = FUN_1406d034(param_2,*(undefined2 *)((int)piVar7 + 10));
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x44,DAT_14068cd8,0x291,DAT_14068cd4,param_2,
                         *(undefined2 *)((int)piVar7 + 10));
          }
          goto LAB_14068b66;
        }
      }
      else if ((uVar4 != 0xd2) || (-1 < (int)((uint)*(ushort *)((int)piVar7 + 0xe) << 0x17)))
      goto LAB_14068ad6;
      goto LAB_14068a4e;
    }
    uVar9 = uVar4 - 0x1b & 0xff;
    if ((uVar9 < 9) && ((int)((0x105U >> uVar9) << 0x1f) < 0)) {
LAB_14068ad6:
      local_34 = 0;
      uVar9 = FUN_1406d260(param_2,uVar4,param_3 & 0xff,&local_38,&local_34);
      if (local_34 == 0) {
        if (uVar9 == 0) {
          FUN_140735a8(iVar6);
          uVar5 = *(ushort *)((int)piVar7 + 0xe);
          goto joined_r0x14068bc8;
        }
      }
      else {
        uVar2 = (*local_38)(param_2,local_34,param_1 + 10,iVar6,(short)piVar7[3]);
        iVar1 = local_34;
        if (uVar9 == 0) {
          FUN_140735a8(iVar6);
          if (iVar1 != 0) goto LAB_14068b1c;
          goto LAB_14068b24;
        }
      }
      goto LAB_14068a02;
    }
    if (-1 < *(short *)((int)piVar7 + 0xe)) {
      uVar9 = 4;
LAB_14068ac2:
      if ((uVar4 & 0x41) != 0) goto LAB_14068a4e;
      goto LAB_14068ac8;
    }
    iVar1 = FUN_1406d034(param_2,(short)piVar7[2]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14068c84,0x276,DAT_14068c7c,param_2,(short)piVar7[2]);
    }
LAB_14068b66:
    uVar4 = (uint)*(byte *)(param_1 + 10);
    if (uVar4 != *(byte *)(iVar1 + 0x1a) + 1) {
      if (uVar4 != 1) {
        uVar9 = 0xe;
        goto LAB_14068ac2;
      }
      if ((uint)*(byte *)(param_1 + 0xb) != (uint)*(byte *)(iVar1 + 0x1a)) goto LAB_14068a4e;
      cVar8 = *(char *)(param_1 + 0xe);
      if (cVar8 == '\x12') {
        FUN_1406b514(param_2,1,1,0xffff);
      }
      else if (cVar8 == '\0') {
        cVar8 = '\x0e';
      }
      *(ushort *)((int)piVar7 + 0xe) = *(ushort *)((int)piVar7 + 0xe) & 0xfdff;
      FUN_140735a8(iVar6);
      FUN_1406d210(param_2,iVar1,4,cVar8);
      goto LAB_14068a54;
    }
    if (*(code **)(iVar1 + 0x1c) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14068cdc,0x2a0,DAT_14068cd4);
    }
    uVar2 = (**(code **)(iVar1 + 0x1c))
                      (param_2,iVar1,param_1 + 10,iVar6,*(undefined2 *)(iVar1 + 0x18));
    FUN_140735a8(iVar6);
LAB_14068b1c:
    FUN_1406d210(param_2,iVar1,4,uVar2);
LAB_14068b24:
    uVar5 = *(ushort *)((int)piVar7 + 0xe);
joined_r0x14068bc8:
    if ((uVar5 & 0x200) != 0) goto LAB_14068a82;
  }
  else {
LAB_14068a02:
    bVar3 = *(byte *)(param_1 + 10);
    uVar4 = (uint)bVar3;
    if ((bVar3 & 0x41) == 0) {
LAB_14068ac8:
      bVar3 = (byte)uVar4;
      if (uVar4 != 0x1e) {
LAB_14068a16:
        local_34 = CONCAT31((uint3)bVar3,1);
        local_30 = (undefined1)uVar9;
        iVar1 = FUN_14073468(&local_38,7,0);
        if (iVar1 == 0) {
          FUN_14068890(param_2,param_3 & 0xff,0,&local_34,local_38);
          FUN_140735a8(local_38);
        }
      }
    }
    else if ((0x24 < uVar4) && (uVar9 == 6)) goto LAB_14068a16;
LAB_14068a4e:
    FUN_140735a8(iVar6);
LAB_14068a54:
    uVar5 = *(ushort *)((int)piVar7 + 0xe) & 0xfdff;
  }
  iVar6 = *piVar7;
  if (iVar6 != 0) {
    *(ushort *)((int)piVar7 + 0xe) = uVar5 | 0x200;
    if ((int)((uint)*(byte *)(iVar6 + 0x2d) << 0x1c) < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + ((*(byte *)(iVar6 + 0x2d) & 0xf) + 3) * 4;
    }
    FUN_14058748(iVar6,param_3);
    uVar5 = *(ushort *)((int)piVar7 + 0xe);
  }
LAB_14068a82:
  *(ushort *)((int)piVar7 + 0xe) = uVar5 & 0xffbf;
  if (*DAT_14068c74 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

