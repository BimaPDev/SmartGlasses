/* FUN_2c5f118c @ 0x2c5f118c */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f118c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,char param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (0x13 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5f132c,0x43,_LAB_2c5f1328,_LAB_2c5f1324,0x14);
  }
  iVar2 = FUN_2c6041d4();
  uVar7 = _LAB_2c5f1330;
  if (*(int *)(iVar2 + 0x54) != param_1) {
    if (*(short *)(iVar2 + 0x50) != 0) {
      iVar9 = 0;
      do {
        while( true ) {
          uVar3 = FUN_2c637344(param_1);
          FUN_2c638730(uVar3,uVar7);
          FUN_2c606e20(uVar3,0xff00ff00,0);
          FUN_2c606d84(uVar3,0xff00ff00,0);
          FUN_2c606d9c(uVar3,1,0);
          FUN_2c606d30(uVar3,5,0);
          FUN_2c606d3c(uVar3,5,0);
          FUN_2c606d18(uVar3,5,0);
          FUN_2c606d24(uVar3,5,0);
          if ((*(int *)(iVar2 + 0x54) != 0) &&
             (sVar1 = *(short *)(iVar2 + 0x28 + iVar9 * 2), sVar1 != 0)) break;
          iVar9 = iVar9 + 1;
          if ((int)(uint)*(ushort *)(iVar2 + 0x50) <= iVar9) goto LAB_2c5f1246;
        }
        iVar9 = iVar9 + 1;
        FUN_2c6070bc(uVar3,(int)(short)(sVar1 + 0xc));
      } while (iVar9 < (int)(uint)*(ushort *)(iVar2 + 0x50));
    }
LAB_2c5f1246:
    *(int *)(iVar2 + 0x54) = param_1;
  }
  if (param_5 == 'l') {
    iVar9 = FUN_2c6041dc(param_1,param_3);
    uVar7 = 1;
  }
  else {
    if (param_5 == 'r') {
      uVar7 = 3;
    }
    else if (param_5 == 'c') {
      uVar7 = 2;
    }
    else {
      uVar7 = 0;
    }
    iVar9 = FUN_2c6041dc(param_1,param_3);
  }
  if (iVar9 == 0) {
    return;
  }
  iVar10 = iVar2 + param_3 * 2;
  FUN_2c638730(iVar9,param_4);
  FUN_2c606e5c(iVar9,uVar7,0);
  uVar7 = FUN_2c66c4ec(param_4);
  uVar3 = FUN_2c5e2e58(_LAB_2c5f1320);
  uVar4 = FUN_2c62b85c(param_4,uVar7,uVar3,0,0);
  if (uVar4 < (uint)(int)*(short *)(iVar10 + 0x28)) {
    uVar4 = (int)*(short *)(iVar10 + 0x28);
  }
  *(short *)(iVar10 + 0x28) = (short)uVar4;
  uVar4 = 0;
  while( true ) {
    uVar5 = FUN_2c6041fc(iVar2);
    uVar8 = uVar4 + 1;
    if (uVar5 <= uVar4) break;
    uVar7 = FUN_2c6041dc(iVar2,uVar4);
    iVar6 = FUN_2c6041dc(uVar7,param_3);
    uVar4 = uVar8;
    if (iVar6 != 0) {
      FUN_2c6070bc(iVar6,(int)(short)(*(short *)(iVar10 + 0x28) + 0xc));
    }
  }
  iVar6 = *DAT_2c606ab8;
  iVar2 = FUN_2c607214();
  FUN_2c607df0(iVar9);
  *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 1;
  FUN_2c607df0(iVar9);
  iVar10 = FUN_2c607214(iVar9);
  if (iVar10 != iVar2) {
    FUN_2c6041d4(iVar9);
    FUN_2c607248();
    FUN_2c607248(iVar9);
  }
  if (*DAT_2c606ab8 != iVar6) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

