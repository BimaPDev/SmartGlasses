/* FUN_2c4784f4 @ 0x2c4784f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4784f4(uint param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  pbVar1 = _LAB_2c4785c4;
  uStack_14 = *_LAB_2c4785c0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x35b,_LAB_2c4785d4,_LAB_2c4785d0,_LAB_2c4785e0,_LAB_2c4785dc,0);
  }
  if ((int)param_1 < 4) {
    uVar4 = param_1 & 0xff;
    *_LAB_2c4785c4 = (byte)param_1;
    goto LAB_2c478510;
  }
  *_LAB_2c4785c4 = 4;
  iVar3 = FUN_2c471604(1);
  piVar2 = _LAB_2c4785e4;
  if (*(char *)(iVar3 + 0x3c) != '\x01') {
    iVar3 = *_LAB_2c4785e4;
    if (iVar3 == 0) {
      iVar3 = FUN_2c64418c(_LAB_2c4785ec,0,0);
      *piVar2 = iVar3;
      if (iVar3 == 0) goto LAB_2c47855a;
    }
    FUN_2c6448b4(iVar3,_LAB_2c4785e8);
  }
LAB_2c47855a:
  auStack_18[0] = 0;
  func_0x2c46e2a4(auStack_18,1);
  uVar4 = (uint)*pbVar1;
LAB_2c478510:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x39b,_LAB_2c4785d4,_LAB_2c4785d0,_LAB_2c4785cc,_LAB_2c4785c8,uVar4);
}

