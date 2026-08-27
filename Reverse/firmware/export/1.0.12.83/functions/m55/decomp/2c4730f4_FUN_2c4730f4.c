/* FUN_2c4730f4 @ 0x2c4730f4 */

int FUN_2c4730f4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = *(uint *)(param_2 + 4) & 0xfffffffc;
  puVar4 = (uint *)(uVar2 + param_2 + 8);
  if (uVar2 != 0) {
    if (puVar4 + -1 == (uint *)0x0) goto LAB_2c47315c;
    uVar2 = *puVar4;
    if (-1 < (int)(uVar2 << 0x1f)) {
      return param_2;
    }
    uVar3 = uVar2 & 0xfffffffc;
    if (uVar3 < 0x80) {
      uVar2 = (int)uVar2 >> 2;
      iVar1 = 0;
    }
    else {
      iVar1 = 0x19 - LZCOUNT(uVar3);
      uVar2 = uVar3 >> (0x1aU - LZCOUNT(uVar3) & 0xff) ^ 0x20;
    }
    FUN_2c472dbc(param_1,puVar4 + -1,iVar1,uVar2);
    if ((*(uint *)(param_2 + 4) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c473178,DAT_2c47317c,0x2bd);
    }
    uVar2 = (*puVar4 & 0xfffffffc) + *(uint *)(param_2 + 4) + 4;
    *(uint *)(param_2 + 4) = uVar2;
    uVar2 = uVar2 & 0xfffffffc;
    if (uVar2 != 0) {
      *(int *)(param_2 + 4 + uVar2) = param_2;
      return param_2;
    }
  }
  FUN_2c472ee0();
LAB_2c47315c:
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c473178,DAT_2c473174,0x2d7);
}

