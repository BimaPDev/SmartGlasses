/* FUN_2c5cc444 @ 0x2c5cc444 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cc444(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_r5;
  int unaff_r6;
  undefined4 *puVar6;
  int iVar7;
  int *unaff_r7;
  int *piVar8;
  undefined1 auStack_38 [12];
  int iStack_2c;
  int iStack_24;
  int iStack_10;
  int iStack_c;
  
  piVar8 = &iStack_10;
  iVar3 = param_3 + -0x42;
  iStack_10 = param_3;
  iStack_c = param_4;
  if (param_1 != 0) {
    *unaff_r7 = param_4;
    unaff_r7[1] = param_3 + -0x58;
    unaff_r7[2] = unaff_r6;
    unaff_r7[3] = (int)unaff_r7;
    *unaff_r7 = param_3;
    unaff_r7[1] = param_4;
    unaff_r7[2] = unaff_r5;
    unaff_r7[3] = unaff_r6;
    unaff_r7[4] = (int)unaff_r7;
    iStack_24 = param_3 + -0x84;
    piVar8 = (int *)auStack_38;
    iStack_2c = *_LAB_2c5cc53c;
    unaff_r7 = (int *)FUN_2c48e738();
    FUN_2c48e5b4(unaff_r7,_LAB_2c5cc544,_LAB_2c5cc540);
    uVar1 = FUN_2c48e738();
    FUN_2c48e474(unaff_r7,_LAB_2c5cc548,uVar1);
    FUN_2c48e5b4(uVar1,_LAB_2c5cc544,_LAB_2c5cc54c);
    iVar3 = FUN_2c48e738();
    FUN_2c48e474(uVar1,_LAB_2c5cc550);
  }
  uVar1 = FUN_2c48e714();
  FUN_2c48e474(iVar3,_LAB_2c5cc554,uVar1);
  uVar2 = FUN_2c5c685c();
  FUN_2c5c749c(piVar8,uVar2);
  puVar6 = (undefined4 *)piVar8[1];
  for (puVar4 = (undefined4 *)*piVar8; puVar4 != puVar6; puVar4 = puVar4 + 6) {
    uVar2 = FUN_2c48e6c0(*puVar4);
    FUN_2c48e444(uVar1,uVar2);
  }
  uVar1 = FUN_2c48e3e8(unaff_r7);
  uVar2 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar2,uVar1,1);
  FUN_2c48e87c(uVar1);
  FUN_2c48dea0(unaff_r7);
  iVar3 = *piVar8;
  iVar7 = piVar8[1];
  if (iVar3 != iVar7) {
    iVar5 = iVar3 + 8;
    do {
      if (iVar5 != *(int *)(iVar5 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar3 = iVar3 + 0x18;
      iVar5 = iVar5 + 0x18;
    } while (iVar7 != iVar3);
    iVar7 = *piVar8;
  }
  if (iVar7 == 0) {
    if (*_LAB_2c5cc53c != piVar8[3]) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar7);
}

