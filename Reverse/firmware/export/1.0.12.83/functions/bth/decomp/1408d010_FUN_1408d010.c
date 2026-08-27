/* FUN_1408d010 @ 0x1408d010 */

void FUN_1408d010(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined2 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + 0x14);
  while( true ) {
    piVar2 = piVar2 + 1;
    if ((*piVar2 != 0) && (*(byte *)(*piVar2 + 0x1c) == param_3)) break;
    if (piVar2 == (int *)(param_2 + 0x44)) {
      FUN_14075520(param_5,param_4,param_3,param_4);
      return;
    }
  }
  puVar1 = (undefined2 *)FUN_14075258(param_5);
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1408d074,param_1,*puVar1);
}

