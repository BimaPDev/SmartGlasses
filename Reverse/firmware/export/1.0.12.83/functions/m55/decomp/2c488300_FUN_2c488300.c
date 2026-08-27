/* FUN_2c488300 @ 0x2c488300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c488300(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte abStack_34 [4];
  int iStack_30;
  undefined4 uStack_2c;
  byte *pbStack_28;
  undefined4 uStack_24;
  byte abStack_20 [4];
  int iStack_1c;
  
  bVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
  FUN_2c648600(_LAB_2c488324);
  puVar2 = _LAB_2c4890d8;
  puVar1 = _LAB_2c4890d4;
  iVar5 = _LAB_2c488328;
  iStack_1c = *_LAB_2c4890cc;
  if (_LAB_2c488328 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18a,_LAB_2c4890e8,_LAB_2c4890e4,_LAB_2c4890fc);
  }
  if (*_LAB_2c4890d0 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18e,_LAB_2c4890e8,_LAB_2c4890e4,_LAB_2c4890e0);
  }
  iStack_30 = _LAB_2c488328;
  abStack_34[0] = bVar3;
  FUN_2c644044(*_LAB_2c4890d4,0xffffffff);
  iVar4 = FUN_2c4858f0(*puVar2,_LAB_2c4890dc,abStack_34);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x198,_LAB_2c4890e8,_LAB_2c4890e4,_LAB_2c4890f0,_LAB_2c4890ec,iVar5);
  }
  FUN_2c485820(*puVar2,iVar4);
  if (bVar3 < 2) {
    iVar5 = *_LAB_2c4890f8;
    *_LAB_2c4890f8 = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      func_0x2c488818(bVar3);
    }
  }
  else if (bVar3 == 2) {
    iVar5 = *_LAB_2c4890f4;
    *_LAB_2c4890f4 = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      uStack_2c = 0x23;
      pbStack_28 = abStack_20;
      uStack_24 = 2;
      abStack_20[1] = 0;
      abStack_20[0] = bVar3;
      FUN_2c49737c(0x23,pbStack_28,2);
    }
  }
  FUN_2c644080(*puVar1);
  if (*_LAB_2c4890cc == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

