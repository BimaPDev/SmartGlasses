/* FUN_2c499270 @ 0x2c499270 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c499270(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iStack_38;
  int *piStack_34;
  undefined4 uStack_2c;
  
  uVar6 = _LAB_2c4993cc;
  uVar5 = _LAB_2c4993c4;
  pcVar4 = _LAB_2c4993c0;
  uVar3 = _LAB_2c499398;
  iVar2 = _LAB_2c499394;
  puVar1 = _LAB_2c499390;
  uStack_2c = *_LAB_2c49938c;
  while( true ) {
    do {
      do {
        FUN_2c644324(&iStack_38,*puVar1,0xffffffff);
        piVar7 = piStack_34;
      } while (iStack_38 != 0x20);
    } while ((*(char *)(iVar2 + 0x42) == '\0') || (*(char *)(iVar2 + 0x43) != '\x01'));
    if ((piStack_34 == (int *)0x0) || (*piStack_34 != 0)) break;
    if ((*_LAB_2c49939c != 1) && (*_LAB_2c4993a0 != 1)) {
      iVar8 = FUN_2c498db4(0x76c);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x40d,uVar3,uVar6,_LAB_2c4993bc);
      }
      if (0x50 < *_LAB_2c4993ac) {
        FUN_2c66b4b8(_LAB_2c4993b4,_LAB_2c4993b0);
        FUN_2c487b88(_LAB_2c4993b4,0x14);
      }
      if (0x50 < _LAB_2c4993ac[1]) {
        FUN_2c66b4b8(_LAB_2c4993b4,_LAB_2c4993b8);
        FUN_2c487b88(_LAB_2c4993b4,0x14);
      }
    }
    iVar8 = FUN_2c644388(*puVar1,piVar7);
    if (iVar8 == 0) {
      *pcVar4 = *pcVar4 + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x422,uVar3,uVar6,uVar5);
}

