/* FUN_2c5b026c @ 0x2c5b026c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b026c(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_58;
  int *piStack_54;
  int iStack_50;
  int aiStack_4c [4];
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  int iStack_24;
  
  iStack_24 = *_LAB_2c5b04f8;
  uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),param_2,param_3,0);
  iVar5 = FUN_2c606b94(uVar4,0x8000000);
  piVar2 = _LAB_2c5b0528;
  piVar1 = _LAB_2c5b050c;
  if (iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0) {
    piStack_54 = aiStack_4c;
    iStack_58 = 0x12;
    piStack_54 = (int *)FUN_2c5afa4c(&iStack_58,0);
    puVar3 = _LAB_2c5b0538;
    aiStack_4c[0] = iStack_58;
    iVar6 = *piVar1;
    iVar7 = piVar1[1];
    iVar8 = piVar1[2];
    piStack_54[3] = piVar1[3];
    iVar5 = piVar1[4];
    *piStack_54 = iVar6;
    piStack_54[1] = iVar7;
    piStack_54[2] = iVar8;
    *(short *)(piStack_54 + 4) = (short)iVar5;
    iStack_50 = iStack_58;
    *(undefined1 *)((int)piStack_54 + iStack_58) = 0;
    uStack_38 = 6;
    uStack_30 = (uint)uStack_30._3_1_ << 0x18;
    uStack_34 = *puVar3;
    uStack_30 = CONCAT22(uStack_30._2_2_,(short)puVar3[1]);
    puStack_3c = &uStack_34;
    FUN_2c5afe20(param_1,&piStack_54,&puStack_3c);
    if (puStack_3c != &uStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
  else {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5b0508,0x2e0,_LAB_2c5b0504,_LAB_2c5b04fc,_LAB_2c5b0500);
    }
    piStack_54 = aiStack_4c;
    iStack_58 = 0x15;
    piStack_54 = (int *)FUN_2c5afa4c(&iStack_58,0);
    puVar3 = _LAB_2c5b0540;
    aiStack_4c[0] = iStack_58;
    iVar7 = piVar2[1];
    iVar8 = piVar2[2];
    iVar5 = piVar2[3];
    *piStack_54 = *piVar2;
    piStack_54[3] = iVar5;
    iVar6 = piVar2[4];
    iVar5 = piVar2[5];
    piStack_54[1] = iVar7;
    piStack_54[4] = iVar6;
    piStack_54[2] = iVar8;
    *(char *)(piStack_54 + 5) = (char)iVar5;
    iStack_50 = iStack_58;
    *(undefined1 *)((int)piStack_54 + iStack_58) = 0;
    uStack_34 = *puVar3;
    uStack_30 = puVar3[1];
    uStack_2c = (undefined1)puVar3[2];
    uStack_38 = 9;
    uStack_2b = 0;
    puStack_3c = &uStack_34;
    FUN_2c5afe20(param_1,&piStack_54,&puStack_3c);
    if (puStack_3c != &uStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
  if (piStack_54 != aiStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c5b04f8 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

