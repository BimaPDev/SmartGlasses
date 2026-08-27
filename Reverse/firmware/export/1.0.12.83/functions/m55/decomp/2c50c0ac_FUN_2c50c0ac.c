/* FUN_2c50c0ac @ 0x2c50c0ac */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50c0ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bStack_1d;
  int iStack_1c;
  
  uVar3 = _LAB_2c50c1b4;
  iVar7 = 0;
  iStack_1c = *_LAB_2c50c1b0;
  iVar8 = param_1;
  do {
    bStack_1d = (byte)iVar7;
    puVar2 = (undefined4 *)FUN_2c50b6e8(param_1 + 0x14c,&bStack_1d);
    iVar7 = iVar7 + 1;
    puVar1 = (undefined4 *)(iVar8 + 0x24);
    iVar8 = iVar8 + 0x48;
    FUN_2c5eb89c(*(undefined4 *)*puVar2,*puVar1,0,uVar3,param_1);
  } while (iVar7 != 4);
  pbVar5 = *(byte **)(param_1 + 0x144);
  if (*(byte **)(param_1 + 0x140) == pbVar5) {
    bStack_1d = 0;
    while( true ) {
      if (*(byte **)(param_1 + 0x148) == pbVar5) {
        FUN_2c50bfdc(param_1 + 0x140,pbVar5,&bStack_1d);
      }
      else {
        *pbVar5 = bStack_1d;
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
      }
      bStack_1d = bStack_1d + 1;
      if (4 < bStack_1d) break;
      pbVar5 = *(byte **)(param_1 + 0x144);
    }
  }
  else {
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1c));
    FUN_2c605208(uVar3,0);
  }
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1c));
  FUN_2c606d90(uVar3,0xff,0);
  uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1c));
  FUN_2c606d6c(uVar3,0x19,0);
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x18),1);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 == 0) {
    if (*_LAB_2c50c1b0 == iStack_1c) {
      return;
    }
  }
  else if (*_LAB_2c50c1b0 == iStack_1c) {
    iVar6 = *DAT_2c606b68;
    iVar7 = FUN_2c607214();
    *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & 0xfffffffe;
    FUN_2c607df0(iVar8);
    iVar4 = FUN_2c607214(iVar8);
    if (iVar4 != 0) {
      FUN_2c6041d4(iVar8);
      FUN_2c607248();
      FUN_2c607248(iVar8);
    }
    iVar4 = FUN_2c607214(iVar8);
    if (iVar4 == iVar7) {
      if (*DAT_2c606b68 == iVar6) {
        return;
      }
    }
    else {
      FUN_2c6041d4(iVar8);
      if (*DAT_2c606b68 == iVar6) {
        FUN_2c607248();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

