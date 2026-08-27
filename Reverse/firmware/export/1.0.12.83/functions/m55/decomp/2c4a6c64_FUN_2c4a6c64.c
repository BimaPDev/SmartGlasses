/* FUN_2c4a6c64 @ 0x2c4a6c64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a6c64(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar6 = _LAB_2c4a6d30;
  uVar5 = _LAB_2c4a6d2c;
  uVar4 = _LAB_2c4a6d28;
  uVar3 = _LAB_2c4a6d18;
  piVar2 = _LAB_2c4a6d14;
  puVar1 = _LAB_2c4a6d10;
  uStack_14 = *_LAB_2c4a6d0c;
  while( true ) {
    FUN_2c6471b4(*puVar1,0xffffffff);
    iVar7 = FUN_2c4969c8();
    if (iVar7 != 0) {
      FUN_2c4967a0(0);
    }
    iVar8 = *piVar2;
    uStack_18 = 0;
    iVar7 = FUN_2c4a5988(0,&uStack_18);
    if (iVar7 != 0) break;
    if (*(char *)(iVar8 + 0x54) != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x710,uVar3,uVar6,uVar5,uVar4,0x710,1);
    }
    FUN_2c4a6b68(iVar8);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,700,uVar3,uVar6,_LAB_2c4a6d20,_LAB_2c4a6d1c,700);
}

