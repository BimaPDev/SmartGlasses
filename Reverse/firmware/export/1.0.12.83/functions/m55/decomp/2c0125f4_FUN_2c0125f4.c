/* FUN_2c0125f4 @ 0x2c0125f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0125f4(undefined4 param_1,undefined4 param_2,int *param_3,short *param_4)

{
  ushort uStack_e;
  int iStack_c;
  
  iStack_c = *param_3;
  if ((*param_4 == 1) && (FUN_2c008e4c(0x5e,&uStack_e,0), -1 < (int)((uint)uStack_e << 0x16))) {
    FUN_2c00b820(4,0x1822,_DAT_2c01266c,_DAT_2c012668,_DAT_2c012664,3);
    FUN_2c0121ec(1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*_DAT_2c01265c == iStack_c) {
                    /* WARNING: Could not recover jumptable at 0x2c013e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_2c013e38)(*_DAT_2c012660);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

