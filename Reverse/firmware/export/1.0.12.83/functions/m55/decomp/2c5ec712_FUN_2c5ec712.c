/* FUN_2c5ec712 @ 0x2c5ec712 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ec712(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(byte *)(param_3 + 0x3a0);
  if ((uint)*(byte *)(param_3 + 0x3a1) != (uVar3 + 1 & 0xf)) {
    *(undefined4 *)(param_3 + 0x2e0 + uVar3 * 0xc) = *param_1;
    uVar1 = _LAB_2c5ec794;
    iVar4 = param_3 + 0x2e0 + uVar3 * 0xc;
    *(undefined4 *)(iVar4 + 4) = param_1[1];
    *(undefined4 *)(iVar4 + 8) = param_1[2];
    uVar2 = _LAB_2c5ec798;
    *(byte *)(param_3 + 0x3a0) = *(char *)(param_3 + 0x3a0) + 1U & 0xf;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ec79c,0x6bb,uVar1,uVar2,uVar1,*(undefined4 *)(iVar4 + 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ec79c,0x6b2,_LAB_2c5ec794,_LAB_2c5ec7a0,_LAB_2c5ec794);
}

