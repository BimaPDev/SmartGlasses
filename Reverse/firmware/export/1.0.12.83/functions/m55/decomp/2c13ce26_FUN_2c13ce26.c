/* FUN_2c13ce26 @ 0x2c13ce26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13ce26(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uStack_18;
  int iStack_14;
  undefined1 *puVar7;
  
  puVar1 = _DAT_2c13cfc8;
  iStack_14 = *_DAT_2c13cfc4;
  uVar5 = *_DAT_2c13cfc8;
  uStack_18 = param_3;
  do {
    *puVar1 = uVar5 + 1;
    iVar4 = func_0x2c13c7fc(param_1);
    if (iVar4 == 0) goto LAB_2c13ce4c;
    func_0x2c13f650(10);
    uVar5 = *puVar1;
  } while (uVar5 < 3);
  FUN_2c135988(4,0x4d3,_DAT_2c13cff4,_DAT_2c13cff0,_DAT_2c13cff8,iVar4,uVar5);
  *puVar1 = 10;
LAB_2c13ce4c:
  FUN_2c13c3c4(&uStack_18);
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_2c13e9dc(param_1 + 0x1c,0,0x20);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  puVar7 = (undefined1 *)(param_1 + 0xc);
  do {
    puVar6 = puVar7 + 1;
    *puVar7 = 10;
    puVar7[8] = 0;
    puVar7 = puVar6;
  } while ((undefined1 *)(param_1 + 0x14) != puVar6);
  iVar4 = func_0x2c13c234(param_1);
  if (iVar4 != 0) {
    FUN_2c135988(4,0x4dc,_DAT_2c13cff4,_DAT_2c13cff0,_DAT_2c13d008,iVar4);
  }
  puVar1 = _DAT_2c13cfcc;
  uVar5 = *_DAT_2c13cfcc;
  do {
    *puVar1 = uVar5 + 1;
    iVar4 = FUN_2c13cd38(param_1);
    if (iVar4 == 0) {
      iVar4 = func_0x2c13f310(_DAT_2c13cfd0,0);
      goto joined_r0x2c13ceb4;
    }
    func_0x2c13f650(10);
    uVar5 = *puVar1;
  } while (uVar5 < 3);
  FUN_2c135988(4,0x4e7,_DAT_2c13cff4,_DAT_2c13cff0,_DAT_2c13cffc,iVar4,uVar5);
  uVar2 = _DAT_2c13cfd0;
  *puVar1 = 10;
  iVar4 = func_0x2c13f310(uVar2,0);
joined_r0x2c13ceb4:
  if (iVar4 == 0) {
    FUN_2c135988(4,0x4ed,_DAT_2c13cff4,_DAT_2c13cff0,_DAT_2c13d000);
  }
  iVar4 = func_0x2c13f310(_DAT_2c13cfd4,0);
  *_DAT_2c13cfd8 = iVar4;
  if (iVar4 == 0) {
    FUN_2c135988(4,0x4f2,_DAT_2c13cff4,_DAT_2c13cff0,_DAT_2c13d00c);
  }
  piVar3 = _DAT_2c13cfdc;
  *(undefined4 *)(param_1 + 0x80) = 10;
  iVar4 = *piVar3;
  *(undefined1 *)(param_1 + 0xf5) = 1;
  if (iVar4 == 0) {
    iVar4 = func_0x2c13f38c(_DAT_2c13d004,1,0);
    *piVar3 = iVar4;
    if (iVar4 == 0) goto LAB_2c13cee2;
  }
  func_0x2c13f98c(iVar4,2000);
LAB_2c13cee2:
  FUN_2c135988(4,0x4fa,_DAT_2c13cff4,_DAT_2c13cff0,_DAT_2c13cfec,_DAT_2c13cfe8,*_DAT_2c13cfe4,
               *_DAT_2c13cfe0);
  if (*_DAT_2c13cfc4 == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

