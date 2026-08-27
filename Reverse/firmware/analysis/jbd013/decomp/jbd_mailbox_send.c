/* FUN_2c4a92ba @ 0x2c4a92ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4a92ba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  bool in_ZR;
  bool in_CY;
  
  if ((in_CY && !in_ZR) ||
     (puVar2 = *(undefined4 **)(_LAB_2c4a9374 + param_1 * 4), puVar2 == (undefined4 *)0x0)) {
    return -0x16;
  }
  iVar1 = FUN_2c4ad294(*puVar2);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x54e,_LAB_2c4a937c,_LAB_2c4a9384,_LAB_2c4a9380,*(undefined1 *)(puVar2 + 3),
          _LAB_2c4a9378);
  }
  iVar1 = func_0x2c4ad370(*puVar2,param_2,param_3);
  if (-1 < iVar1) {
    iVar1 = func_0x2c4ad300(*puVar2,param_2,param_4);
    if (-1 < iVar1) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x558,_LAB_2c4a937c,_LAB_2c4a9384,_LAB_2c4a938c,*(undefined1 *)(puVar2 + 3),
          _LAB_2c4a9378);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x553,_LAB_2c4a937c,_LAB_2c4a9384,_LAB_2c4a9388,*(undefined1 *)(puVar2 + 3),_LAB_2c4a9378)
  ;
}

