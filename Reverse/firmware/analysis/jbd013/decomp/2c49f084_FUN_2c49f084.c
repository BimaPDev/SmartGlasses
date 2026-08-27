/* FUN_2c49f084 @ 0x2c49f084 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49f084(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iStack_20;
  uint auStack_1c [2];
  undefined4 uStack_14;
  
  uVar6 = _LAB_2c49f1b0;
  uVar5 = _LAB_2c49f1ac;
  uVar4 = _DAT_2c49f1a8;
  uVar3 = _DAT_2c49f1a4;
  puVar2 = _LAB_2c49f19c;
  puVar1 = _LAB_2c49f198;
  uStack_14 = *_LAB_2c49f194;
  while( true ) {
    FUN_2c6471b4(*puVar1,0xffffffff);
    iVar7 = FUN_2c4969c8();
    if (iVar7 != 0) {
      FUN_2c4967a0(0);
    }
    uVar8 = *puVar2;
    iStack_20 = 0;
    auStack_1c[0] = 0;
    FUN_2c49e3b0(0,&iStack_20);
    iVar7 = FUN_2c49e3b0(0x184,auStack_1c);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x35e,uVar6,uVar5,_FUN_2c49f1a0);
    }
    auStack_1c[0] = auStack_1c[0] & 0xff00;
    if (iStack_20 << 0xb < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x5fb,uVar6,uVar5,uVar3,iStack_20);
    }
    if (iStack_20 << 0xd < 0) break;
    FUN_2c49ebc8(uVar8,auStack_1c[0]);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x603,uVar6,uVar5,uVar4,iStack_20);
}

