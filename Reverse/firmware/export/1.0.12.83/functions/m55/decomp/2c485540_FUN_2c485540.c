/* FUN_2c485540 @ 0x2c485540 */

/* WARNING: Removing unreachable block (ram,0x2c469e9e) */
/* WARNING: Removing unreachable block (ram,0x2c469e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c485540(void)

{
  int iVar1;
  undefined4 in_r3;
  
  FUN_2c6741e8(0x711,_LAB_2c485594,_LAB_2c485590,in_r3,in_r3);
  iVar1 = func_0x2c47a9e0();
  if ((iVar1 == 0) || (iVar1 = func_0x2c47aa44(), iVar1 == 0)) {
    return;
  }
  iVar1 = FUN_2c46db38();
  iVar1 = (**(code **)(iVar1 + 4))(_LAB_2c485598);
  if (iVar1 == 0) {
    FUN_2c48549c();
  }
  else {
    FUN_2c6741e8(0x711,_LAB_2c4855a4,_LAB_2c4855a0);
  }
  *_LAB_2c48559c = 1;
  if (*_LAB_2c469ec0 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xe3,_LAB_2c469ed0,_LAB_2c469ecc,uRam2c469ee0,_LAB_2c469ec4,0);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xeb,_LAB_2c469ed0,_LAB_2c469ecc,_LAB_2c469ed4,_LAB_2c469ec4,0);
}

