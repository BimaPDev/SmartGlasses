/* FUN_2c4870fc @ 0x2c4870fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4870fc(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_c;
  
  uVar4 = _LAB_2c4871c4;
  piVar2 = _LAB_2c4871ac;
  piVar1 = _LAB_2c4871a8;
  uStack_c = *_LAB_2c4871a4;
  do {
    uVar3 = _DAT_2c4871b0;
    iVar6 = *piVar1;
    do {
      while( true ) {
        if (iVar6 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        FUN_2c644324(&iStack_18,iVar6,0xffffffff);
        puVar5 = puStack_14;
        if (iStack_18 == 0x20) break;
        iVar6 = *piVar1;
      }
      switch(*puStack_14) {
      case 0:
        if (*piVar2 != 0) {
          FUN_2c674158(_LAB_2c4871b4,0xc);
          FUN_2c6448f0(*piVar2);
          FUN_2c6448b4(*piVar2,1000);
        }
        break;
      case 1:
        if (*piVar2 != 0) {
          FUN_2c674158(_LAB_2c4871c0,0xb);
          FUN_2c6448f0(*piVar2);
        }
        break;
      case 2:
        FUN_2c674158(_LAB_2c4871b8,0x16);
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4871bc);
      case 3:
        FUN_2c674158(uVar4,0x18);
        FUN_2c66ac44(uVar3,0);
      }
      iVar6 = 0;
    } while (*piVar1 == 0);
    FUN_2c644388(*piVar1,puVar5);
  } while( true );
}

