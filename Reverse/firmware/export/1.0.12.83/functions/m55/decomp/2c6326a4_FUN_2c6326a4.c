/* FUN_2c6326a4 @ 0x2c6326a4 */

void FUN_2c6326a4(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_2c606b6c(param_1,1);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = FUN_2c604178(param_1);
  FUN_2c604458(uVar9,uVar5);
  FUN_2c604550(*(undefined4 *)(param_1 + 0x24),0xffffffff);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
  FUN_2c602340(param_1,0x1f,0);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar5 = FUN_2c6041dc(*(int *)(param_1 + 0x24),0);
  }
  FUN_2c63888c(uVar5,*(undefined4 *)(param_1 + 0x30));
  FUN_2c6070bc(*(undefined4 *)(param_1 + 0x24),0x27d1);
  FUN_2c608c7c(uVar5);
  iVar6 = FUN_2c6073ec(*(undefined4 *)(param_1 + 0x24));
  iVar7 = FUN_2c6073ec(param_1);
  if ((iVar6 <= iVar7) && ((bVar8 = *(byte *)(param_1 + 0x3c) & 0xf, bVar8 == 4 || (bVar8 == 8)))) {
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = FUN_2c6073ec(param_1);
    FUN_2c6070bc(uVar10,uVar9);
  }
  sVar1 = FUN_2c6073f8(uVar5);
  sVar2 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x24),0,0x32);
  sVar3 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x24),0,0x10);
  sVar4 = FUN_2c6033b4(*(undefined4 *)(param_1 + 0x24),0,0x11);
  bVar8 = *(byte *)(param_1 + 0x3c) & 0xf;
  iVar6 = (int)(short)(sVar3 + sVar4 + sVar2 * 2 + sVar1);
  if (bVar8 == 8) {
    sVar1 = *(short *)(param_1 + 0x1a);
    FUN_2c62a470();
    iVar7 = FUN_2c62a4a0();
    if (sVar1 + iVar6 <= iVar7) goto LAB_2c632772;
    sVar1 = *(short *)(param_1 + 0x16);
    FUN_2c62a470();
    iVar7 = FUN_2c62a4a0();
    if ((int)sVar1 <= iVar7 - *(short *)(param_1 + 0x1a)) {
      FUN_2c62a470();
      sVar1 = FUN_2c62a4a0();
      iVar7 = (int)(short)(~*(ushort *)(param_1 + 0x1a) + sVar1);
      if (iVar7 <= iVar6) {
        iVar6 = iVar7;
      }
      goto LAB_2c632772;
    }
    iVar7 = (int)(short)(*(short *)(param_1 + 0x16) + -1);
    if (iVar6 <= iVar7) {
      iVar7 = iVar6;
    }
    FUN_2c60710c(*(undefined4 *)(param_1 + 0x24),iVar7);
    FUN_2c63202c(param_1);
LAB_2c632876:
    FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,10,0,0);
  }
  else {
    if ((bVar8 == 4) && (sVar1 = *(short *)(param_1 + 0x16), sVar1 - iVar6 < 0)) {
      FUN_2c62a470();
      iVar7 = FUN_2c62a4a0();
      if (iVar7 - *(short *)(param_1 + 0x1a) <= (int)sVar1) {
        if (*(short *)(param_1 + 0x16) <= iVar6) {
          iVar6 = (int)*(short *)(param_1 + 0x16);
        }
        goto LAB_2c632772;
      }
      FUN_2c62a470();
      sVar1 = FUN_2c62a4a0();
      iVar7 = (int)(short)(sVar1 - *(short *)(param_1 + 0x1a));
      if (iVar6 <= iVar7) {
        iVar7 = iVar6;
      }
      FUN_2c60710c(*(undefined4 *)(param_1 + 0x24),iVar7);
      FUN_2c63202c(param_1);
    }
    else {
LAB_2c632772:
      FUN_2c60710c(*(undefined4 *)(param_1 + 0x24),iVar6);
      FUN_2c63202c(param_1);
      if (bVar8 != 8) {
        if (bVar8 != 4) {
          if (bVar8 == 1) {
            FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,0x10,0,0);
          }
          else if (bVar8 == 2) {
            FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,0x13,0,0);
          }
          goto LAB_2c632796;
        }
        goto LAB_2c632876;
      }
    }
    FUN_2c608808(*(undefined4 *)(param_1 + 0x24),param_1,0xd,0,0);
  }
LAB_2c632796:
  FUN_2c608c7c(*(undefined4 *)(param_1 + 0x24));
  if ((*(byte *)(param_1 + 0x3c) & 0xf) - 1 < 2) {
    sVar1 = FUN_2c607394(*(undefined4 *)(param_1 + 0x24));
    iVar6 = FUN_2c6073d4(*(undefined4 *)(param_1 + 0x24));
    FUN_2c62a470();
    iVar7 = FUN_2c62a4a0();
    if (iVar7 <= iVar6) {
      uVar9 = *(undefined4 *)(param_1 + 0x24);
      FUN_2c62a470();
      sVar2 = FUN_2c62a4a0();
      FUN_2c606ff8(uVar9,(int)(short)(sVar2 + ((sVar1 + -1) - (short)iVar6)));
    }
  }
  iVar6 = FUN_2c604148(uVar5,0,*(undefined4 *)(param_1 + 0x30));
  if ((iVar6 != 2) && (iVar6 != 3)) {
    iVar6 = 1;
  }
  FUN_2c6072bc(uVar5,iVar6,0);
  return;
}

