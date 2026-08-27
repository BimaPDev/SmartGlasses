/* FUN_2c551d80 @ 0x2c551d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c551d80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  int iStack_2c;
  
  iVar6 = 0;
  iStack_2c = *DAT_2c551ee4;
  auStack_3c[0] = 0;
  uStack_40 = 0;
  puStack_44 = auStack_3c;
  iVar1 = FUN_2c54f0ec(param_1,_LAB_2c551ee8,&puStack_44,0);
  if ((iVar1 < 0) || (iVar1 = FUN_2c48e3b8(puStack_44), iVar1 == 0)) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = FUN_2c48e85c();
    if (iVar2 != 0) {
      iVar2 = FUN_2c48e3f0(iVar1);
      func_0x2c550cf4(param_2 + 0x20,iVar2);
      if (0 < iVar2) {
        do {
          iVar5 = *(int *)(param_2 + 0x24);
          if (iVar5 == *(int *)(param_2 + 0x28)) {
            FUN_2c5517a8(param_2 + 0x20,iVar5);
          }
          else {
            puVar3 = (undefined4 *)FUN_2c674268(iVar5,0,0xbc);
            *puVar3 = _LAB_2c551eec;
            *(undefined1 *)(puVar3 + 3) = 0;
            puVar3[8] = 0;
            *(undefined1 *)(puVar3 + 9) = 0;
            puVar3[0xe] = 0;
            *(undefined1 *)(puVar3 + 0xf) = 0;
            puVar3[0x14] = 0;
            *(undefined1 *)(puVar3 + 0x15) = 0;
            puVar3[0x1a] = 0;
            *(undefined1 *)(puVar3 + 0x1b) = 0;
            puVar3[0x20] = 0;
            *(undefined1 *)(puVar3 + 0x21) = 0;
            puVar3[0x26] = 0;
            *(undefined1 *)(puVar3 + 0x27) = 0;
            puVar3[0x2e] = 0;
            puVar3[1] = puVar3 + 3;
            puVar3[2] = 0;
            puVar3[7] = puVar3 + 9;
            puVar3[0xd] = puVar3 + 0xf;
            puVar3[0x13] = puVar3 + 0x15;
            puVar3[0x19] = puVar3 + 0x1b;
            puVar3[0x1f] = puVar3 + 0x21;
            puVar3[0x25] = puVar3 + 0x27;
            puVar3[0x2c] = 0;
            puVar3[0x2d] = 0;
            puVar3[0x2b] = 0xffffffff;
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 0xbc;
          }
          uVar4 = FUN_2c48e408(iVar1,iVar6);
          iVar5 = func_0x2c55007c(uVar4,iVar6 * 0xbc + *(int *)(param_2 + 0x20));
          if (iVar5 < 0) goto LAB_2c551eb6;
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      iVar6 = FUN_2c54ee24(param_1,_LAB_2c551ef0,param_2 + 0x2c,1);
      if (-1 < iVar6) {
        uVar4 = 0;
        FUN_2c48dea0(iVar1);
        goto LAB_2c551e94;
      }
    }
LAB_2c551eb6:
    uVar4 = 0xffffffff;
    FUN_2c48dea0(iVar1);
  }
LAB_2c551e94:
  if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c551ee4 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar4;
}

