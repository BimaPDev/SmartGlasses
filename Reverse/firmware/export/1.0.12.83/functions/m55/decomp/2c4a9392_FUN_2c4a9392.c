/* FUN_2c4a9392 @ 0x2c4a9392 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4a9392(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool in_ZR;
  bool in_CY;
  
  if ((!in_CY || in_ZR) &&
     (puVar2 = *(undefined4 **)(_LAB_2c4a93d8 + param_1 * 4), puVar2 != (undefined4 *)0x0)) {
    iVar1 = func_0x2c4ad3e0(*puVar2);
    if (-1 < iVar1) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5d3,_LAB_2c4a93e8,_LAB_2c4a93e4,_LAB_2c4a93e0,*(undefined1 *)(puVar2 + 3),
          _LAB_2c4a93dc);
  }
  return -0x16;
}

