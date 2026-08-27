/* FUN_2c5ceb52 @ 0x2c5ceb52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ceb52(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  
  uVar1 = param_2;
  uVar2 = param_2;
  pbVar3 = (byte *)(param_1 + 4);
  do {
    param_2 = param_2 + 8;
    uVar1 = uVar1 | *pbVar3;
    uVar2 = uVar2 | (uint)*pbVar3 | (int)&uStack_38 * 0x10;
    pbVar3 = pbVar3 + 1;
  } while (param_2 != 0x40);
  uStack_38 = 1;
  uStack_14 = FUN_2c5e317c(0x34,1,uVar1,uVar2);
  uStack_18 = (uint)*(byte *)(param_1 + 0xb);
  uStack_1c = (uint)*(byte *)(param_1 + 10);
  uStack_20 = (uint)*(byte *)(param_1 + 9);
  uStack_24 = (uint)*(byte *)(param_1 + 8);
  uStack_28 = (uint)*(byte *)(param_1 + 7);
  uStack_2c = (uint)*(byte *)(param_1 + 6);
  uStack_30 = (uint)*(byte *)(param_1 + 5);
  uStack_34 = (uint)*(byte *)(param_1 + 4);
  uStack_38 = _LAB_2c5cebbc;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cebc4,0x1df,_LAB_2c5cebc0);
}

