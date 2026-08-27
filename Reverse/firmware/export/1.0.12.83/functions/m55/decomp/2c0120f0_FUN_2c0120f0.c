/* FUN_2c0120f0 @ 0x2c0120f0 */

/* WARNING: Removing unreachable block (ram,0x2c012120) */
/* WARNING: Removing unreachable block (ram,0x2c012122) */
/* WARNING: Removing unreachable block (ram,0x2c012128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c0120f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x22);
  }
  return 0x7d;
}

