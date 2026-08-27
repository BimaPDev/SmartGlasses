/* FUN_2c49cbf8 @ 0x2c49cbf8 */

void FUN_2c49cbf8(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int local_24;
  undefined2 local_20;
  uint local_1c;
  
  local_1c = *DAT_2c49cd38;
  local_20 = 0;
  local_24 = 0;
  lVar8 = FUN_2c49c9e8(param_1,4,&local_20);
  if ((int)lVar8 < 0) goto LAB_2c49cc8c;
  uVar3 = (uint)(byte)local_20;
  *(uint *)(param_1 + 0x18) = uVar3;
  *(uint *)(param_1 + 0x1c) = (uint)local_20._1_1_;
  uVar6 = ((uint)local_20._1_1_ + uVar3 * 0x100) * 1000;
  lVar8 = (ulonglong)DAT_2c49cd3c * (ulonglong)(uVar6 >> 9);
  iVar7 = (int)((ulonglong)lVar8 >> 0x20);
  FUN_2c49b954(&local_24,1000,uVar3,(int)lVar8);
  piVar2 = DAT_2c49cd4c;
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 < 0) {
    iVar5 = 1;
    *(int *)(param_1 + 0x20) = iVar7;
    goto LAB_2c49cca4;
  }
  if (local_24 == 0) {
LAB_2c49cc66:
    if ((int)uVar6 < DAT_2c49cd48) {
      iVar4 = FUN_2c4c1638();
      if (0xcd0 < iVar4) {
        iVar4 = *(int *)(param_1 + 0x20);
        goto LAB_2c49cc6c;
      }
      if (*DAT_2c49cd4c < 5) {
        iVar5 = *DAT_2c49cd4c + 1;
        iVar7 = *(int *)(param_1 + 0x20);
        piVar2 = DAT_2c49cd4c;
        goto LAB_2c49cca4;
      }
      iVar4 = *(int *)(param_1 + 0x20);
      iVar7 = iVar4 + -1;
      goto LAB_2c49cc74;
    }
LAB_2c49cc6c:
    if (iVar7 < iVar4) {
      iVar5 = *DAT_2c49cd4c;
      if (iVar4 < 0x61) {
        if (iVar5 < 5) {
          lVar8 = ZEXT48(DAT_2c49cd4c) << 0x20;
          *DAT_2c49cd4c = iVar5 + 1;
          goto LAB_2c49cc8c;
        }
      }
      else if (iVar5 < 8) {
LAB_2c49cce0:
        iVar5 = iVar5 + 1;
        piVar2 = DAT_2c49cd4c;
        iVar7 = iVar4;
        goto LAB_2c49cca4;
      }
      iVar7 = iVar4 + -1;
      goto LAB_2c49cc74;
    }
    if (iVar7 <= iVar4) goto LAB_2c49cc74;
    piVar2 = DAT_2c49cd4c;
    iVar7 = iVar4;
    if (local_24 == 0) {
      iVar5 = *DAT_2c49cd4c + 1;
    }
    else {
      if (*DAT_2c49cd40 != 0) {
        iVar5 = *DAT_2c49cd4c;
        if (2 < iVar5) goto LAB_2c49cd1e;
        goto LAB_2c49cce0;
      }
      iVar5 = *DAT_2c49cd4c + 1;
    }
LAB_2c49cca4:
    *piVar2 = iVar5;
  }
  else {
    if ((int)uVar6 < DAT_2c49cd44) {
      bVar1 = 0;
    }
    else {
      bVar1 = *DAT_2c49cd40 & 1;
    }
    if ((bVar1 == 0) || (iVar4 < iVar7)) {
      if (*DAT_2c49cd40 == 0) goto LAB_2c49cc66;
      goto LAB_2c49cc6c;
    }
    iVar5 = *DAT_2c49cd4c;
    if (iVar5 < 0x3c) goto LAB_2c49cce0;
LAB_2c49cd1e:
    iVar7 = iVar4 + 1;
LAB_2c49cc74:
    piVar2 = DAT_2c49cd4c;
    if (iVar4 == iVar7) {
      iVar5 = *DAT_2c49cd4c + 1;
      goto LAB_2c49cca4;
    }
    *(int *)(param_1 + 0x20) = iVar7;
    *piVar2 = 1;
  }
  if (iVar7 < 0x65) {
    if (iVar7 < 1) {
      lVar8 = ZEXT48(piVar2) << 0x20;
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
    else {
      lVar8 = ZEXT48(piVar2) << 0x20;
    }
  }
  else {
    lVar8 = ZEXT48(piVar2) << 0x20;
    *(undefined4 *)(param_1 + 0x20) = 100;
  }
LAB_2c49cc8c:
  if ((*DAT_2c49cd38 ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail((int)lVar8,(int)((ulonglong)lVar8 >> 0x20),*DAT_2c49cd38 ^ local_1c,0);
  }
  return;
}

