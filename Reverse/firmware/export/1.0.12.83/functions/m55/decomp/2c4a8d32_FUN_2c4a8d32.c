/* FUN_2c4a8d32 @ 0x2c4a8d32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a8d32(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x30c,_LAB_2c4a8dc0,_LAB_2c4a8dbc,_LAB_2c4a8dc4,_LAB_2c4a8db4,param_1);
  }
  puVar2 = *(undefined4 **)(_LAB_2c4a8db0 + param_1 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = func_0x2c4aaac0(*puVar2);
    if (-1 < iVar1) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x319,_LAB_2c4a8dc0,_LAB_2c4a8dbc,_LAB_2c4a8db8,*(undefined1 *)(puVar2 + 3),
          _LAB_2c4a8db4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x311,_LAB_2c4a8dc0,_LAB_2c4a8dbc,_LAB_2c4a8dc8,_LAB_2c4a8db4,param_1);
}

