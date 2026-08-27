/* FUN_2c4a536c @ 0x2c4a536c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a536c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  int iStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  
  uVar6 = _LAB_2c4a5470;
  uVar5 = _LAB_2c4a546c;
  uVar4 = _LAB_2c4a5468;
  piVar3 = _LAB_2c4a5458;
  puVar2 = _LAB_2c4a5454;
  uStack_14 = *_LAB_2c4a5450;
  while( true ) {
    FUN_2c6471b4(*puVar2,0xffffffff);
    iVar7 = FUN_2c4969c8();
    if (iVar7 != 0) {
      FUN_2c4967a0(0);
    }
    iVar9 = *piVar3;
    iStack_1c = 0;
    uStack_18 = 0;
    FUN_2c4a4514(0,&iStack_1c);
    iVar7 = FUN_2c4a4514(0x184,&uStack_18);
    if (iVar7 != 0) break;
    uVar8 = uStack_18 & 0xff00;
    if (iStack_1c << 0xb < 0) {
      uStack_18 = uVar8;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x570,uVar6,uVar5,_LAB_2c4a545c,uVar4,0x570);
    }
    uVar1 = uStack_18 & 0x700;
    uStack_18 = uVar8;
    if (uVar1 != 0) {
      if (*(char *)(iVar9 + 0x11) == '\0') {
        FUN_2c4a416c();
      }
      *(undefined1 *)(iVar9 + 0x12) = 0;
      *(undefined1 *)(iVar9 + 0x11) = 1;
    }
    uStack_1e = 0;
    uStack_20 = (undefined1)(uVar8 >> 8);
    uStack_1f = 1;
    FUN_2c4a4300(&uStack_20);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2b8,uVar6,uVar5,_LAB_2c4a5464,_LAB_2c4a5460,0x2b8);
}

