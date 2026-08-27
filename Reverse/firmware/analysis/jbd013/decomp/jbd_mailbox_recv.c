/* FUN_2c4a9a7a @ 0x2c4a9a7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4a9a7a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1bf,_LAB_2c4a9abc,_LAB_2c4a9ab8,_LAB_2c4a9ab4);
  }
  puVar2 = (undefined4 *)*_LAB_2c4a9374;
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_2c4ad294(*puVar2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x54e,_LAB_2c4a937c,_LAB_2c4a9384,_LAB_2c4a9380,*(undefined1 *)(puVar2 + 3),
            _LAB_2c4a9378);
    }
    iVar1 = func_0x2c4ad370(*puVar2,0,param_1);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x553,_LAB_2c4a937c,_LAB_2c4a9384,_LAB_2c4a9388,*(undefined1 *)(puVar2 + 3),
            _LAB_2c4a9378);
    }
    iVar1 = func_0x2c4ad300(*puVar2,0,param_2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x558,_LAB_2c4a937c,_LAB_2c4a9384,_LAB_2c4a938c,*(undefined1 *)(puVar2 + 3),
            _LAB_2c4a9378);
    }
  }
  return iVar1;
}

