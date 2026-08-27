/* FUN_2c002840 @ 0x2c002840 */

void FUN_2c002840(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_2c00286c;
  uVar3 = *(uint *)(DAT_2c00286c + 0x6c);
  uVar4 = DAT_2c002878 | uVar3;
  uVar2 = DAT_2c002874 | uVar3;
  *(uint *)(DAT_2c00286c + 0x6c) = DAT_2c002870 | uVar3;
  *(uint *)(iVar1 + 0x6c) = uVar4;
  uVar4 = DAT_2c00287c;
  *(uint *)(iVar1 + 0x6c) = uVar2;
  uVar2 = uVar3 | DAT_2c002880;
  *(uint *)(iVar1 + 0x6c) = uVar4 | uVar3;
  *(uint *)(iVar1 + 0x6c) = uVar2;
  return;
}

