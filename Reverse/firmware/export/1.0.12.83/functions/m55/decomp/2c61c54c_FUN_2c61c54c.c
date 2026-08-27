/* FUN_2c61c54c @ 0x2c61c54c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c54c(int param_1,uint param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uStack_2a;
  short sStack_28;
  short sStack_26;
  undefined1 auStack_24 [8];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c61c5fc;
  if (0x168 < param_2) {
    param_2 = param_2 - 0x168 & 0xffff;
  }
  if (0x168 < param_3) {
    param_3 = param_3 - 0x168 & 0xffff;
  }
  uVar3 = param_2 + *(ushort *)(param_1 + 0x24) & 0xffff;
  uVar4 = *(ushort *)(param_1 + 0x24) + param_3 & 0xffff;
  if (0x168 < uVar3) {
    uVar3 = uVar3 - 0x168 & 0xffff;
  }
  if (0x168 < uVar4) {
    uVar4 = uVar4 - 0x168 & 0xffff;
  }
  FUN_2c61c284(param_1,&sStack_28,&uStack_2a);
  sVar1 = FUN_2c6033b4(param_1,0x20000,0x50);
  iVar2 = FUN_2c6033b4(param_1,0x20000,0x51);
  FUN_2c614fc0((int)sStack_28,(int)sStack_26,uStack_2a,uVar3,uVar4,(int)sVar1,iVar2 != 0,auStack_24)
  ;
  FUN_2c6078f0(param_1,auStack_24);
  if (*_LAB_2c61c5fc == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

