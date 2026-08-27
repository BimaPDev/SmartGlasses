/* FUN_2c58df7a @ 0x2c58df7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58df7a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  
  uVar2 = _LAB_2c58e118;
  uStack_24 = *_LAB_2c58e11c;
  puStack_28 = (undefined4 *)0x0;
  uStack_30 = _LAB_2c58e118;
  iStack_2c = 0;
  iVar5 = func_0x2c58ccf4(*(undefined4 *)(param_4 + 4),&uStack_30,param_3,0);
  puVar4 = puStack_28;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c58e13c,0x1bc,_LAB_2c58e134,_LAB_2c58e138,_LAB_2c58e134);
  }
  iVar5 = FUN_2c58d730(puStack_28[1],puStack_28[2],_LAB_2c58e120);
  uVar1 = _LAB_2c58e140;
  if (iVar5 != 0) goto LAB_2c58e050;
  uVar8 = *(uint *)(*(int *)(iStack_2c + 4) + 8);
  if (uVar8 < 0xb) goto LAB_2c58e050;
  iVar7 = uVar8 - 0xb;
  iVar9 = *(int *)(*(int *)(iStack_2c + 4) + 4);
  iVar5 = iVar7;
  do {
    iVar6 = FUN_2c66960c(iVar9 + iVar5,uVar1,0xb);
    uVar3 = _LAB_2c58e144;
    if (iVar6 == 0) {
      if (iVar5 == 0) goto LAB_2c58e050;
      break;
    }
    bVar10 = iVar5 != 0;
    iVar5 = iVar5 + -1;
  } while (bVar10);
  if (uVar8 < 0xe) {
    uVar1 = _LAB_2c58e124;
    if (uVar8 == 0xd) goto LAB_2c58e008;
  }
  else {
    iVar5 = uVar8 - 0xe;
    do {
      iVar6 = FUN_2c66960c(iVar9 + iVar5,uVar3,0xe);
      if (iVar6 == 0) {
        if (iVar5 == 0) goto LAB_2c58e050;
        break;
      }
      bVar10 = iVar5 != 0;
      iVar5 = iVar5 + -1;
    } while (bVar10);
LAB_2c58e008:
    uVar3 = _LAB_2c58e148;
    iVar6 = FUN_2c66960c(iVar9 + (uVar8 - 0xd),_LAB_2c58e148,0xd);
    iVar5 = uVar8 - 0xd;
    while (uVar1 = _LAB_2c58e124, iVar6 != 0) {
      if (iVar5 == 0) goto LAB_2c58e03a;
      iVar6 = FUN_2c66960c(iVar9 + iVar5 + -1,uVar3,0xd);
      iVar5 = iVar5 + -1;
    }
    if (iVar5 == 0) goto LAB_2c58e050;
  }
LAB_2c58e03a:
  do {
    iVar5 = FUN_2c66960c(iVar9 + iVar7,uVar1,0xb);
    if (iVar5 == 0) break;
    bVar10 = iVar7 != 0;
    iVar7 = iVar7 + -1;
  } while (bVar10);
LAB_2c58e050:
  uStack_30 = uVar2;
  *puVar4 = _LAB_2c58e128;
  if ((undefined4 *)puVar4[1] != puVar4 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar4);
}

