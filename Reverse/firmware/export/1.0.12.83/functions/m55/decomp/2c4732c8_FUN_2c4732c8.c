/* FUN_2c4732c8 @ 0x2c4732c8 */

int FUN_2c4732c8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 + 3U & 0xfffffffc;
    if (uVar5 < 0x2000000) {
      if (uVar5 < 0xc) {
        uVar5 = 0xc;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  iVar2 = FUN_2c472ef8(param_1,uVar5);
  if (iVar2 == 0) {
    return 0;
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4730ec,DAT_2c4730f0,0x332,param_4,unaff_r4,unaff_r5);
  }
  uVar4 = *(uint *)(iVar2 + 4);
  if (-1 < (int)(uVar4 << 0x1f)) goto LAB_2c4730d0;
  uVar4 = uVar4 & 0xfffffffc;
  if (uVar4 < uVar5 + 0x10) {
LAB_2c473078:
    puVar3 = (uint *)(iVar2 + 8 + uVar4);
    if (uVar4 != 0) {
      *puVar3 = *puVar3 & 0xfffffffd;
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffe;
      return iVar2 + 8;
    }
  }
  else {
    iVar1 = FUN_2c472fb4(iVar2,uVar5);
    uVar5 = *(uint *)(iVar2 + 4) & 0xfffffffc;
    if (uVar5 != 0) {
      *(int *)(uVar5 + iVar2 + 4) = iVar2;
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 2;
      FUN_2c472e28(param_1);
      uVar4 = *(uint *)(iVar2 + 4) & 0xfffffffc;
      goto LAB_2c473078;
    }
  }
  FUN_2c472ee0();
  uVar4 = extraout_r3;
LAB_2c4730d0:
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4730ec,DAT_2c4730e8,0x2e6,uVar4,unaff_r4,unaff_r5);
}

