/* FUN_140a2db4 @ 0x140a2db4 */

void FUN_140a2db4(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  puVar3 = DAT_140a2e24;
  uVar2 = DAT_140a2e20;
  if (DAT_140a2e1c <= DAT_140a2e20) {
                    /* WARNING: Subroutine does not return */
    FUN_140a2ce8();
  }
  uVar6 = DAT_140a2e1c - DAT_140a2e20;
  *DAT_140a2e24 = uVar6;
  uVar5 = DAT_140a2e34;
  uVar4 = DAT_140a2e30;
  uVar1 = DAT_140a2e28;
  *DAT_140a2e2c = 0;
  FUN_1402a6e8(4,0x26,uVar5,uVar4,uVar1,param_1,uVar6);
  uVar6 = *puVar3;
  uVar1 = DAT_140a2e38;
  if (param_1 < uVar6) {
    *puVar3 = param_1;
    uVar6 = param_1;
    uVar1 = DAT_140a2e38;
  }
  DAT_140a2e38 = uVar1;
  FUN_140e5658(DAT_140a2e3c,0,uVar6);
  FUN_1402a6e8(4,0x2a,DAT_140a2e34,DAT_140a2e30,uVar1,uVar2 - 0x200,param_1);
  return;
}

